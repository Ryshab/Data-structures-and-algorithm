#include<iostream>
#include<vector>
using namespace std;

bool searchin2d(vector<vector<int>>& matrix , int target){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int high = rows * cols -1;
    int low = 0;
    long long mid , x, y;
    while (high>=low){
        mid = (high+low)/2;
        x = mid/cols;
        y = mid%cols;
        if(matrix[x][y]==target){
            return true;
        }
        else if (matrix[x][y]>target) high = mid -1;
        else low = mid + 1;
    }   

    return false;
}
int searchin2dans(vector<vector<int>>& matrix , int target){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int high = rows * cols -1;
    int low = 0;
    int mid , x, y;
    while (high>=low){
        mid = (high+low)/2;
        x = mid/cols;
        y = mid%cols;
        if(matrix[x][y]==target){
            return mid;
        }
        else if (matrix[x][y]>target) high = mid -1;
        else low = mid + 1;
    }   

    return -1;
}
int main() 
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int n;
    cin>> n;
    // cout<<matrix[matrix.size()-1].size();
    // cout<<matrix[matrix.size()-1][matrix[0].size()-1];
    // cout<< rows * cols;
    // if (searchin2d(matrix,n)) cout<<"Number exist in matrix";
    // else cout<<"Doesn't exist in matrix";

    int ans = searchin2dans(matrix,n);
    if (ans == -1) cout<<"no such element exists in the matrix";
    else {
        int x = ans / matrix[0].size();
        int y = ans% matrix[0].size();
        cout<<"Element exists on this index {" << x<<","<<y<<"}";
    }
    return 0;
}