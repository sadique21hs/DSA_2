#include<iostream>
using namespace std;

int Sum_Of_Digit(int n)
{
    if(n==0)
    {
        return 0;

    }
    else
    {
        return n%10+Sum_Of_Digit(n/10);


    }

}
int main() {
    int n;
    cout << "Enter the element: ";
    cin >> n;
    cout << "Sum_Of_Digit(" << n << ") = " << Sum_Of_Digit(n) << endl;

    return 0;
}
