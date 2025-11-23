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

    // ㊣э▆逼猭
    improvedBubbleSort(a, SIZE);

    printf("\nSorted array:\n");
    printArray(a, SIZE);

    system("pause");
    return 0;
}

// э▆獁逼猭
void improvedBubbleSort(int array[], int size)
{
    int pass; // 北近计
    int j;    // 北ゑ耕
    int hold; // ノユ传既跑计
    int swapped; // ノ癘魁赣近琌Τ祇ネユ传 (肈ヘ b 璶―)

    // 糷癹伴北苯磞近计
    for (pass = 0; pass < size - 1; pass++)
    {
        // 肈ヘ b 璶―–近秨﹍玡盢ユ传篨夹砞 0 (安)
        swapped = 0; 

        // ず糷癹伴ゑ耕籔ユ传
        // 肈ヘ a 璶―э癹伴兵ン
        // ﹍琌 j < size - 1瞷эΘ j < size - 1 - pass
        // –筁近 (pass 糤)程计竒↖┏场ぃ惠璶ゑ耕
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
