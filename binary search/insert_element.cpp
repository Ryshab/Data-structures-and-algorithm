#include<iostream>
#include <vector>
using namespace std;

void insert_el(vector<int> arr , int n, int x){
    int low = 0;
    int high = n-1;
    int mid;
    int ans = n;
    while (high>=low){
        mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }

    arr.insert(arr.begin()+ans,x);

    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        
        cout<<*(it)<<endl;
    }
}

int main() 
{

    vector<int> arr = {1,2,4,7};

    int n = arr.size();

    insert_el(arr,n,6);



    
    return 0;
}