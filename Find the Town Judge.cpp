/**

- https://leetcode.com/problems/find-the-town-judge/

**/

class Solution {

private :
    
    std::map<int,std::list<int>> adj_list ;
    
public:
    
    bool not_present(int n)
    {
        for( auto it : this->adj_list )
        {
            if( it.first != n )
            {
                for( auto iter : it.second )
                {
                    if( iter == n)
                        return false ;
                }
            }
        }
        
        return true ;
    }
    
    int findJudge(int n, vector<vector<int>>& trust) {
        
        int len = trust.size() ;
        
        if( len == 0 && n==1 ) return n ;
        
        for ( int i = 0 ; i < trust.size() ; i++ )
        {
            this->adj_list[trust[i][1]].push_back(trust[i][0]) ;
        }
        
        for(  auto it : this->adj_list )
        {
            if( it.second.size() == n-1 && not_present(it.first))
            {
                return it.first ;
            }
        }
        
        return -1;
    }
};


// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: TRY YOU CAN FIND BETTER THAN THIS :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
