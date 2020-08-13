#include<stdio.h>
int main()
{
    int arr[10],size,i;
    printf("Enter The size of array -\n");
    scanf("%d",&size);
    printf("Enter the elements -\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size-1;i++)
    {
        int min_indx=i,j,temp;
        for(j=i+1;j<size;j++)
            if(arr[min_indx]>arr[j])
                min_indx=j;
        if(min_indx!=i)
        {
            temp=arr[i];
            arr[i]=arr[min_indx];
            arr[min_indx]=temp;
        }
    }
    printf("The Sorted Array is -\n");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}