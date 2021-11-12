#include<iostream>
#include<string.h>
using namespace std ;

int main()
{
    string s ;

    std::cout << "Enter y for open youtube : " ;
    std::cin >> s ;

    if ( s == "y")
    {
        system("start https://www.youtube.com/?gl=IN&tab=r1&authuser=0") ;
    }
    else
    {
        std::cout << "sorry , ERROR 404 FOUND!!" ;
    }
}
