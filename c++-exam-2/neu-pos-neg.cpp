#include<iostream>

using namespace std ;


int main(){
    int n;

    cout << "enter your n : ";
    cin >> n;

    if(n == 0){
        cout << "its neutral number ! ";
    } else {
        if(n > 0){
            cout << "its positive number !  ";
        }else{
            cout << "its negative number !  ";
        }
    }

    return 0;
}