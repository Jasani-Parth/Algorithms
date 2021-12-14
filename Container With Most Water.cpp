/**

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Notice that you may not slant the container.

Example 1:

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

**/

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxarea = 0 ;
        int low = 0 , high = height.size()-1 ;
        
        while(low<high)
        {
            int m = ( height[low] >= height[high] ? height[high] : height[low] ) ;
            
            if((high-low) * m > maxarea )
            {
                maxarea = (high-low) * m ;
            }
            
            if(height[low]>height[high])
            {
                high-- ;
                continue ;
            }
            else if(height[low]<height[high])
            {
                low++ ;
                continue ;
            }
            else if(height[low]==height[high])
            {
                if(height[low+1]>height[high-1])
                {
                    low++ ;
                }
                else
                {
                    high-- ;
                }
                continue ;
            }
        }
        
        return maxarea ;
    }
};
