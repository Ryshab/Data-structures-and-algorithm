#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> m)
{
    int rows = m.size();
    int col = m[0].size();

    vector<vector<int>> ans(rows, vector<int>(col));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[j][col - i - 1] = m[i][j];
        }
    }
    return ans;
}
void rotateinplace(vector<vector<int>> &m)
{
    int n = m.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(m[i][j], m[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(m[i][j], m[i][n - j - 1]);
        }
    }
}

void display(vector<vector<int>> m)
{
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[0].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void display(vector<int> m)
{
    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << " ";
    }
}

vector<int> spiral(vector<vector<int>> m)
{
    int row = m.size();
    int col = m[0].size();
    int top = 0, bottom = (row - 1);
    int left = 0, right = (col - 1);

    vector<int> ans;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(m[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(m[i][right]);
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            ans.push_back(m[bottom][i]);
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            ans.push_back(m[i][left]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};

    // display(rotate(matrix));

    // rotateinplace(matrix);
    // display(matrix);

    display(spiral(matrix));

    return 0;
}