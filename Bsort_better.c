#include<stdio.h>
int main()
{
	int a[]={2,5,3,7,9,5,33,11,14,333};
	int flag,t,i,j;
	for(i=0;i<10;i++)
	{
		flag=1;
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag=0;
			}
		 } 
		 if(flag)
		 	break;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	 } 
 } 
