#include <iostream>
#include <climits>
using namespace std;

// Largest number in the array
int lgnumber(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

// Second largest number in the array
int seclarge(int arr[], int n)
{
    int second = INT_MIN;
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }

        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    return second;
}

// Check if the array is sorted
bool checksort(int arr[], int n){
    for(int i=1;i<=n;i++){
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout << "The largest number is " << lgnumber(arr, n);
    // cout << "The second largest number is " << seclarge(arr, n);

    // if(checksort(arr,n)) cout<<"This is a sorted array";
    // else cout<<"This array is not sorted";

    return 0;
}