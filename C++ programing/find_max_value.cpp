//write a program to insert an element in an array.

#include<iostream>
using namespace std;

main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    for(int i=0; i<n+1; i++){

        cout<<arr[i]<<" ";
    }
}