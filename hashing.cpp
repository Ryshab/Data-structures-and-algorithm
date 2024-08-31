#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    cout<<"Enter your array";

    int arr[n];
    for (int i =0; i<n; i++)
    {
        cin>>arr[i];
    }

    int hassh[13]={0};
    for (int i=0; i<n; i++){
        hassh[arr[i]]++;
    }

    int number;
    cin>>number;
    cout<<"Number repeat itself this much time "<<hassh[number];
    return 0;
}