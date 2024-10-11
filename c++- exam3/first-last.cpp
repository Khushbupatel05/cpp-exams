#include<iostream>
using namespace std;
int main(){
 int n, first, last, rem ,sum;
 cout <<"enter number :";
 cin>>n;
    last = n%10;

 for(; n!=0;n/=10){
    rem = n%10;
 }
 first = rem;

 if(first<0){
    cout<< first - last;
    
 }else{

 cout<< first + last;
 }

return 0;
}