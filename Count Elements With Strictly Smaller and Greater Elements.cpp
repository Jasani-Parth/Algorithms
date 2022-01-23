
/**

Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.

Example 1:

Input: nums = [11,7,2,15]
Output: 2
Explanation: The element 7 has the element 2 strictly smaller than it and the element 11 strictly greater than it.
Element 11 has element 7 strictly smaller than it and element 15 strictly greater than it.
In total there are 2 elements having both a strictly smaller and a strictly greater element appear in nums.
Example 2:

Input: nums = [-3,3,3,90]
Output: 2
Explanation: The element 3 has the element -3 strictly smaller than it and the element 90 strictly greater than it.
Since there are two elements with the value 3, in total there are 2 elements having both a strictly smaller and a strictly greater element appear in nums.

**/

class Solution {
public:
    
    std::vector<int> Find(std::vector<int> nums,int len)
    {
        int min = INT_MAX ;
        int max = INT_MIN ;
        
        for ( int i = 0 ; i < len ; i++ )
        {
            if ( nums[i] > max )
                max = nums[i] ;
            
            if ( nums[i] < min )
                min = nums[i] ;
        }
        
        return {min,max} ;
    }
    
    int countElements(vector<int>& nums) {
        
        int n = nums.size() ;
        
        if ( n <= 2 )
            return 0;
        
        std::vector<int> min_max = Find(nums,n) ;
        int min = min_max[0] ;
        int max = min_max[1] ;
        
        int count = 0 ;
        
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( nums[i] != min && nums[i] != max )
                count++ ;
        }
        
        return count ;
        
    }
};
