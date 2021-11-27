#include <bits/stdc++.h>
using namespace std;

const int sz = 12;
int numberofswap=0 ;

int partitionzero(double* arr , int start , int end )
{
      double pivot = arr[start] ;
      int up = start+1 ;
      int down = end-1 ;

      while(true)
      {
            while(arr[up]<=pivot) up++ ; 
            while(arr[down]>pivot) down-- ;

            if(up<=down)
            {
                  numberofswap++ ;
                  double temp = arr[up] ;
                  arr[up] = arr[down] ;
                  arr[down] = temp;
            }
            else 
            {
                  numberofswap++ ;
                  int temp = arr[start] ;
                  arr[start] = arr[down] ;
                  arr[down] = temp ;
                  return down ;
            }
      }
}

int partitionrandom(double* arr , int start , int end )
{
      int index = start + rand()%(end-start) ;
      int temp = arr[start] ;
      arr[start] = arr[index] ;
      arr[index] = temp ;
      numberofswap++ ;
      // I Have swapped random pivot with starting ele so now it will partition through first ele
      return partitionzero(arr,start,end) ;
}

void quicksort(double* arr , int start , int end )
{
      if ( start < end )
      {
            int q = partitionzero(arr,start,end) ;
            
            //int q = partitionrandom(arr,start,end) ;

            quicksort(arr,start,q) ;
            quicksort(arr,q+1,end) ;
      }
}

int main(void)
{
      double* arr = new double[sz];

      srand(time(0)) ;

      for (int i = 0; i < sz; i++)
      {
            arr[i] = rand() % sz;
            cout << arr[i] << " ";
      }

      quicksort(arr,0,sz) ;

      cout << "\n" ;

      for( int i = 0 ; i < sz ; i++ )
      {
            cout << arr[i] << " " ;
      }

      cout << "\n" ;

      cout << "Number Of Swaps : " << numberofswap ;
}
