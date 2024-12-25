import numpy as np

def SieveOfAtkin(limit):
    
    list = []
    # 2 and 3 are known
    # to be prime
    if (limit > 2):
        list.append(2)
    if (limit > 3):
        list.append(3)
 
    # Initialise the sieve
    # array with False values
    sieve = [False] * limit
    for i in range( 0 , limit):
        sieve[i] = False


    x = 1
    while(x * x < limit ) :
        y = 1
        while(y * y < limit ) :
             
            # Main part of
            # Sieve of Atkin
            n = (4 * x * x) + (y * y)
            if (n <= limit and (n % 12 == 1 or
                                n % 12 == 5)):
                sieve[n] ^= True
 
            n = (3 * x * x) + (y * y)
            if (n < limit and n % 12 == 7):
                if(n == limit):
                    print('somethiong')
                sieve[n] ^= True
 
            n = (3 * x * x) - (y * y)
            if (x > y and n <= limit and
                          n % 12 == 11):
                sieve[n] ^= True
            y += 1
        x += 1
     
    # Mark all multiples of
    # squares as non-prime
    r = 5
    while(r * r < limit) :
        if (sieve[r]) :
            for i in range(r * r, limit, r * r):
                sieve[i] = False
         
    # Print primes
    # using sieve[]
    for a in range(5 , limit ):
        if (sieve[a]):
            list.append(a)

    return list
 
# Driver Code
limit = 20
# SieveOfAtkin(limit)


t = int(input())

while(t >0):
    [x, y] = [int(z) for z in input().split(' ')]
    print(x, y)

    primeX = []
    primeY = []

    primeX = SieveOfAtkin(x+2)
    primeY = SieveOfAtkin(y)

    primeLen = len(primeY) - len(primeX)

    print(y - x - primeLen)

    t = t -1



