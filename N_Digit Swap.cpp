

#include<iostream>
#include<assert.h>

int main()
{
    int N ;
    int length ;

    std::cout << "Enter Array Length : " ;
    std::cin >> length ;

    std::cout << "swap digit : " ;
    std::cin >> N ;

    int arr[length] ;
    int loop = 1 ;
    
    assert( length >= N && length % N == 0 ) ;
    
    for ( int i = 0 ; i < length ; i++ )
    {
        std::cin >> arr[i] ;
    }

    
    // three digits no array select karva

    for ( int i = 0 ; i <= length - N ; i += N )
    {
        // swapping b/w i to  i + loop * N - 1 index

        for ( int j = i ; j < ( i + loop * N ) / 2 ; j++ )
        {
            int temp = arr[ ( i + loop * N - 1) - j ] ;
            arr[ ( i + loop * N - 1 ) - j ] = arr[j] ;
            arr[j] = temp ;
        }

        loop++ ;
    }

    for ( auto it : arr )
    {
        std::cout << it << "  " ;
    }
    
    return 0 ;
}
