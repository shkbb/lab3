#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Введіть верхню межу діапазону: ";
    cin >> n;

    cout << "Прості числа в діапазоні від 2 до " << n << ": ";

    int i = 2;
    while (i <= n) {
        bool isPrime = true;
        int j = 2;
        while (j * j <= i) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
            j++;
        }
        if (isPrime) {
            cout << i << " ";
        }
        i++;
    }

    cout << endl;

    return 0;
}
