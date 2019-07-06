#include<stdio.h>
int main()
{
	int a[]={4,2,6,8,2,9,10,5,11,66};
	int i,j,t;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;	
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
 } 
