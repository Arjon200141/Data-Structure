#include <stdio.h>
#include <stdlib.h>

int quick(int *ar, int low, int high)
{
    int i = low, j = high;
    int pivot = ar[(low + high) / 2];
    while (i <= j)
    {
        while (ar[i] < pivot)
            i++;
        while (ar[j] > pivot)
            j--;
        if (i <= j)
        {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            i++;
            j--;
        }
    }
    if (low < j)
        quick(ar, low, j);
    if (i < high)
        quick(ar, i, high);
    return 0;
}

int main()
{
    puts("Enter the number of elements : ");
    int n;
    scanf("%d", &n);
    int ar[n];
    puts("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int low = 0;
    int high = n - 1;
    int pivot = ar[high];
    int k = low - 1;
    for (int j = low; j < high; j++)
    {
        if (ar[j] <= pivot)
        {
            k++;
            int temp = ar[k];
            ar[k] = ar[j];
            ar[j] = temp;
        }
    }
    int temp = ar[k + 1];
    ar[k + 1] = ar[high];
    ar[high] = temp;
    int pi = k + 1;
    quick(ar, low, pi - 1);
    quick(ar, pi + 1, high);
    puts("The sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}