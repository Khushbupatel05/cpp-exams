#include<iostream>

using namespace std ;

int main (){

    int i , j , s ;

    for(i = 1 ; i <= 5 ; i++){
        for(j = 1 ; j <= 5 ; j++){
            if ((i==4 && j==5) || (i==5 && j==5))
            {
                cout << "";
            }
            
          else if(j == 1 || j == 5 || i==1 || i==3 ){
                cout << "* " ;
            }else{
               cout << "  " ;
            }  
          }
            cout << endl ;
        }
    return 0 ;
}

// * * * * *
// *       *
// * * * * *
// *      
// *      