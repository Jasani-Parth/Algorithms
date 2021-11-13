/**
Given an array of integers temperatures represents the daily temperatures,
return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. 
If there is no future day for which this is possible, keep answer[i] == 0 instead.

Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

**/

vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size() ;
        
        std::vector<int> res(n,0) ;
        std::stack<std::tuple<int,int>> S ;
        
        for ( int cd = 0 ; cd < n ; cd++ )
        {
            if ( S.empty() == true )
            {
                S.push(std::make_tuple(cd,temperatures[cd])) ;
            }
            else
            {
                int f = 0 ;
                
                while( get<1>(S.top()) < temperatures[cd] )
                {
                    res[get<0>(S.top())] = cd - get<0>(S.top()) ;
                    S.pop() ;
                    
                    if(S.empty())
                    {
                        f=1 ;
                        S.push(std::make_tuple(cd,temperatures[cd])) ;
                    }
                }
                
                if(!f)
                {
                    S.push(std::make_tuple(cd,temperatures[cd])) ;
                }                
            }
        }
        
        return res ;
    }
