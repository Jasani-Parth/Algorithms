#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;
typedef unsigned long long ull ;
typedef long double ld ;

void run()
{
      std::ios_base::sync_with_stdio(false) ;
      std::cin.tie(0) ;
      std::cout.tie(0) ;
}

int main(void)
{
      run() ;
      int t ;
      std::cin >> t ;

      while(t--)
      {
            int N , index=0 , freq=0 ;
            std::cin >> N ;
            std::vector<long long> a , b , s;
            std::vector<std::vector<long long>>  result ;
            long long min = INT_MAX ;

            for( int i = 0 ; i < N ; i++ )
            {
                  int *ele = new int ;
                  std::cin >> *ele ;
                  a.push_back(*(ele)) ;
                  delete ele ;
            }

            for( int i = 0 ; i < N ; i++ )
            {
                  int *ele = new int ;
                  std::cin >> *ele ;
                  b.push_back(*(ele)) ;

                  if(min>=((a[0]+b[i])%N)) 
                  {
                        min = ((a[0]+b[i])%N);                        
                  }

                  delete ele ;
            }

            for( int i = 0 ; i < N ; i++ )
            {
                  if( min == (a[0]+b[i])%N )
                  {
                        freq++ ;
                        s.push_back(i) ;
                  }    
            }

            for( int i = 1 ; i <= freq ; i++ )
            {
                  std::vector<long long> temp ;

                  index = s[i-1] ;

                  for( int j = 0 ; j < N ; j++ )
                  {
                        temp.push_back( ( a[j%N] + b[index%N] ) % N ) ;
                        index++ ;
                  }

                  result.push_back(temp) ;
            }

            std::sort( result.begin() , result.end() ) ;
            
            for( auto it : result[0] )
                  std::cout << it << " " ;

            std::cout << std::endl ;
      }

      return 0;
}