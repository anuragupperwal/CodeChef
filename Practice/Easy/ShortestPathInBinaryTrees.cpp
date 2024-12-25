#include "/Users/anuragupperwal/stdc++.h"

using namespace std;

#define ll long long int 

class Node {
    public:
        ll data, id;
        Node* left, * right;
};

class BST {
    public:
        Node* addEdge(ll height, ll i, ll value, ll n){
            Node* newNode = new Node;
            if(i<=height && value<=n){

                newNode->data = value;
                // cout<<value<<" ";
                
                // cout<<"Left of value; "<<value<<" ";
                newNode->left = addEdge(height, i+1, 2*value, n);
                // cout<<"Left of right; "<<value<<" ";
                newNode->right = addEdge(height, i+1, 2*value+1, n);

            }
            else return NULL;

            return newNode;
        }

        Node* inputTree(ll n) {
            ll height = log2(n);
            Node* newNode = new Node;

            newNode = addEdge(height, 0, 1, n);

            return newNode;
        }

        void inorder(Node *root) {
            if(root == NULL) return;
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }

};


class MinDist {
    public:
        bool srcCheck, destCheck;
        MinDist() {
            this->srcCheck = false;
            this->destCheck = false;
        }


        //Lowest commen ancestor util fun to find LCA
        Node* LCAUtil(Node* root, int src, int dest){
            if(root == NULL) return NULL;

            if(root->data == src) {
                srcCheck = true;
                return root;
            }
            if(root->data == dest) {
                destCheck = true;
                return root;
            }

            Node* leftLCA = LCA(root->left, src, dest);
            Node* rightLCA = LCA(root->right, src, dest);

            if(leftLCA!= NULL && rightLCA!= NULL) return root;
            return (leftLCA != NULL)? leftLCA : rightLCA;
        }

        //to find if a node exist in the tree.
        bool find(Node* node, int val) {
            if(node == NULL) return false;

            if(node->data == val || find(node->left, val) || find(node->right, val)) return true;

            return false;
        }

        //to find Lowest common ancestor of src and dest nodes
        Node* LCA(Node* root, int src, int dest) {
            Node* LCARes = LCAUtil(root, src, dest);

            Node* temp = new Node;
            temp->data = -1;

            //to check if both the nodes exist in the tree
            if(srcCheck && destCheck || srcCheck && find(LCARes, dest) || destCheck && find(LCARes, src)) {
                return LCARes;
            }
            else return temp;
        }

        //to find the distance of a node from the root node.
        int distFromRoot(Node* LCA, int val, int dist) {
            if(LCA == NULL) return -1;

            if(LCA->data == val) return dist;

            int d = distFromRoot(LCA->left, val, dist+1);
            if(d!= -1) return d;
            d = distFromRoot(LCA->right, val, dist+1);
            return d;
        }

        //to find the minimum distance between two nodes in a tree.
        int minDist(Node* root, int src, int dest) {
            if(root == NULL) return -1;

            Node* lca = LCA(root, src, dest);
            
            if(lca == NULL) return -1;

            int d1 = distFromRoot(lca, src, 0);
            int d2 = distFromRoot(lca, dest, 0);
            // cout<<d1<<" "<<d2<<"\n";

            return (d1+d2);

        }
};


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);

    Node* root;
    BST t1;
    root = t1.inputTree(10000);

    vector< pair< int, int> > queries;
    ll n;
    cin>>n;
    MinDist m;

    for(int i=0; i<n; ++i) {
        pair <int, int> q;
        cin>>q.first>>q.second;
        queries.push_back(make_pair(q.first, q.second));
    }
    for(int i=0; i<n; ++i) {
        int ans = m.minDist(root, queries[i].first, queries[i].second);
        cout<<ans<<"\n";
    }


	return 0;
}
