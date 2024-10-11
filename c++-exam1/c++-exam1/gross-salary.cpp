#include<iostream>

using namespace std;

int main(){

    int basesalary , gross ;

    cout << "enter the value of basesalary : = ";
    cin >> basesalary ;

    gross = basesalary + ((basesalary* 10)/100 ) + ((basesalary* 5) / 100 )+((basesalary*8)/100);
    cout<<gross;
    

    return 0 ;

}