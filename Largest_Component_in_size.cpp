You are given an integer array of unique positive integers nums. Consider the following graph:

There are nums.length nodes, labeled nums[0] to nums[nums.length - 1],
There is an undirected edge between nums[i] and nums[j] if nums[i] and nums[j] share a common factor greater than 1.
Return the size of the largest connected component in the graph.

Example 1:

Input: nums = [4,6,15,35]
Output: 4
  
  
  /** THIS IS BRUTE_FORCE APPORCH **/
  
class Solution {

public :
    
    std::map<int,std::list<int>> adj_list ;
    std::map<int,bool> visited ;
    int num_visited = 0 ;
    
public:
    
    int BFS( int node )
    {
        this->visited[node] = true ;
        this->num_visited = 0 ;
        int count = 0 ;

        std::list<int> Q ;

        Q.push_back(node) ;

        while( ! Q.empty() )
        {
            int s = Q.front() ;
            cout << s << " " ;
            Q.pop_front() ;

            for ( auto it : this->adj_list[s] )
            {
                  if( ! this->visited[it] )
                  {
                        this->visited[it] = true ;
                        count++ ;
                        num_visited++ ;
                        Q.push_back(it) ;
                  }
            }
        }
        
        return count ;
    }
    
    int largestComponentSize(vector<int>& nums) {
        
        int n = nums.size() ;
        int ans = INT_MIN ;
        
        for( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < n ; j++ )
            {
                if( i != j && __gcd(nums[i],nums[j]) > 1 )
                {
                    adj_list[nums[i]].push_back(nums[j]) ;
                }
            }
        }
    
        for ( int i = 0 ; i < n ; i++ )
        {
            if( this->visited[nums[i]] == false )
            {
                int b = BFS(nums[i]) ;
                
                if(b+1>ans)
                {
                    ans  = b+1 ;
                }
            }
        }
        return ans ;
        
    }
};
