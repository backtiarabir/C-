#include<iostream>
using namespace std;


int main()
{

    int x= 953712;
    int y=0;
    int arr[6];
    int l=0;

    for(int i =0; i<6; i++)
    {
        arr[i] = x % 10;
        x = x/10;
    }

    for(int i=1; i<6; i++)
    {
        int key =arr[i];
        int j =i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
            arr[j+1] = key;
        }
    }

    for(int i=0; i<6; i++)
    {
        cout<<arr[i];
    }
    return 0;
}
