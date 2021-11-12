#include<bits/stdc++.h>
using namespace std ;


class Graph{

      private :

            int V ;
            std::map<int,bool> visit ;
            std::map<int,std::list<int>> Adj_list ;
      
      public :    

            Graph( int n ) ;

            void AddEdge( int u , int v ) ;

            void BFS ( int node ) ;

            void DFS ( int node ) ;

            bool is_cyclic() ;

            bool is_bipartite( int node ) ; // Provide Vertex For BFS
            
            bool has_path( int start , int end ) ;
};

Graph::Graph( int n )
{
      this->V = n ;
}

void Graph::AddEdge( int u , int v )
{
      this->Adj_list[u].push_back(v) ; // u->v 
}

void Graph::BFS( int node )
{
      bool *visited = new bool[this->V] ;

      for ( int i = 0 ; i < this->V ; i++ )
      {
            visited[i] = false ;
      }

      visited[node] = true ;

      std::list<int> Q ;

      Q.push_back(node) ;

      while( ! Q.empty() )
      {
            int s = Q.front() ;
            cout << s << " " ;
            Q.pop_front() ;

            for ( auto it : this->Adj_list[s] )
            {
                  if( ! visited[it] )
                  {
                        visited[it] = true ;
                        Q.push_back(it) ;
                  }
            }
      }
}

void Graph::DFS( int node )
{
      if ( this->Adj_list[node].empty() ) 
            return ;
      
      cout << node << " " ;

      this->visit[node] = true ;

      for ( auto it : this->Adj_list[node] )
      {
            if ( ! this->visit[it] )
            {
                  DFS( it ) ;
            }
      }
}

bool Graph::is_cyclic()
{
      /** Do DFS , If u find Backtracking than graph is cyclic **/
}

bool Graph::is_bipartite ( int node )
{
      this->visit.clear() ; // Clear Visited Map And Initilised to False By Deafualt Because This Is Ordered_Map

      std::map<int,int> level ; 
      this->visit[node] = true ;
      level[node] = 0 ;

      std::list<int> Q ;
      Q.push_back(node) ;

      while (! Q.empty() )
      {
            int s = Q.front() ;
            Q.pop_front() ;

            for ( auto it : this->Adj_list[s] )
            {
                  if( ! this->visit[it] )
                  {
                        Q.push_back(it) ;
                        this->visit[it] = true ;
                        level[it] = level[s] + 1 ;
                  }

                  if( level[it] == level[s] ) // Edge Found At Same Level So Odd Number Of Cycle Found !!
                  {
                        return false ;
                  }
            }
      }
      
      return true ;
}

bool Graph::has_path( int start , int end )
{
      /** Run BFS on `start` VERTEX **/
      return this->visit[end] ; 
      
      /** ----------------------------------------------------- NOTE ----------------------------------------------------- **/
      /** I Used bool Array Named :- 'visited' in BFS change it with CLASS 'visit' map **/
}

int main(void)
{
      // Create Your Main Thread
      return 0 ;
}
