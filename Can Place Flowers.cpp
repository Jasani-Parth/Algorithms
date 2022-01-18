/**

You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false

**/

/****** CODE 1 (90% Faster)******/ 

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int len = flowerbed.size() ;
        
        if( len < n || len == 0 ) return false ;
        if( len == 1 && n==1 && flowerbed[0] == 0) return !flowerbed[0] ;
        
        
        for( int i = 0 ; i < len ; i++ )
        {
            if ( i == 0 )
            {
                if ( n>0 && flowerbed[i] == 0 && flowerbed[i+1] == 0)
                {
                    n-- ;
                    flowerbed[i] = 1 ;
                }
            }
            else if ( i == len - 1 )
            {
                if( n > 0 && flowerbed[i] == 0 && flowerbed[i-1] == 0 )
                {
                    n-- ;
                    flowerbed[i] = 1 ; 
                }
            }
            else
            {
                if( n >0 && flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 )
                {
                    n-- ;
                    flowerbed[i] = 1 ;
                }
            }
        }
        
        return n==0 ;
    }
};

/****** CODE 2 (21% Faster) ******/ 

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int len = flowerbed.size() ;
        
        if( len < n || len == 0 ) return false ;
        if( len == 1 && n==1 && flowerbed[0] == 0) return !flowerbed[0] ;
        
        
        for( int i = 0 ; i < len ; i++ )
        {
            if ( i == 0 || i == len-1)
            {
                if ( n>0 && flowerbed[i] == 0 && ( i==0 ? !flowerbed[i+1] : !flowerbed[i-1] ))
                {
                    n-- ;
                    flowerbed[i] = 1 ;
                }
            }
            else
            {
                if( n >0 && flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 )
                {
                    n-- ;
                    flowerbed[i] = 1 ;
                }
            }
        }
        
        return n==0 ;
    }
};
