/**

------------------------------------------        Find the Missing Number        ------------------------------------------

You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.

Example: 

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: The missing number from 1 to 8 is 5

Input: arr[] = {1, 2, 3, 5}
Output: 4
Explanation: The missing number from 1 to 5 is 4

**/

#include <iostream>
using namespace std;

/**
 * Here We Have To Know Two Rules For XOR
 * 0^n = n
 * n^n = 0
**/

int FindMissing(int n, int *arr)
{
    int res = 0;

    for (int i = 0; i < n - 1; i++)
    {
        res = res ^ arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        res = res ^ i;
    }

    return res;
}

int main(void)
{
    int n = 10;
    int arr[] = {1, 2, 3, 4, 9, 6, 7, 8, 10};
    std::cout << FindMissing(n, arr) << std::endl;
    return 0;
}
