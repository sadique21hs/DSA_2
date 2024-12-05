#include <iostream>
using namespace std;

int countEven(int arr[], int i, int j)
{

    if (i == j)
    {
        if (arr[i] % 2 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int mid = (i + j) / 2;

    int leftCount = countEven(arr, i, mid);
    int rightCount = countEven(arr, mid + 1, j);

    return leftCount + rightCount;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements of the array:"  <<'\n'<< endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int x = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of even numbers: " << countEven(arr, 0, n - 1) <<'\n' << endl;

    return 0;
}
