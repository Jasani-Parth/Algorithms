/**

Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

Example 1:

Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]

**/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int m = n ;
        int l=0,r=m-1,t=0,b=n-1 ;
        
        std::vector<std::vector<int>> vec(m,std::vector<int> (n)) ;
        
        char dir = 'r' ;
        int v = 1 ;
        
        while(l<=r && t<=b)
        {
            if(dir=='r')
            {
                for( int i = l ; i <= r ; i++ )
                    vec[t][i] = v++ ;
                
                dir = 'd' ;
                t++ ;
            }
            
            if(dir=='d')
            {
                for( int i = t ; i <= b ; i++ ) 
                    vec[i][r] = v++ ;
                
                dir = 'l' ;
                r-- ;
            }
            
            if( dir == 'l' ) 
            {
                for( int i = r ; i >= l ; i-- )
                {
                    vec[b][i] = v++ ;
                }
                
                dir = 'u' ;
                b-- ;
            }
            
            if( dir == 'u' )
            {
                for( int i = b ; i >= t ; i-- )
                {
                    vec[i][l] = v++ ;
                }
                
                l++ ;
                dir = 'r' ;
            }
        }
        
        return vec ;
    }
};
