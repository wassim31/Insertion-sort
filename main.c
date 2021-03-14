#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
void add(int *array);
void show(int *array);
void insertion_sort(int *array);
int main()
{
    int *array = (int*)malloc(SIZE * sizeof(int));
    add(array);
    show(array);
    printf("\n");
    // insertion sort : efficient algorithm to sort small array
    insertion_sort(array);
    show(array);
    free(array);


    return 0;
}

void add(int *array)
{
    int i;
    for(i = 0 ; i < SIZE ; i++)
    {
        scanf("%d", array+i);
    }
}
void show(int *array)
{
    int i;
    for(i = 0 ; i < SIZE ; i++)
    {
        printf("%d ", *(array+i));
    }
}

void insertion_sort(int *array) //
{
    int i, j, key;
    for(j = 1 ; j <= SIZE ; j++) // 6 5 4 3 2 1
    {
        key = array[j]; // key = array[1] = 5
        i = j;// 0
        while(i > 0 && array[i-1] > key /* 6 > 5 */  )
        {
            array[i] = array[i-1]; // array[1] = array[0] = 6
            i--;
        }
        array[i] = key; // array[0] = 5
    }
}
