#include<iostream>
using namespace std ;

int main(void)
{
      int arr[10] = {5,1,-8,58,96,21,56,69,14,25} ;
      int val ;
      int low = 0 , high = 9 ;
      int mid = (int)(low+high)/2 ;

      // insertion sort
      // time comeplexcity = O(n^2) 
      for ( int i=1; i < 10 ; i++ )
      {
            int j = i-1 ;
            int temp = arr[i] ;

            while(j>=0 && arr[j]>temp){
                  arr[j+1]=arr[j];
                  j-- ;
            }

            arr[j+1] = temp ;
      }

      for(int i=0; i < 10 ; i++ ){
            cout << arr[i] << " " ;
      }

      std::cout << "\nEnter Value : " ;
      std::cin >> val ;
      
      // binary search 
      // anything which is not sorted we need linear searching..
      // for binary search we need sorted array/vec
      // time complexcity = O(log(n))

      while(low<=high)
      {
            mid = (int)(high+low)/2 ;

            if(arr[mid]==val){
                  std::cout << "Element Found At Position " << mid ;
                  break ;
            }
            else
            {
                  if(arr[mid]<val)
                  {
                        low = mid+1 ;
                  }
                  else if ( arr[mid]>val)
                  {
                        high = mid-1 ;
                  }
            }
      }
      return 0 ;
} 