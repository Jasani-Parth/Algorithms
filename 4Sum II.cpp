/**

- https://leetcode.com/problems/4sum-ii/

**/

class Solution {
public:
    
    /**
    
    -> Here I Reduce Time-Complexity from O(n^4) to O(n^2).
                                            /          \
                                O(n^3) -  TLE         Accepted
    **/
    
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        std::map<int,int> freq ;
        
        for( auto a : nums1 )
        {
            for( auto b : nums2 )
            {
                freq[a+b]++ ;
            }
        }
        
        int count = 0 ;
        
        for( auto c : nums3 )
        {
            for( auto d : nums4 )
            {
                count += freq[-(c+d)] ;
            }
        }
        
        return count ;
    }
};
