#include<iostream>

using namespace std ;



void add(int , int ,int );
void sub(int , int ,int );
void mul(int , int,int);
void divison(int ,int ,int );
void mod(int , int,int );



int main(){

    int n , choice , n1 , n2  , a = 0 ;

    cout << "enter your choice : " ;
    cin >> choice ;

    cout << "enetr first no :" ;
    cin >> n1 ;

    cout << "enetr seconed no :" ;
    cin >> n2 ;

    switch (choice)
    {
    case 1 :

        add(n1 , n2 ,a );
        break;

    case 2 :
      
        sub(n1 , n2 ,a );
        break;

    case 3 :

        mul(n1 , n2 , a );
        break;
        
    case 4 :
      
        divison(n1 , n2 , a );
        break;
    case 5 :
    
       mod(n1 , n2 ,a );
        break;

     case 6 :
        cout << "thnak uhh...";
        break;
    
    default:
        break;
    }
    while(choice != 5);

    return 0 ;

}
void add(int a , int b , int ans){
    ans = a + b ;
    cout << "addition of " << a<<" and " << b <<" is " << ans << endl ;
}

void sub(int a , int b , int ans){
    ans = 0 ;
    ans = a - b ;
   cout << "subtraction of " << a<<" and " << b <<" is " << ans << endl ;
}
void mul(int a , int b , int ans){
    ans = 0 ;
    ans = a * b ;
    cout << "multiplication of " << a<<" and " << b <<" is " << ans << endl ;
}
void divison(int a , int b , int ans){
    ans = 0 ;
    ans = a / b ;
    cout << "division of " << a<<" and " << b <<" is " << ans << endl ;
}

void mod(int a , int b , int ans){
    ans = a % b ;
    cout << "modulo of " << a<<" and " << b <<" is " << ans << endl ;
}

