#include<bits/stdc++.h>
using namespace std ;

// globle

std::map<int,int> data ;
std::vector<int> vec ;


int fib(int n)
{
    // DP
    
    for ( auto it : data )
    {
        if ( it.first == n )
        {
            //std::cout << "match found for " << it.first << endl ;
            return it.second ;
        }
    }
    
    if ( n == 0 || n == 1 )
        
        return 1 ;
    
    else 
        
        return fib ( n - 1 ) + fib ( n - 2) ;   
}

int main(int argc , char *argv[])
{
    int term = 30 ;
    
    //std::cout << "Enter number of terms : " ;
    //std::cin >> term ;
    
    for ( int i = 0 ;  i <= term ; i++ )
    {
        int x = fib ( i ) ;
        
        data.insert({i,x}) ;
        
        vec.push_back(x) ;
    }   
    
    for ( auto it : vec )
    {
        std::cout << it << "  " ;
    }
    
    /*for ( auto it : data )
    {
        std::cout << std::endl << it.first << " --> " << it.second ;
    }*/
    return 0 ;
}

