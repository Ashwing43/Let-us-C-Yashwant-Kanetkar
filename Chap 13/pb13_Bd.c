#include<stdio.h>
void selectionSort(int *arr);
void swap(int *xp, int *yp);
int main(){
    int arr[25];
    int n = 0, p = 0, e = 0, o = 0;
    int *ptr = arr;
    printf("Enter 25 numbers\n");
    for(int i=0; i<25; i++){
        scanf("%d", ptr++);
    }
    selectionSort(arr);
    printf("Sorted array is \n");
    for(int i=0; i<25; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int *arr)
{
    int i, j, min_idx;
    for (i = 0; i < 24; i++)
    {
        min_idx = i;
        for (j = i+1; j < 25; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}