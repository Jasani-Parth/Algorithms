/**

Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4

**/

class Solution {
public:
    
    void merge(std::vector<int>& arr , int i , int mid ,int j )
    {
          int one = i ;
          int two = mid+1 , index=0 ;
          std::vector<int> a(j-i+1) ;

          while( one <= mid && two <= j )
          {
                if( arr[one] <= arr[two] && one <= mid )
                {
                      a[index++] = arr[one++] ;
                }
                else
                {
                      a[index++] = arr[two++] ;
                }
          }

          while( one < mid+1 )
          {
                a[index++] = arr[one++] ;
          } 

          while( two <= j )
          {
                a[index++] = arr[two++] ;
          }

          index=0 ;

          for( int k = i ; k <= j ; k++ )
          {
                arr[k] = a[index++] ;
          }
    }
    
    void mergesort(std::vector<int>& arr , int i , int j )
    {
          if(i!=j)
          {
                int mid = (i+j)/2 ;

                mergesort(arr,i,mid) ;
                mergesort(arr,mid+1,j) ;

                merge(arr,i,mid,j) ;
          }
    }
    
    
    int findKthLargest(vector<int>& nums, int k) {
        
        int len = nums.size() ;
        
        mergesort(nums,0,len-1) ;
        
        return nums[len-k] ;
    }
};
