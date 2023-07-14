#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cout << "Type number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    cout << "Summa: " << sum;
    

    return 0;
}
