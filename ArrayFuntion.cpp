#include <iostream>

using namespace std ; 

class Solution {
    
    public : 
    int removeDulicates( int num[] ) {          
        num[0] = 1 ;                        // Tham chieu mang    qua     ham      ntn 
        num[1] = 2 ; 
        num[2] = 3 ; 
        num[3] = 4 ; 
        num[4] = 5 ; 
        num[5] = 6 ; 
        num[6] = 7 ; 
        return 7; 
    }

}; 

int main(){
 
    // Chua thay doi nums 
    int nums[9] =  { 3, 4, 7 ,1 ,9 , 10 , 3 , 10 , 30 } ; 
    //  int sizeNums = nums.size() ;        mang trong C++   ko the    DEM = size() or length 
    cout<<"nums old: " ; 
    for( int i = 0 ; i <  9 ; i++ ){
        cout<< nums[i] << " " ; 
    }
    cout<< endl ; 


    // Da thay doi nums[]   = funtion + array ; 
    Solution a; 
    int b = a.removeDulicates( nums ) ;      // Tham chieu mang    qua     ham      ntn 
    cout << "SL OOP Funtion nums: " <<  b << endl ; 
    cout<< "nums new: " ; 
    for( int i = 0 ; i <  b ; i++ ){
        cout<< nums[i] << " " ;           
    }


    return 0; 
}