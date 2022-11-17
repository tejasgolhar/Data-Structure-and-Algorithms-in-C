

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int n,temp;

	printf("Enter the size of array : \n");
	scanf("%d", &n);

	int a[n];

	printf("\nEnter the elements of array :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}

	printf("The elements of array before sorting are:\n");

	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}


	for (int i = 0; i < n-1; ++i)
	{
		int min = i;

		for (int j = i+1; j < n ; ++j)
		{
			if ( a[j]<a[min])
			{
				min = j;
			}
		}

		if ( min != i)
		{
			int temp = a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}

     printf("\nThe elements of after sorting are:\n");

	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	getch();

}