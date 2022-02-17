#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

std::vector<std::vector<int>> SubsetSum(int N, int B)
{
    std::vector<std::vector<int>> arr;

    for (int m = 0; m <= N; m++)
    {
        std::vector<int> temp;

        for (int b = 0; b <= B; b++)
        {
            if (b == 0 || m == b)
                temp.push_back(1);
            else if (m == 0)
                temp.push_back(0);
            else
            {
                if (b - m >= 0)
                    temp.push_back(max(arr[m - 1].at(b), arr[m - 1].at(b - m)));
                else
                    temp.push_back(max(arr[m - 1].at(b), 0));
            }
        }

        arr.push_back(temp);
    }
    return arr;
}

int main(void)
{
    int N, B;
    std::cout << "N? : ";
    std::cin >> N;
    std::cout << "B? : ";
    std::cin >> B;

    std::vector<std::vector<int>> arr = SubsetSum(N, B);

    /** Here My Considration Of Set Is {0...N} **/

    /**for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }**/

    if (arr[N][B])
        std::cout << "Subset Is Present\n";
    else
        std::cout << "Subset Is Not Present\n ";

    return 0;
}
