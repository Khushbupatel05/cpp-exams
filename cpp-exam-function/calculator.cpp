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
       cout << "enetr first no :" ;
       cin >> n1 ;

        cout << "enetr seconed no :" ;
        cin >> n2 ;
        add(n1 , n2 ,a );
        break;

    case 2 :
       cout << "enetr first no :" ;
       cin >> n1 ;

        cout << "enetr seconed no :" ;
        cin >> n2 ;
        sub(n1 , n2 ,a );
        break;

    case 3 :

        cout << "enetr first no :" ;
        cin >> n1 ;

        cout << "enetr seconed no :" ;
        cin >> n2 ;
        mul(n1 , n2 , a );
        break;
        
    case 4 :
        cout << "enetr first no :" ;
        cin >> n1 ;

        cout << "enetr seconed no :" ;
        cin >> n2 ;
        divison(n1 , n2 , a );
        break;
    case 5 :
      cout << "enetr first no :" ;
      cin >> n1 ;

      cout << "enetr seconed no :" ;
       cin >> n2 ;
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
    cout << "addition is : " << a << b << ans << endl ;
}

void sub(int a , int b , int ans){
    ans = 0 ;
    ans = a - b ;
    cout << "sub is : " << a << b << ans << endl ;
}
void mul(int a , int b , int ans){
    ans = 0 ;
    ans = a * b ;
    cout << "multiple is : " << a << b << ans << endl ;
}
void divison(int a , int b , int ans){
    ans = 0 ;
    ans = a / b ;
    cout << "divison is : " << a << b << ans << endl ;
}

void mod(int a , int b , int ans){
    ans = a % b ;
    cout << "modular is : " << a << b << ans  ;
}

