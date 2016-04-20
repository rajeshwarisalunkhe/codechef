/*Given an array A of length N, your task is to find the element which repeats in A maximum number of times as well as the corresponding count. In case of ties, choose the smaller element first.
Input

First line of input contains an integer T, denoting the number of test cases. Then follows description of T cases. Each case begins with a single integer N, the length of A. Then follow N space separated integers in next line. Assume that 1 <= T <= 100, 1 <= N <= 100 and for all i in [1..N] : 1 <= A[i] <= 10000
Output

For each test case, output two space separated integers V & C. V is the value which occurs maximum number of times and C is its count.
Example

Input:
2
5
1 2 3 2 5
6
1 2 2 1 1 2

Output:
2 2
1 3

Description:
In first case 2 occurs twice whereas all other elements occur only once. 
In second case, both 1 and 2 occur 3 times but 1 is smaller than 2.
*/


#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num,numsize, i, j, k, max, *counter, cases = 0;

	scanf("%d",&cases);
	
	

	for(i = 0;i < cases;i++)
	{
		max = 0;
		scanf("%d",&numsize);
	
		counter = malloc(sizeof(int) * numsize);

		
		for(j = 0; j < numsize;j++)
		{
			scanf("%d",&num);
			
			counter[num] = counter[num] + 1;
			
			if(counter[num] > max)
			{
				max = counter[num];
			}
		}
	
	
		for(k = 0; k <= 10000;k++)
		{
			if(counter[k] == max)
			{
				printf("%d %d \n", k , max);
				break;
			}
		}
		
		for(k = 0; k <= 10000;k++)
		{
			
			counter[k] = 0;
		}
		free (counter);
	}
	
}




