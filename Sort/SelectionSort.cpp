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

/*----------------------------------------------------------*/

void Selection( int arr[] , int n ){
    for( int i = 0 ; i < n - 1 ;i++ ){
        int index = i ; 
        for( int j = i + 1 ; j < n ;j++){
            if( arr[index] > arr[j]  ){
                index = j; 
            }
        }
        SwapPointer( &arr[i] , &arr[index] );  
    }
}

/*----------------------------------------------------------*/
void Xuat(int a[] , int n){
    for( int i = 0 ; i < n ;i++ ){
        cout<< a[i] << " "; 
    }
}

int main(){

    int n ; 
    cin >> n ; 
    int arr[n]; 
    
    Nhap( arr , n ); 
    Selection( arr , n ); 
    Xuat( arr , n );  
    
    return 0; 
}
