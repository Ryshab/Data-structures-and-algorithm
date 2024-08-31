#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i--;
            }
        }
    }
}

void better_insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // {13,46,14,52,36,9}
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    better_insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}