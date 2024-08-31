#include <iostream>
using namespace std;

void bubble(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void altbubble(int arr[], int n)
{
    bool swapp = true;
    int a = n - 1;
    while (swapp)
    {
        swapp = false;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapp = true;
            }
        }
        a--;
    }
}

void recursion_bubble(int arr[], int n)
{
    if (n == 0) return;
    int swap=0;
    for(int j=0;j<=n-2;j++  )
    if (arr[j] > arr[j+1])
    {
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
        swap++;
    }
    if (swap==0) return;
    recursion_bubble(arr, n - 1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // altbubble(arr, n);
    recursion_bubble(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}