/**

- https://leetcode.com/problems/design-add-and-search-words-data-structure/

**/

class WordDictionary {
    
private :
    
    std::map<int,std::vector<std::string>> data ;
    
    bool IsSame( std::string txt , std::string pattern )
    {
        for( int i = 0 ; i < txt.length() ; i++ )
        {
            if( pattern[i] == '.' )
                continue;
            else
            {
                if( pattern[i] != txt[i] )
                    return false ;
            }
        }
        
        return true ;
    }
    
public:
    WordDictionary() {}
    
    void addWord(string word) {
        this->data[word.length()].push_back(word) ;
    }
    
    bool search(string word) {
        
        // Here I have to find in same length strings...
        
        int len = word.length() ;
        
        for( auto it : this->data[len] )
        {
            if ( this->IsSame(it,word) )
                return true ;
        }
        
        return false ;
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
