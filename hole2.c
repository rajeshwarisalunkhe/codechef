#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0,t, j = 0;
	printf("input:");
        scanf("%d",&t);
	char s[100];
	
	
	//printf("output:\n");		
	for(i = 0;i < t;i++)
	{
		scanf("%s",s);
		int counter = 0;
		
		
		for(j = 0;j < strlen(s);j++)
		{
			if(s[j] == 'A'||s[j] == 'D'||s[j] == 'O'||s[j] == 'P'||s[j] == 'R'||s[j] =='Q')
			{
				counter++;
			}
			else if(s[j] == 'B')
			{
				counter = counter + 2;
			}
		}
		printf("%d\n",counter);

	}
	
	

}
