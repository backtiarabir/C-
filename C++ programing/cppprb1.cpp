#include<iostream>
using namespace std;

int main()
{

    int a;
    int b=0;
    int n;
    cout<<"Array size: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        if(arr[i]==a)
        {
            b++;
        }
        else
            continue;
    }


    return 0;
}
