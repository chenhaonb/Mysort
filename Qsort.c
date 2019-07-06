#include<stdio.h>
void Swap(int a[],int high,int low) 
{
	int t;
	t=a[low];
	a[low]=a[high];
	a[high]=t;
}
int part(int a[],int low,int high)
{
	int p; 
	p=a[low];
	while(low<high)
	{
		while(low<high&&a[high]>=p)
		high--;
		Swap(a,low,high);
		while(low<high&&a[low]<=p)
		low++;
		Swap(a,low,high);	
	}
	return low;
}
void Qsort(int a[],int low,int high)
{
	int p,i;
	if(low<high)
	{
		p=part(a,low,high);
		Qsort(a,low,p-1);
		Qsort(a,low+1,high);		
	}
}
int main()
{
	int i;
	int a[]={1,24,7,4,2,8,0,2,1,88};
	Qsort(a,0,9);
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
