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

    // for (j = i - 1; j >= 0; j--)
    // {
    //     /* code */
    //     printf("%d ", arr[j]);
    //     // if (j == modify_index)
    //     // {
    //     //     printf("0 ");
    //     // }
    //     // arr[i] = arr[i + 1];

    //     for (k = 0; k <= j; k++)
    //     {
    //         /* code */
    //         printf("%d ", arr[k]);
    //     }
    // }

    for (j = 0; j < array_size - 1; j++)
    {
        /* code */
        if (j < modify_index)
        {
            /* code */
            printf("%d ", arr[j]);
        }
        else
        {
            arr[j] = arr[j + 1];
            printf("%d ", arr[j]);
        }
    }

    return 0;
}