// Task 2

#include <iostream>
#include <ctime>
#include<iomanip>

const int sz = 100000;
long long int number_of_swap = 0 ;

int main(void)
{
      double *arr = new double[sz];
      /**int max, min;

      std::cout << "Enter Min Number : ";
      std::cin >> min;
      std::cout << "Enter Max Number : ";
      std::cin >> max;**/

      srand(time(0));

      for (int i = 0; i < sz; i++)
      {
            arr[i] = rand() % sz;
            std::cout << arr[i] << " " ;
      }

		std::cout << "\n" ;
      // Bubble Sorting

      for (int i = 0; i < sz - 1; i++)
      {
            for (int j = i + 1; j < sz; j++)
            {
                  if (arr[i] > arr[j])
                  {
                  		number_of_swap++ ;
                        // Swapping
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                  }
            }
      }

      std::cout << "Sorted Array : ";

      for (int i = 0; i < sz; i++)
      {
            std::cout << arr[i] << " ";
      }
      
      std::cout << "Swap : " << number_of_swap << std::endl; 

      delete(arr) ;
      return 0;
}
