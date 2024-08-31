#include<iostream>
#include<vector>
using namespace std;

// Rotate the array with one index

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n>1000)
        k = k % n;
        while (k>0){
            int temp=nums[n-1];
            for(int i = n-2; i>=0; i--){
                nums[i+1]=nums[i];
            }
            nums[0]=temp;
            k--;
        }
    }


// move Zeros to the last
void movezero(vector<int>& nums){
    int count=0;
    int n=nums.size();
    for(int i = 0; i<n; i++){
        if(nums[i]==0) {count++;}
        else{
            nums[i-count]=nums[i];
        }
    }
    while(count>0){
        nums[n-count]=0;
        count--;
    }
    }

int linearsearch(vector <int> & nums, int x){
    for(int i=0; i<nums.size(); i++){
        if (nums[i]==x) return i;
    }
    return 0;

}

int main() 
{
    int n;
    cin>>n;
    vector <int> nums(n);

    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    // int k;
    // cout<<"How many place do you want to rotate? ";
    // cin>>k;
    // rotate(nums,k);

    // movezero(nums);

    // cout<<linearsearch(nums,5);
    // for(int i = 0; i<n; i++){
    //     cout<<nums[i]<<" ";
    // }
    
    return 0;
}