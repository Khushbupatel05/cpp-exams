#include<iostream>

using namespace std ;

int main(){

    int i , j , k ;

    for(i= 1; i >= 0; i++){
        
        for(j= 1 ; j >= i; j--){
            cout << k++ << " " ;
        }
        cout << endl ;
    }


    
    return 0 ;
}
// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1