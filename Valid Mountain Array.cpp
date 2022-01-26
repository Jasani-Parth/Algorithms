/**
- https://leetcode.com/problems/valid-mountain-array/
**/

class Solution {
public:
    
    int find_top(std::vector<int> arr)
    {
        int n = arr.size() ;
        
        int index = n-1 ;
        int top = arr[n-1] ;
        
        for( int i = n-1 ; i >=0 ; i-- )
        {
            if( top < arr[i] )
            {
                top = arr[i] ;
                index = i ;
            }
        }
        
        return index ;
    }
    
    bool validMountainArray(vector<int>& arr) {
        
        
        int n = arr.size() ;
        int top = find_top(arr) ;
        
        if( n == 1 || n==2 || top == 0 || top == n-1 ) return false ;
        
        for( int i = 1 ; i <= top ; i++ )
        {
            if( arr[i-1] >= arr[i] )
                return false;
        }
        
        for( int i = top ; i < n-1 ; i++ )
        {
            if( arr[i] <= arr[i+1] )
                return false;
        }
        
        return true;
        
    }
};
