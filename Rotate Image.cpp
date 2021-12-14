/**

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]

**/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>> result ;
        
        for ( int j = 0 ; j < matrix.size() ; j++ )
        {
            vector<int> temp ;
            
            for( int i = matrix.size()-1 ; i>=0 ; i-- )
            {
                temp.push_back(matrix[i][j]) ;
            }
            
            result.push_back(temp) ;
        }
        
        matrix.clear() ;
        
        matrix = result ;
    }
};
