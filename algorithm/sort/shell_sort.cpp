#include "sort.h"

int main(int argc, char const *argv[])
{
    int size;
    cout << "Input size of array: ";
    cin >> size;
    int *arr = new int(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    shell_sort(arr, size);
    return 0;
}

template <typename T>
void shell_sort(T *&arr, uint32_t size)
{
    
}