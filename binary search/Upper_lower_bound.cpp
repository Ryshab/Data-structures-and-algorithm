#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lowerbound(vector<int> arr1, int n, int t){
    int low = 0;
    int high = n-1;
    int mid ;
    int ans = n;
    while(high>low){
        mid = (low+high)/2;
        if(arr1[mid]>=t) {
            ans = mid;
            high = mid - 1;
            
        }
        else {
            low = mid + 1;
            
        }
        
    }
    
    return ans;
}

int upperbound(vector<int> arr2, int n , int t){
    int low  = 0;
    int high = n - 1;
    int mid;
    int ans = n;
    while(high>low){
        mid = (low+high)/2;
        if(arr2[mid]>t) {
            ans = mid;
            high = mid - 1;
            
        }
        else {
            low = mid + 1;
            
        }
        
    }
    return ans;
}

int main() 
{
    vector<int> arr = {3,5,8,15,19};
    // for (auto it = arr.begin(); it != arr.end(); it++)
    // {
        
    //     cout<<*(it)<<endl;
    // }
    int n = arr.size();

    // target = 6
    int target;
    cout<<"Define target number";

    cin>>target;

    cout<<"Your answer is "<<lowerbound(arr,n,target)<<endl;
    cout<<"Your answer is "<<upperbound(arr,n,target)<<endl;
    auto x = lower_bound(arr.begin(), arr.end(), 9);
    cout<<(x-arr.begin());
    
    auto y = upper_bound(arr.begin(), arr.end(), 9);
    cout<<(y-arr.begin());


    return 0;
}