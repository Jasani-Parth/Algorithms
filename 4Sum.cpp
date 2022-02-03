/**

- https://leetcode.com/problems/4sum/

**/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        std::vector<std::vector<int>> res ;
        
        std::sort(nums.begin(),nums.end()) ;
        
        int n = nums.size() ;
        
        for( int i = 0 ; i < n ; i++ )
        {
            for( int j = i+1 ; j < n ; j++ )
            {
                int low = j+1;
                int high = n-1;
                
                int nt = target - nums[i] - nums[j] ;
                
                while( low < high )
                {
                    if( nums[low]+nums[high] < nt )
                        low++ ;
                    else if ( nums[low]+nums[high] > nt )
                        high-- ;
                    else
                    {
                        std::vector<int> t({nums[i],nums[j],nums[low],nums[high]}) ;
                        res.push_back(t) ;
                        
                        while( low < high && nums[low] == t[2] ) low++ ; // eliminating same values 
                        while( high > low && nums[high] == t[3] ) high-- ;
                    }
                }
                
                while( j+1 < n && nums[j+1] == nums[j] ) j++ ;
            }
            
            while( i+1 < n && nums[i+1] == nums[i] ) i++ ;
        }
        
        return res;
    }
};
