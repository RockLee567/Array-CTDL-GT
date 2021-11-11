#include<iostream>
using namespace std; 

void Nhap(int a[] , int n){
    for( int i = 0 ; i < n ;i++ ){
        cin >> a[i]; 
    }
}
void Swap( int &a , int &b ){
    int temp = a; 
    a = b; 
    b = temp; 
}
void SwapPointer( int *a , int *b ){
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}
void Xuat(int a[] , int n){
    for( int i = 0 ; i < n ;i++ ){
        cout<< a[i] << " "; 
    }
}
/*----------------------------------------------------------*/

void Bubble( int arr[] , int n ){
    for( int i = 0 ; i < n - 1 ;i++ ){
        bool done = true; 
        for( int j = 0 ; j < n - i - 1 ;j++){
            if( arr[j] > arr[j+1]  ){
                SwapPointer( &arr[j] , &arr[j+1] ); 
                done = false; 
            }
        }
        if( done ){
            break; 
        }
    }
}

/*----------------------------------------------------------*/


int main(){

    int n ; 
    cin >> n ; 
    int arr[n]; 
    
    Nhap( arr , n ); 
    Bubble( arr , n ); 
    Xuat( arr , n );  
    
    return 0; 
}   
