#include <iostream>
using namespace std;

int fun(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fun(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter the element: ";
    cin >> n;
    cout << fun(n) << endl;

    return 0;
}
