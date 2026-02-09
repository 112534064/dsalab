#include<stdio.h>
int main()
{
 int n, temp,minindex;
 print("enter number of element:");
 scanf("%d",&n);
 int arr[n];
 print("enter %d element:\n",n);
 for(int i=0;i<n;i++)
 scanf("%d",&arr[i]);
 for(inti=0;i<n-1;i++)
 {
 	minindex=i;
 	for(int j=i+1;j<n;j++)
 	{
 		if(arr[j]<arr[minindex])
 		minidex=j;
	 }
	 temp=arr[i];
	 arr[i]=arr[minindex]
	 arr[minindex]=temp;
 }
 printf("sorted array:\n");
 for(int i=0;i<n;i++)
 printf('%d',arr[i]);
 return 0
}
