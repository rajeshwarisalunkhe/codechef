#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0,t, j = 0;
	
        scanf("%d",&t);
	char s[t][100];
	
	for(i = 0; i < t;i++)
	{
		scanf("%s",s[i]);
	}
	printf("\n");		
	for(i = 0;i < t;i++)
	{
		int counter = 0;
		for(j = 0;j < strlen(s[i]);j++)
		{
			if(s[i][j] == 'A'||s[i][j] == 'D'||s[i][j] == 'O'||s[i][j] == 'P'||s[i][j] == 'R'||s[i][j] =='Q')
			{
				counter++;
			}
			else if(s[i][j] == 'B')
			{
				counter = counter + 2;
			}
		}
		printf("%d\n",counter);

	}
	return 0;
	
	

}
