#include<iostream>

using namespace std ;

int main(){
    
    int n, i ;

    cout <<" enter number" ;
    cin >> n ;

    for ( i = 1 ;i <= n ; i ++){
      cout << n <<  "*"  << i << ":" << n * i << endl ;
      i++ ;
    }
    
}