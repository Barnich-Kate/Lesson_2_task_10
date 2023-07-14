#include <iostream>

using namespace std;

int main()
{
    int n, k, sum1, sum2, sum;
    cout << "Type number1: ";
    cin >> n;
    cout << "Type number2: ";
    cin >> k;
    for (int i = 0; i < n; i++) {
        sum1 += i;
        for (int j = 0; j < k; j++) {
            sum2 += j;
        }
        sum = sum1 + sum2;
    }
    cout << "Summa: " << sum;
    

    return 0;
}
