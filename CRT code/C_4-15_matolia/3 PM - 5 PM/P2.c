#include<stdio.h>
int main()
{
     int arr[]={0,1,2,3,4};
     int i,*ptr;
     for(ptr=&arr[0] , i=0;i<=4;i++)
	 printf("%d",*ptr[i]); // printf("%u", ptr+i);
}
