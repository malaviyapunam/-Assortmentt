#include<stdio.h>
main()
{
	int i,n;
	printf("enter the array size: ");
	scanf("%d",&n);
	
	int a[n];
	printf("enter the elements of the array : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("negative elements in the array are: ");
	for(i=0;i<n;i++)
	{
		if(a[i]< 0)
		{
			printf("%d",a[i]);
		}
	}
}