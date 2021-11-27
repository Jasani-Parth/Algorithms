/**

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

**/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size() ;
        
        std::vector<int> prefix ;
        std::vector<int> suffix ;
        
        std::vector<int> res ; 
        
        for( int i = 0 ; i < n ; i++ )
        {
            if(i==0)
                prefix.push_back(1) ;
            else{
                prefix.push_back(nums[i-1]*prefix[i-1]) ;
            }
        }
        
        for ( int i = n-1 ; i >= 0 ; i-- )
        {
            if(i==n-1)
                suffix.push_back(1) ;
            else{
                suffix.push_back(nums[i+1]*suffix[suffix.size()-1]) ;
            }
        }
        
        for( int i = 0 ; i < n ; i++ )
            res.push_back(prefix[i]*suffix[n-i-1]) ;
        
        return res ;
    }
};
