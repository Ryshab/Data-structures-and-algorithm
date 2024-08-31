#include <iostream>
#include <vector>
using namespace std;

// union of two sorted arrays
vector<int> unionArr(vector<int>& a, vector<int>& b)
{
    vector<int> unionarr;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionarr.size() == 0 || unionarr.back() != a[i])
                unionarr.push_back(a[i]);
            i++;
        }
        else
        {
            if (unionarr.size() == 0 || unionarr.back() != b[j])
                unionarr.push_back(b[j]);
            j++;
        }
    }

    while (j < n2)
    {
        if (unionarr.size() == 0 || unionarr.back() != b[j])
            unionarr.push_back(b[j]);
        j++;
    }
    while (i < n1)
    {
        if (unionarr.size() == 0 || unionarr.back() != a[i])
            unionarr.push_back(a[i]);
        i++;
    }
    return unionarr;
}

void insert(vector<int>& num)
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

void display(const vector<int>& num)
{
    cout << "The elements in the array is :: ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
}
int main()
{
    vector<int> a;
    vector<int> b;

    insert(a);
    insert(b);

    display(unionArr(a, b));

    return 0;
}