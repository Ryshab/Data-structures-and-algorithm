#include<iostream>
using namespace std;
#include<vector>
#include<map>

vector<int> twoSum(vector<int>& nums, int target) {
    map <int, int > hashmap;
    vector<int> ans;
    for(int i= 0; i<nums.size(); i++){
        int rem = target-nums[i];
        if(hashmap.find(rem) != hashmap.end()){
                
            ans.push_back(hashmap[rem]);
            ans.push_back(i);
            return ans;
        }
        else{
            hashmap[nums[i]]=i;
        }
    }
    return ans;
}

vector<int> threesum(vector<int> & nums, int target){
    vector<int> ans;
    return ans;
    
}

void insert(vector<int> &num)
{
    cout << "Insert function. Enter the number of elements ";
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        num.push_back(a);
    }
}

void display(const vector<int> &num)
{
    cout << "The elements in the array is :: ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
}
int main() 
{
    vector<int> nums;
    insert(nums);

    cout << "Write the sum : ";
    int k;
    cin >> k;

    display(twoSum(nums,k));

    return 0;
}