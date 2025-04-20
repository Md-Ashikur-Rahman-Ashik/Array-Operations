#include <stdio.h>

int main()
{
    int array_size, i, l;

    scanf("%d", &array_size);

    int arr[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int j = 0;
    int k = array_size - 1;

    while (j < k)
    {
        /* code */
        int tmp = arr[j];
        arr[j] = arr[k];
        arr[k] = tmp;

        j++;
        k--;
    }

    for (l = 0; l < array_size; l++)
    {
        /* code */
        printf("%d ", arr[l]);
    }

    return 0;
}