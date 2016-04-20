// program to calculate number of pie can be cooled

#include <stdio.h>
#include <stdlib.h>
void sort(int a[], int n);
int main(void)
{
	int num, j,i,p, *pie, *rack, cases,counter;
	
	scanf("%d",&cases);	
	for (p = 0; p < cases;p++)
	{
		counter = 0;
		scanf("%d",&num);
	
		pie = malloc(sizeof(int) * num);
		for(i = 0;i < num;i++)
		{
			scanf("%d",&pie[i]);
		
		}
	
		rack = malloc(sizeof (int) * num);
		for(i = 0;i < num;i++)
		{
		
			scanf("%d",&rack[i]);
		}
		sort(pie, num);
		sort(rack, num);
	
	
		for(i = 0, j = 0;i < num;i++)
		{
			if(rack[i] >= pie[j])
			{
				counter++;
				j++;
			}
		}
		printf("%d\n", counter);
		
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
