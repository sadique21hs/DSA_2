//sum of all number
#include <iostream>
using namespace std;

int sumAll(int arr[], int i, int j) {

    if (i == j) {
        return arr[i];
    }

    int mid = (i + j) / 2;

    int leftSum = sumAll(arr, i, mid);
    int rightSum = sumAll(arr, mid + 1, j);

    return leftSum + rightSum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of all numbers: " << sumAll(arr, 0, n - 1) << endl;

    return 0;
}
