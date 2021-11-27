#include<bits/stdc++.h>
using namespace std ;

const int sz = 15 ;
/**
 *                                                Merge Sort Algorithm( divide and conqure )
 *                                                 /      |         \
 *                                           Best case   avg case   worst case
 *                                          O(n*log(n)) O(n*log(n)) O(n*log(n))
**/
void merge(int* arr , int i , int mid ,int j )
{
      int one = i ;
      int two = mid+1 , index=0 ;
      int* a = new int[j-i+1] ;

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

void mergesort(int* arr , int i , int j )
{
      if(i!=j)
      {
            int mid = (i+j)/2 ;

            mergesort(arr,i,mid) ;
            mergesort(arr,mid+1,j) ;

            merge(arr,i,mid,j) ;
      }
}

int main(void)
{
      int* arr = new int[sz] ;

      srand(time(NULL)) ; // every time this use diffrent seed for generating random number 

      for( int i = 0 ; i < sz; i++ ) 
      {
            arr[i] = rand() % sz + 1; // random number is not random!!
            cout << arr[i] << " " ;
      }

      cout << endl ;

      mergesort(arr,0,sz-1) ;
      
      for( int i = 0 ; i < sz ; i++ ) cout << arr[i] << " " ;
}
