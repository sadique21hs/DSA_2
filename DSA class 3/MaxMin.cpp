#include<iostream>
using namespace std;

struct Res
{
    int mx, mn;
};

Res findMaxMin(int A[], int i, int j)
{
    if (i == j)
    {

        return {A[i], A[i]};
    }
    else
    {
        int mid = (i + j) / 2;

        Res res1 = findMaxMin(A, i, mid);
        Res res2 = findMaxMin(A, mid + 1, j);


        int mxValue = max(res1.mx, res2.mx);
        int mnValue = min(res1.mn, res2.mn);

        return {mxValue, mnValue};
    }
}

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;

    int A[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    Res result = findMaxMin(A, 0, n - 1);

    cout << "Maximum value: " << result.mx << endl;
    cout << "Minimum value: " << result.mn << endl;

    return 0;
}
