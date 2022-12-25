#include <iostream>
using namespace std;
// first check low < high
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = pivot;
    pivot = temp;
    return i;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pidx = partition(arr, low, high);
        quicksort(arr, low, pidx - 1);
        quicksort(arr, pidx + 1, high);
    }
}

int main()
{
    int arr[] = {35, 50, 15, 25, 80, 20, 90, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;
    quicksort(arr, low, high);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << ",";
    }
}