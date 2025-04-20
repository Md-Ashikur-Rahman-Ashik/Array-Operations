#include <stdio.h>

int main()
{
    int array_size, i, j, k, modify_index, modify_value;

    scanf("%d", &array_size);

    int arr[array_size + 1];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &modify_index, &modify_value);

    for (j = array_size; j >= modify_index; j--)
    {
        /* code */
        arr[j] = arr[j - 1];
        if(j == modify_index){
            arr[j] = modify_value;
        }
    }

    for ( k = 0; k <= array_size; k++)
    {
        /* code */
        printf("%d ", arr[k]);
    }
    
    return 0;
}