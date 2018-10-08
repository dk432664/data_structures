#include<stdio.h>

int main()
{
	int SIZE = 10;
	int arr[SIZE];
	int index, i, temp;
	
	printf("\nEnter Array : ");
	
	for(i = 0; i < SIZE; i++)
		scanf("%d",&arr[i]);
	
	for(index = 1; index < SIZE; index++)
	{
		for(i = index; (arr[i] < arr[i-1] && i != 0); i--)
		{
			temp = arr[i]; arr[i] = arr[i-1]; arr[i-1] = temp;
			
			for(int j = 0; j < SIZE; j++)
				printf("\t%d",arr[j]);
			printf("\n");
		} 
	}
	
	printf("\n\nFinal Array : ");
	
	for(i = 0; i < SIZE; i++)
		printf("\t%d",arr[i]);
		
	printf("\n\n");
}
