#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Type number: ";
    cin >> n;
    float sum = 0, rez;
    for (int i = 1; i <= n; i++) {
        rez = i;
        for (int j = 1; j <= n - j; j++) 
        rez *= i;
        sum += rez;
    }
    cout<<sum;
    

    return 0;
}
