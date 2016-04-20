// program to calculate number of pie can be cooled

#include <stdio.h>
#include <stdlib.h>
void sort(int a[], int n);
void input(int *array, int n);
int main(void)
{
	int num, j,i, *pie, *rack, counter = 0;
	
	printf("enter no of pie:");
	scanf("%d",&num);

	input(pie, num);
	
	
	for(i = 0; i < num;i++)
	{
		printf("%d\t", pie[i]);
	}
	input(rack, num);
	
	sort(pie, num);
	sort(rack, num);
	
	
	for(i = 0, j = 0;i < num;i++)
	{
		if(rack[i] >= pie[j])
		{
			printf("%d\t%d",rack[i], pie[j]);
			counter++;
			j++;
		}
	}
	printf("%d\n", counter);
} 

void input(int *array, int n)
{
	int i;
	array = malloc(sizeof (int) * n);	
	printf("enter weight ");
	for(i = 0;i < n;i++)
	{
		scanf("%d",&array[i]);
		
	} 
}

void sort(int a[], int n)
{

	int i, j,temp = 0 ;
	
	for(j = 0 ;j < n;j++)
	{
		for(i = 0;i < n - j - 1;i++)
		{
			if(a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
	

}
