#include<iostream>

using namespace std ;

int main (){

  int n1, n2, choice , ans ;

  cout << "enetr the number n1 ";
   cin >> n1 ;

   cout << "enetr the number n2";
   cin >> n2 ;



   cout << "enetr 1 Addition\n enetr 2 Subtraction enetr 3 Multiplication enetr 4 Division\n : " ;
   cin >> choice;
  
   if (choice == 1){
    ans = n1 + n2;
    cout << "Addition of 2 value : ";

   }else if(choice == 2){
    ans = n1 - n2;
    cout << "Subtraction of 2 value : ";

   }else if(choice == 2){
    ans = n1 * n2;
    cout << "Multiplication of 2 value : ";

   }else if(choice == 2){
    ans = n1 / n2;
    cout << "Division of 2 value : ";
   }


   return 0 ;
}