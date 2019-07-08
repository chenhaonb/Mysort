#include<stdio.h>
void Swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a[]={1,4,6,2,8,3,99,100,4,22};
	int i,max,min,left,right;
	left=0;
	right=9;
	while(left<=right)
	{
		max=min=left;
		for(i=left;i<=right;i++)
		{
			if(a[max]<a[i])
			{
				max=i;
			}
			if(a[min]>a[i])
			{
				min=i;
			}
		}
		Swap(a+min,a+left);
		if(left==max)
		{
			max=min;
		}
		Swap(a+max,a+right);
		left++;
		right--;	
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
 } 
