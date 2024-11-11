
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {100,200,300,6,5,2,0,11};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++)
    {

        printf("%d ",arr[i]);
    }
    printf("\n");

    sort(arr,arr+len,greater<int>());
    for (int i=0; i<len; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
    return 0;


}

