#include<iostream>

using namespace std ;


int main(){

    int n ;

    cout << "enter the num : " ;
    cin >> n ;
    
    switch(n){

        case 1:
        cout << "it's monday";
        break ;

        
        case 2:
        cout << "it's Tuesday";
        break ;

        
        case 3:
        cout << "it's wednesday";
        break ;

        
        case 4:
        cout << "it's thursday";
        break ;

        case 5:
        cout << "it's friday";
        break ;

        case 6:
        cout << "it's saturday";
        break ;

        case 7:
        cout << "it's sunday";
        break ;

        default :
        cout << " invalid " ;

    }
    

    return 0 ;
}