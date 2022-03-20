/**
- https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/
**/


class Solution {

private : 
    
    bool check(std::vector<int> vec)
    {
        int v = vec[0] ;
        
        for( int i = 1 ; i < vec.size() ; i++ )
            if( vec[i] != v )
                return false ;
        
        return true ;
    }
    
    int make_equal(std::vector<int> vec1 , std::vector<int> vec2, int k)
    {
        int res = 0 ;
        
        for( int i = 0 ; i < vec1.size() ; i++ )
        {
            if( vec1[i] != k && vec2[i] == k) 
            {
                res++ ;
            }
        }
        
        return res ;
    }
    
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        std::map<int,int> freq1 , freq2 ;
        
        for( auto it : tops ) freq1[it]++ ;
        for( auto it : bottoms ) freq2[it]++ ;
        
        int min_rot = INT_MAX ;
        int n = tops.size() ;
        
        if( check(tops) || check(bottoms) ) return 0 ;
        
        for( auto it : freq1 )
        {
            if( it.second + freq2[it.first] >= n )
            {
                int move = make_equal(tops,bottoms,it.first) ;
                
                if(move < min_rot  && it.second+move == n  )
                    min_rot = move ;
            }
        }
        
        for( auto it : freq2 )
        {
            if( it.second + freq1[it.first] >= n )
            {
                int move = make_equal(bottoms,tops,it.first) ;
                
                if( move < min_rot && it.second+move == n )
                    min_rot = move ;
            }
        }
        
        return (min_rot!=INT_MAX ? min_rot : -1) ;
    }
};

// Here There Are at most 6 entry so both loops is feasible...
