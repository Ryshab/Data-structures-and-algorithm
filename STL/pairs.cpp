#include<iostream>
using namespace std;

int main() 
{
    pair <int , int> p;
    p.first=123;
    p.second=p.first+1;

    cout<<p.second;

    pair <string, pair<int , int>> arr[2];

    for (int i=0; i<2; i++){
        cout<<"Enter the name ";
        cin>>arr[i].first;

        cout<<"Enter the number in maths and science";
        cin>>arr[i].second.first>>arr[i].second.second;
    }

      

    return 0;
}