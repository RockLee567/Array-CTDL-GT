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

void Insertion( int arr[] , int n ){
    int index, value; 
    for( int i = 0 ; i < n   ;i++ ){
        index = i ; 
        value = arr[i]; 
        while( arr[index-1] > value && index > 0 ){
            arr[index] = arr[index-1]; 
            index--;
        }
        arr[index] = value;
    }
    cout<< index << " " << value << endl; 
}

/*----------------------------------------------------------*/


int main(){

    int n ; 
    cin >> n ; 
    int arr[n]; 
    
    Nhap( arr , n ); 
    Insertion( arr , n ); 
    Xuat( arr , n );  
    
    return 0; 
}   
