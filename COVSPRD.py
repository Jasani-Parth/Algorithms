'''

A disease is spreading through ChefLand!

The disease spreads as follows:

At the end of day 0, a single person is infected with the disease.
During the next 10 days, the number of infected people doubles each day, until the disease has spread to all people in ChefLand.
From day 11 onwards, the number of infected people triples each day, until the disease has spread to all people in ChefLand.
You are given the population of ChefLand N and a day D. How many people in ChefLand are infected at the end of day D?

Sample Input 1 
4
100 3
2000 10
6000 11
10 11

Sample Output 1 
8
1024
3072
10

'''


for _ in range(int(input())) :
    
    N,D = list(map(int,input().split(' ')))
    
    if D == 0 :
        
        print(min(N,1))
        
    elif D <= 10 and D > 0 :
        
        print(min(2**D,N))
    
    elif D == 11 :
        
        print(min(N,3072))
        
    elif D <= 20 :
        
        print(min(N,3072 * (3**(D-11))))
    
    else :
        
        print(min(N,100000000))
            
