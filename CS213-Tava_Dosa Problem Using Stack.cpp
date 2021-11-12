#include<iostream>

#include<algorithm>

class tava_dosa{

    private :

        int sz ;
        int* arr ;

    public : 

        tava_dosa(int size)
        {
            this->sz = size ;
            arr = new int[this->sz] ;

            std::cout << "Stack Of Size " << this->sz << " Has Been Created.\n" ;
            std::cout << "Enter " << this->sz << " Inputs : " ;

            for(int i = 0 ; i < sz ; i++ )
            {
                std::cin >> *(arr+i) ;
            }
        }

        void serve_min() ;
};

void tava_dosa::serve_min()
{
    int c_min = *(arr+sz-1) ;
    int index = sz-1 ;

    //std::cout << c_min << " " << index << "\n" ;

    for ( int i = sz-1 ; i >=0 ; i-- )
    {
        if( c_min > *(arr+i) )
        {
            index = i ;
            c_min = *(arr+i) ;
        }
    }

    // index of minimum element finded
    // here swap occur between index to sz-1 

    std::reverse(arr+index,arr+this->sz) ;

    // server the top then decresase the size of stack 
    std::cout << "Take Your Dhosa With Radius : " << *(arr+sz-1) << std::endl ;
    this->sz-- ;
    std::cout << "Current Size is " << this->sz << std::endl ;

    if(this->sz!=0){
        this->serve_min() ;
    }
}

int main(void)
{
    tava_dosa obj(10) ;
    obj.serve_min() ;
}
