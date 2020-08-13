#include<stdio.h>
void quickSort(int *,int,int);
int partition(int *,int,int);
int main()
{
    int arr[10],size,i;
    printf("Enter The size of array -\n");
    scanf("%d",&size);
    printf("Enter the elements -\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    quickSort(arr,0,size-1);
    printf("The Sorted Array is -\n");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}
void quickSort(int *arr,int l,int r)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,r);
    }
}
int partition(int *arr,int l,int r)
{
    int pivot_pos=r,win=l-1,i=l,temp;
    while(i<r)
    {
        if(arr[i]<arr[pivot_pos])
        {
            win++;
            if(i!=win)
            {
                temp=arr[i];
                arr[i]=arr[win];
                arr[win]=temp;
            }

        }
        i++;
    }
    temp=arr[win+1];
    arr[win+1]=arr[pivot_pos];
    arr[pivot_pos]=temp;
    return (win+1);
}