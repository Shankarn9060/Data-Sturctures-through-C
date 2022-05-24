/*
#include<stdio.h>
void insertion_sort(int *arr,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
		   if(temp>arr[j])
		   {
		        //true
		       	arr[j+1]=temp;
		        break;
		   }
	       else
	       {
		        //flase
		        arr[j-1]=arr[j];
		   }
	    }
	    if(j==-1)
       	{
	    	arr[0]=temp;
	    }
    }
}
void main()
{
	int n,arr[100],i,*array;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
}
*/
#include<stdio.h>
int *insertsort(int *arr,int n)
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	return arr;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,*array;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	array=insertsort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}


