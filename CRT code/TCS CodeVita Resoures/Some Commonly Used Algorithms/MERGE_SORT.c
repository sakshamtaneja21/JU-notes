//Merge sort is better for larger size arrays than quick sort

#include <stdio.h>
#include <stdlib.h>
void merge(long *arr,int l,int mid,int r)
{
    long *temp=(long *)malloc(sizeof(long)*(r-l+1));
    int l1=l,r1=mid+1,i=0;
    while(l1<=mid&&r1<=r)
    {
        if(arr[l1]>arr[r1]){
            temp[i]=arr[r1];
            r1++;
        }
        else{
            temp[i]=arr[l1];
            l1++;
        }
        i++;
    }
    while(l1<=mid)
    {
        temp[i]=arr[l1];
        l1++;
        i++;
    }
    while(r1<=r)
    {
        temp[i]=arr[r1];
        r1++;
        i++;
    }
    i=0;
    for(l1=l;l1<=r;l1++)
    {
        arr[l1]=temp[i];
        i++;
    }
}
void mergesort(long *arr,int l,int r)
{
    if(r>l)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(void) {
    int n,i;
    long arr[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
	mergesort(&arr[0],0,n-1);
	for(i=0;i<n;i++)
	    printf("%ld ",arr[i]);
	printf("%d",i);
	return 0;
}