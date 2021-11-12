#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
    std::string s ;
    std::stack<char> p ;

    std::cout << "Enter String : " ;
    std::cin >> s ;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            p.push(s[i]) ;
        }
        else if( p.size() != 0 )
        {
            if( s[i] == '}' && p.top() == '{' ){
                std::cout << "pop 1 run\n" ;
                p.pop() ;
                continue ;
            }
            else if( s[i] == ')' && p.top() == '('){
                std::cout << "pop 2 run\n" ;
                p.pop();
                continue ;
            }
            else if( s[i] == ']' && p.top() == '['){
                std::cout << "pop 3 run\n" ;
                p.pop() ;
                continue ;
            }
            else{
                std::cout << "No\n" ;
                std::abort() ;
            }
        }
        else
        {
            std::cout << "No parth\n" ;
            std::abort() ;
        }
    }

    if( p.size() == 0 ){
        std::cout << "Yes\n" ;
    }
    else{
        std::cout << "Np\n" ;
    }
    return 0 ;
}
