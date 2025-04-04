#include <iostream>
#include <vector>
using namespace std;

pair<int, int> floor_ceil_search(vector<int> &arr, int n, int x)
{
    int ceil = n;
    int mid;
    int low = 0;
    int high = n - 1;

    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            ceil = mid;
            high = mid - 1;
        }
        else if (arr[mid]==x){
            ceil = mid;
            return {arr[ceil],arr[ceil]};
        }
        else
        {
            low = mid + 1;
        }
    }
    if (ceil == 0) return {-1,arr[ceil]};
    else if (ceil == n) return {arr[ceil],-1};
    else return {arr[ceil-1], arr[ceil]};
}

int main()
{
    vector<int> arr = {3,4,4,7,8,10};

    int n = arr.size();

    pair<int, int> mypair = floor_ceil_search(arr,n, 11);

    cout<<"Floor : "<<mypair.first<<endl;
    cout<<"Ceil : "<<mypair.second<<endl;
    

    return 0;
}