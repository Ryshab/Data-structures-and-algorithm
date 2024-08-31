#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {13, 46, 24, 52, 20, 9};

    for (int i = 0; i < 5; i++)
    {
        int min = i;
        for (int j = i; j < 6; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}