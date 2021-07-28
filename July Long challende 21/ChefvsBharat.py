
def chefNum(num):
    ans = num
    num = num//10
    while(num>0):
        ans = ans*10 + num%10
        num = num//10

    return ans

def powFun(base, power):
    mod = 10**9 + 7
    ans = 1
    while(power!=0):
        if(power%2 == 0):
            base = ((base%mod)*(base%mod))%mod
            power = power/2
        else:
            ans = ((ans%mod)*(base%mod))%mod
            power = power - 1

    return ans

chefNumArr = [0]*(10**5+1)
prefSumChefNum = [0]*(10**5+1)
for i in range(1,10**5+1):
    chefNumArr[i] = chefNum(i)
    prefSumChefNum[i] = prefSumChefNum[i-1] + chefNumArr[i]

T = int(input())
for k in range(T):
    L, R = map(int , input().split())

    
    ans = powFun(chefNumArr[L], prefSumChefNum[R] - prefSumChefNum[L])

    print(ans)