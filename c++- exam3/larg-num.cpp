#include<iostream>

using namespace std ;

int main(){
    
    int  n , rem, sum=0 ;
    cout<<"enter number : ";
    cin>>n;
for(; n!=0;){
    rem = n%10;
    if(rem>sum){

        sum = rem;
    }
    n = n/10;
}
   cout<<sum;
    return 0 ;
}