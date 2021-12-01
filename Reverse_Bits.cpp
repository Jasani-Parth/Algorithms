/**
Reverse bits of a given 32 bits unsigned integer.
**/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        std::string s = "" ;
        
        while(n>0)
        {
            s += to_string(n%2) ;
            n /= 2 ;
        }
        
        while(s.length()<32)
        {
            s += "0" ;
        }
        
        uint32_t ans = 0 ;
        int power = 0 ;
        int len = s.length() ;
        
        for ( int i = len-1 ; i >= 0 ; i-- )
        {
            if(s[i]=='1')
            {
                ans += pow(2,power) ;
            }
            
            power++ ;
        }
        
        // Total Number Of Operation = 2 * Bits(n) + ( 32 - Bits(n) ) + Number_of_one + 32 ;
        return ans ;
    }
};
