/**

You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.
You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.
For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60 .

**/

#include<bits/stdc++.h>
using namespace std ;

void fast()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;
}

typedef long long int lli ;

int main(void)
{
    fast() ;
    
    lli c ;
    std::cin >> c ;
    
    std::vector<int> vec ;
    
    for ( int i = 0 ; i < c ; i++ )
    {
        int* ele = new int ;
        std::cin >> *ele ;
        vec.push_back(*ele) ;
        delete ele ;
    }                                  // O(n)
    
    std::sort(vec.begin(),vec.end()) ; // O(log(n))
    
    lli rev = INT_MIN ;
    
    for( int i = 0 ; i < c ; i++ )
    {
        lli c_rev = (c-i)*vec[i] ;
        
        if ( c_rev > rev )
            rev = c_rev ;
    }                                  // O(n)
    
    std::cout << rev << std::endl ;
    
    return 0 ;
}
