#include<iostream>
#include<vector>
using namespace std;

// Find the square root of a number n with the help of binary seach.
int floorSqrt(int n){
    int low = 1, high = n;
    int mid, ans;
    while (high>=low){
        mid = (high + low)/2;
        if(mid*mid <= n) {
            ans = mid;
            low = mid + 1;
            }
        else {
            high=mid-1;
        }
    }
    return ans;

}

// Find the nth root of a number
int Nthroot(int n , int m){
    int low = 1, high = n/m;
    while(high>=low){
        long long val = 1, mid;
        mid  = (high + low)/2;
        for(int i = 0; i < m; i++){
            val = val * mid;
            if (val > (long long)(n)){
                high = mid -1;
                break;
            }
        }
        // cout<<mid<<endl<<high<<endl<<low;
        if (val == (long long)(n)){
            return mid;
        }
        if (val < (long long)(n)) low = mid + 1;
    }
    return -1;
}



int main() 
{
    vector <int> v = {};

    int l = v.size();

    int n,m;
    cin>>n>>m;

    // cout<<floorSqrt(n);
    cout<<Nthroot(n,m);

    
    return 0;
}