#include<iostream>
using namespace std;

int poli(int n, int rev)
{
    if(n==0)
    {
        return 0;

    }
    else
    {    rev=rev*10;
         rev+=n%10;
        return poli(n/10,rev);


    }

}
int main() {
    int n;
    cout << "Enter the element: ";
    cin >> n;
    int m=poli(n,0);
    if(n==m){
        cout<<"Polindrome"<<endl;
    }else{
    cout<<"Not Polindrome"<<endl;
    }

    return 0;
}

