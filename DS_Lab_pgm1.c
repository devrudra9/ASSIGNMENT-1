#include <stdio.h>
#include <limits.h>

void third_Largest(int arr[], int n)
{
    int first = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > first)
            first = arr[i];
    }

    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] < first)
            second = arr[i];
    }

    int third = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > third && arr[i] < second)
            third = arr[i];
    }

    printf("%d ", third);
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    third_Largest(array, n);
    return 0;
}