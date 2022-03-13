
/**
- https://leetcode.com/problems/valid-parentheses/submissions/
**/

class Solution {
public:
    bool isValid(string s) {
        
        std::stack<char> p ;
        
        for( int i = 0 ; i < s.length() ; i++ )
        {
            if( s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                p.push(s[i]) ;
            }
            else if( p.size() != 0 )
            {
                if( s[i] == '}' && p.top() == '{' ){
                    p.pop() ;
                    continue ;
                }
                else if( s[i] == ')' && p.top() == '('){
                    p.pop();
                    continue ;
                }
                else if( s[i] == ']' && p.top() == '['){
                    p.pop() ;
                    continue ;
                }
                else{
                    return false ;
                }
            }
            else{
                return false ;
            }
            
        }

        if( p.size() == 0 ){
            return true ;
        }
        
        return false ;
    }
};
