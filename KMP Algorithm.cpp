#include<iostream>
#include<string.h>
using namespace std ;

// This Is KMP - Kunt-Morris-Pratt Algorithm For Finding SubString Is Avaibles.

//                               Time Complexity
//                                  /      \ 
//                          Brute-force ,  KMP
//                           O(n*m)        O(n+m)
// n = length of text
// m = length of pattern

int *H ;

void calh(int len,std::string p)
{
	int i = 1 ;
	int j = 0 ;
	H[j] = 0 ;
	
	for ( ; i < len ; i++ )
	{
		if( p.at(i) == p.at(j) )
		{
			H[i] = j+1 ;
			j++ ; 
		}
		else
		{
			j = ( j>1 ? H[j-1] : 0 ) ;
			H[i] = 0 ;
		}
	}
}

void FindIndex(std::string t , std::string p)
{
	int i=0;
	int j=0;
	bool Found=false;
	
	while(i<t.length())
	{
		if(t[i]==p[j])
		{
			i++ ; j++ ;
		}
		else
		{
			if(j==0)
			{
				i++ ;	
			}
			j = H[j] ;	
		}
		if(j==p.length())
		{
			Found=true;
			cout << "Found At " << i-p.length() << endl ;
			j=H[j-1] ;	
		}	
	}	
	
	if(!Found) 
	{
		cout << "Pattern Is Not Found.\n" ;
	}
}

int main(void)
{
	std::string t = "ABABDABACDABABCABAB" ;
	std::string p = "ABABCABAB" ;
	
	int len = p.length() ;
	H = new int[len] ;
	
	calh(len,p) ;
	
	FindIndex(t,p) ;
}
