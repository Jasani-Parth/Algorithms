/**

- https://leetcode.com/problems/arithmetic-slices/

**/

class Solution {
    
private :
    
    std::vector<int> ProcessArray(std::vector<int> nums)
    {
        std::vector<int> res(nums.size(),0) ;
        
        for( int i = 2 ; i < nums.size() ; i++ )
        {
            if ( nums[i]-nums[i-1] == nums[i-1]-nums[i-2] )
            {
                res[i] = res[i-1]+1 ;
            }
        }
        
        return res ;
    } // ---------------------------------------------------------- O(n)
    
    int Sum(std::vector<int> nums )
    {
        int count = 0 ;
        
        for( int i = 0 ; i < nums.size() ; i++ )
            count += nums[i] ;
        
        return count ;
    } // ---------------------------------------------------------- O(n)
    
    
public:
    
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        std::vector<int> res = ProcessArray(nums) ;
        
        return Sum(res);
    }
};
