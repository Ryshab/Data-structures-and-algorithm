#include<iostream>
#include<vector>
using namespace std;

int peak_element(vector<int> v , int n ){
    int low = 0;
    int high = v.size()-1;
    int mid;
    while (high>low){
        mid = (low + high )/2;
        if (mid==high || mid==low){
            if(v[low]>v[high]) return low;
            else return high;
        }
        else if (v[mid]>v[mid+1] && v[mid]>v[mid-1]){
            return mid;
        }
        else if (v[mid-1]>v[mid+1]){
            high = mid -1;
        }

        else{
            low = mid + 1;
        }
    }
    if (high == low) return high;
    return -1;
}

int findKRotation(vector<int> &v){
    // Write your code here.  
    int low = 0;
    
    int high = v.size()-1;
    cout<<high;
    if (high  == 0) return 0;
    if(v[low]>v[low+1]) return 1;
    int mid;
    while (high>low){
        mid = (low + high )/2;
        if (v[mid]>v[mid+1] && v[mid]>v[mid-1]){
            return mid+1;
        }
        if (v[mid]<v[mid+1] && v[mid]<v[mid-1]){
            return mid;
        }
        else if (v[low]>v[mid]){
            high = mid -1;
        }

        else{
            low = mid + 1;
        }
    }

    return 0;
}  

int main() 
{
    vector<int> v = {3,4,5,1,2};
    int len = v.size();

    // cout<<"The peak element is: "<<peak_element(v,len);

    cout<<"number of rotation :: "<<findKRotation(v);
    
    return 0;
}