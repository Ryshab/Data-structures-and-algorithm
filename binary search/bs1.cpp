#include<iostream>
#include <array>
using namespace std;

int binarysearch (int arr[], int a , int length){
    int low = 0;
    int high = length - 1;
    int mid;
    while (high > low){

        mid = (high + low )/2;
        if(arr[mid]>a) {
            high = mid -1;
        }
        
        else if (arr[mid]<a){
            low = mid+1;
        }
        
        else{ return mid ;}
        
    }
    return -1;
}

int recursive_binary_search(int l,int h, int arr[], int a){
    if (l>=h) return -1;
    int mid = (l+h)/2;
    if(arr[mid]>a) recursive_binary_search(l,mid,arr,a);
    else if(arr[mid]<a) recursive_binary_search(mid,h,arr,a);
    else return mid;
}
int main() 
{
    int arr1[9] = {3, 4, 6, 7, 9, 11, 13, 16, 18};
    int a = 6;
    int length = sizeof(arr1) / sizeof(arr1[0]);

    // cout<<binarysearch(arr1,a,length);
    cout<<recursive_binary_search(0,length-1, arr1,a);





    return 0;
}