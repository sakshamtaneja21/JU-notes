#include<stdio.h>
int main()
{
    int arr[10],size,i;
    printf("Enter The size of array -\n");
    scanf("%d",&size);
    printf("Enter the elements -\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<size;i++)
    {
        int key=arr[i];
        int win=i-1;   
        while(arr[win]>key&&win>=0)
        {
            arr[win+1]=arr[win];//the condition won't have >= because then the algo won't be "stable algo"
            win--;
        }
        arr[++win]=key;
    }
    printf("The Sorted Array is -\n");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}