/*
Given an array of positive and negative numbers, 
the task is to find if there is a subarray (of size at least one) with 0 sum.
Input: {4, 2, -3, 1, 6}
Output: true 
Input: {4, 2, 0, 1, 6}
Output: true
Input: {-3, 2, 3, 1, 6}
Output: false
*/

#include <iostream>

int main()
{
    //int arr[] = {4, 2, -3, 1, 6} ;
    int arr[] = {4, 2, 6, 1, 0} ;
    //int arr[] = {-3, 2, 3, 1, 6} ;
    int size = sizeof(arr)/sizeof(int) ;

//Solution 1 
//Time Complexity: O(n^3) , Space Complexity: O(1)
 
   int sum = 0 , flag = 0 ;
   for( int i=0 ; i<size ; i ++)
   {
    sum = 0 ;
        for( int k=size ; k>i ; k-- )
        {           
            for( int j=i ; j<k ; j++)
            {
                sum += arr[j] ;
                std :: cout << arr[j] << " "  ;
            }
            std :: cout << sum << "\n" ; 
            if( sum == 0 )
            {
                flag = 1 ; 
                break ; 
            }
            sum = 0 ;
        }
        if ( flag == 1 )
        break ;  
   }

    if ( flag == 1 )
        std :: cout << "Yes ! It has a subarray with sum 0. " ;
    else 
        std :: cout << "Sorry ! It does not have any subarray with sum 0. " ;

std :: cout << "\n" ;

//Solution 2
//Time Complexity: O() , Space Complexity: O()
    
    flag = 0 ; sum = 0 ; 
    for ( int i=0 ; i<size ; i++ )
    {
        for ( int j=i+1 ; j<size ; j++ )
        {
            sum += arr[j] ;
            if( sum == 0 )
            {
                flag = 1 ;
                break;
            }
        }
        sum = 0 ; 
    }
    if ( flag == 1 )
    std :: cout << "Yes ! It has a subarray with sum 0. " ;
    else 
    std :: cout << "Sorry ! It does not have any subarray with sum 0. " ;

}