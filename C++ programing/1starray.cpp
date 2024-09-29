#include<iostream>
#include<climits>
using namespace std;
int main()
{
    cout<<"Enter array number: ";
    int n;
    cin>>n;

    int array[n];
    for(int i=0; i<n; i++){

        cin>>array[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0; i<n; i++){

        if(arr[i]>maxNo){
            maxNo= arr[i];
        }
        if(arr[i<minNo]){
            minNo= arr[i];
        }
    }

    for(int i=0; i<n; i++){

        cout<<array[i]<<" ";
    }

    return 0;
}
