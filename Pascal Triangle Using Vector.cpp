#include<bits/stdc++.h>

void pascal(const int n )
{

	std::vector<vector<int>> result ;
	std::vector<int> vec[n] ;

	

	for ( int step = 1 ; step <= n ; step++ )
	{
		if( step == 1 )
		{
			vec[step-1].push_back(1) ;
			continue ;
		}
		else
		{
			vec[step-1].push_back(1) ;
			vec[step-1].insert(vec[step-1].end(),1) ;

			if ( step > 2)
				
				for ( int i = 1 ; i < step - 1  ; i++ )
				{	
					vec[step-1].insert( vec[step-1].begin() + i , vec[step-2].at(i) + vec[step-2].at(i-1)) ;
				}	
		}
	}

	for ( int i = 0 ; i < n ; i++ )
	{
		result.push_back(vec[i]) ;	
	}
}

int main()
{
	int n ;
	std::cout << "Enter step : " ;
	std::cin >> n ;
	pascal(n) ;
	
	return 0 ;
}
