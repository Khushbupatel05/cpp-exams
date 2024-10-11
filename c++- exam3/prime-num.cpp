#include <iostream>

using namespace std;

int main()
{

    int n, i, count = 0;
    bool flag = true;

    cout << "enetr any number : ";
    cin >> n;

    for (i = 2; i < n ; i++)
    {
        if (n % i == 0)
        {
            cout << "it's not prime number..";
            return 0;
        }
        count++;
    }

    cout << count << endl;

    if (flag)
    {
        cout << "it's a prime number.";
        count++;
    }

    return 0;
}