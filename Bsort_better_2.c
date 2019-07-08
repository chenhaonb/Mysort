#include<stdio.h>
int main()
{
	int a[]={2,5,3,7,9,5,33,11,14,333};
	int flag,t,i,j,k=9,last;
	for(i=0;i<10;i++)
	{
		flag=1;
		for(j=0;j<k;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag=0;
				last=j;
			}
		 }
		 k=last; 
		 if(flag)
		 	break;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	 } 
 } 
