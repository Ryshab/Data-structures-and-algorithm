#include <iostream>
#include <vector>
using namespace std;

// Find the longest subarray in a array which sums up tp k
int longestsub(vector<int> &nums, int k)
{
    int i = 0, j = 0, sum = 0, len = 0;
    while (j < nums.size())
    {

        sum += nums[j];
        while (sum > k && i <= j)
        {
            sum -= nums[i];
            i++;
        }

        if (sum == k)
            len = max(len, j - i+1);

        j++;
    }
    return len;
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

    cout << "The longest subarray with the sum of " << k << " is " << longestsub(nums, k);

    return 0;
}