

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	
	int n,i,temp,j;
	
	printf("Enter the size of array:\n");
	scanf("%d", &n);

	int a[n];

	printf("Enter the elements of array:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
    
	printf("Array elements berfore sorting are :\n");
    for(i=0;i<n;i++)
    {
    	printf("%d ", a[i]);
    }

    for(i=0;i<n-1;i++)  // for comparison sets / passes
    {
    	for(j=0;j<n-1-i;j++)   
    		
    		/* (n-1) for comparison of two corresponding elements 
    		while (n-1-i); here i tells that after each pass the last 
    		elements are already gonna fixed hence no need to compare them  */
    	{
    	if(a[j] > a[j+1])
    	{
    		temp=a[j];
    		a[j]=a[j+1];
    		a[j+1]=temp;
    	}	
    	}
    }

    printf("\nElements after sorting are :\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\n",a[i]);
    }
  getch();

}