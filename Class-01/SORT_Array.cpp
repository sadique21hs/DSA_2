
#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return a>b;
}

int main()
{
    int arr[]= {100,512,6,724,31,14,2,0};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++)
    {

        printf("%d ",arr[i]);
    }
    printf("\n");

    sort(arr+1,arr+5, comp );
    for (int i=0; i<len; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
    return 0;


}
