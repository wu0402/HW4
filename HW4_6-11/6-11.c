#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void improvedBubbleSort(int array[], int size);
void printArray(const int array[], int size);

int main()
{
    int a[SIZE] = { 6, 4, 2, 8, 10, 1, 3, 7, 5, 9 };

    printf("Original array:\n");
    printArray(a, SIZE);

    improvedBubbleSort(a, SIZE);

    printf("\nSorted array:\n");
    printArray(a, SIZE);

    system("pause");
    return 0;
}

void improvedBubbleSort(int array[], int size)
{
    int pass;
    int j;
    int hold;
    int swapped;

    for (pass = 0; pass < size - 1; pass++)
    {
        swapped = 0; 

        for (j = 0; j < size - 1 - pass; j++)
        {
            if (array[j] > array[j + 1])
            {
                hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;

                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            printf("\n(Notice: Sorting terminated early at pass %d because array is sorted.)\n", pass + 1);
            break;
        }
    }
}

void printArray(const int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%4d", array[i]);
    }
    printf("\n");
}
