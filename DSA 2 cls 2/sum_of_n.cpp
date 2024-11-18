#include <iostream>
using namespace std;

int sum_of_n(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum_of_n(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter the element: ";
    cin >> n;
    cout << "sum_of_n(" << n << ") = " << sum_of_n(n) << endl;

    return 0;
}

