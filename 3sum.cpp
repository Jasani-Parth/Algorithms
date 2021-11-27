/**

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

**/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        if( nums.size() < 3 ) return {} ;
        
        vector<vector<int>>  result ;
        
        std::sort(nums.begin(),nums.end()) ;
        
        for ( int i = 0 ; i < nums.size()-2 ; i++ )
        {
            
            if( i == 0 || nums[i] != nums[i-1]) 
            {
                int j = i+1 , k = nums.size()-1 ;

                while(j<k)
                {
                    int sum = nums[i] + nums[j] + nums[k] ;
                    
                    if( sum == 0 )
                    {
                        result.push_back({nums[i],nums[j],nums[k]}) ;
                        
                        while(j<k && nums[j]==nums[j+1]) j++ ;
                        while(j<k && nums[k]==nums[k-1]) k-- ;
                        
                        j++ ; k-- ;
                    }
                    
                    if( sum > 0 )
                    {
                        k-- ;
                    }
                    else if ( sum < 0 )
                    {
                        j++ ;
                    }
                }
            }
        }
        
        return result ;
    }
};
