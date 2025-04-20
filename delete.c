#include <stdio.h>

int main()
{
    int array_size, i, j, modify_index;

    scanf("%d", &array_size);

    int arr[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    scanf("%d", &modify_index);

    for (j = i - 1; j >= 0; j--)
    {
        /* code */
        printf("%d ", arr[j]);
    }

    return 0;
}