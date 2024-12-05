#include <iostream>
using namespace std;

int sumEven(int arr[], int i, int j) {

    if (i == j) {
        if (arr[i] % 2 == 0) {
            return arr[i];
        } else {
            return 0;
        }
    }

    int mid = (i + j) / 2;
    int leftSum = sumEven(arr, i, mid);
    int rightSum = sumEven(arr, mid + 1, j);

    return leftSum + rightSum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sum of even numbers: " << sumEven(arr, 0, n - 1) << endl;

    return 0;
}

