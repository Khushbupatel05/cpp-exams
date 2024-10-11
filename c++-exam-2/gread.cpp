#include<iostream>

using namespace std ;

int main (){

    int score ;

    cout << "enter your score that you got : " ;
    cin >> score ;

    if (score > 100){
        cout << "error ";
        return 0 ;

    }if(score >= 95){
        cout <<"A gread ";
    }else if (score >= 50){
        cout << "C gread" ;
    }else if (score >= 60){
        cout << "B gread" ;
    }else if (score >= 70){
        cout << "B+ gread" ;
    }
    else if (score >= 40){
        cout << "C gread" ;
    }
    else{
       cout << "YOU ARE FAIL";
    }


   return 0 ;
}