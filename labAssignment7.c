#include <math.h>
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int arr[], int n)
{
  printf("\nUsing Bubble sort\n\n");
    int count = 0;
   int i, j,temp;
   int swapCount = 0;
   for (i = 0; i < n-1; i++)
   {
        
        for (j = 0; j < n-i-1; j++)
        {

           if (arr[j] > arr[j+1])
           {//then swap
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
             swapCount += 1;
           }
           
           
        }
        printf("Index %d: %d swaps\n", n-1-i, swapCount);
        swapCount = 0;
    }
}
int main()
{
    int arr[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
    int n = 9;

    printf("Array before sorting: \n");
    printArray(arr, n);

    bubbleSort(arr, n);
    printf("Sorted: \n");
    printArray(arr, n);

    

    return 0;
}