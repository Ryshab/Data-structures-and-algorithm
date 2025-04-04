#include <iostream>
#include <vector>
#include<algorithm>
#include <climits>

using namespace std;

int maxfunction(vector<int> v){
    int max = INT_MIN;
    for(int i = 0; i<v.size(); i++){
        if (v[i]>max) max = v[i];

    }
    return max;
}

int minEatingSpeed1(vector<int> &v, int h)
{
    int low = 1;
    int high = maxfunction(v);
    int mid, ans, val;
    while (high > low)
    {
        val = 0;
        mid = (high + low) / 2;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % mid == 0)  val = val + (v[i] / mid);
            else val = val + (v[i] / mid) + 1;
        }
        if (val <= h)
        {
            high = mid - 1;
            ans = mid;
        }
        else low = mid + 1;
    }
    return ans;
}

int minEatingSpeed(vector<int>& piles, int h) {
    auto it = max_element(piles.begin(), piles.end());
    int high = *it;
    int low = 1;
    int val, mid, ans;
    while (high>=low){
        val = 0;
        mid = (high+low)/2;
        for(int i = 0; i < piles.size(); i++){
            if (piles[i]%mid == 0) val = val + (piles[i]/mid);
            else val = val + (piles[i]/mid) + 1;
        }
        cout<<val<<endl<<mid<<endl;
        if (val<=h){
            high = mid - 1;
            ans = mid;
        }
        else low = mid + 1;
    }
    return ans;
    
}

int main()
{
    vector<int> v = {30,11,23,4,20};
    int h;
    cin >> h;

    cout << "Answer :: " << minEatingSpeed(v, h);

    return 0;
}