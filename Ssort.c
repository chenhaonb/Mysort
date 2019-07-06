#include<stdio.h>
int main()
{
	int a[]={3,5,7,2,5,99,44,11,0,1};
	int i,j,max,t;
	for(i=0;i<10;i++)
	{
		max=i;
		for(j=i;j<10;j++)
		{
			if(a[j]>a[max])
			{
				max=j;
			}
		}
		t=a[max];
		a[max]=a[i];
		a[i]=t;	
	}

 } 
