/**

- https://leetcode.com/problems/all-paths-from-source-to-target/

**/

class Solution {
    
public:
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        // This Is BFS Approch ..
        
        std::vector<vector<int>> res ;
        std::list<std::vector<int>> Q ;
        
        int n = graph.size() ;
        
        Q.push_back({0}) ; // here we always start from 0 because source is 0.
        // so initially path is {0}.
        
        while ( ! Q.empty() )
        {
            std::vector<int> path = Q.front() ; 
            Q.pop_front() ;
            
            int lastnode = path[path.size()-1] ;
            
            if( lastnode == n - 1 )
            {
                res.push_back(path) ; // If We Reach Destination..
            }
            else
            {                
                for( auto it : graph[lastnode] )
                {
                    std::vector<int> t = path ;
                    t.push_back(it) ;
                    
                    Q.push_back(t) ; // Update Each path ..
                }   
            }
        }
        
        return res ;
        
    }
};
