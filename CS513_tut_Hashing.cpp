#include<iostream>
#include<list>
#include<algorithm>
using namespace std ;
const int N=13 ;
class Hash{

      private :

            std::list<int> *L ;

      public :

            // construnctor
            Hash() ;  
            
            // insert element 
            void insert(int x) ; 

            // remove element
            void remove(int x) ;  
            
            // print whole Hash table
            void print() ; 
};

Hash::Hash()
{
      L = new list<int>[N] ;
}

void Hash::insert(int x )
{
      L[x%N].push_back(x) ;
}

void Hash::remove(int x)
{
      list<int>::iterator i = L[x%N].begin() ;

      for( ; i != L[x%N].end() ; i++ )
      {
            if( *i == x )     
                  break ;
      }

      if( i != L[x%N].end()){
            L[x%N].erase(i) ;
      }
}

void Hash::print()
{
      for(int i = 0 ; i < N ; i++ )
      {
            cout << "For Hash Value : " << i << endl ;

            for(auto it : L[i] )
            {
                  cout << it << " " ;
            }

            cout << endl ;
      }
}

int main(void)
{
      Hash obj ;

      obj.insert(14) ;
      obj.insert(15) ;
      obj.insert(68) ;
      obj.insert(40) ;
      obj.insert(18) ;
      obj.insert(66) ;
      obj.insert(28) ;
      obj.insert(56) ;
      obj.insert(17) ;
      obj.insert(99) ;
      obj.insert(41) ;

      obj.print() ;

      obj.remove(40) ;
      obj.remove(56) ;
      obj.remove(17) ;
      obj.remove(41) ;

      obj.print() ;

      obj.insert(20) ;
      obj.insert(31) ;

      obj.print() ;

      return 0 ;
}