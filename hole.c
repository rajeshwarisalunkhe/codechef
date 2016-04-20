#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0,t, j = 0, p = 0;
	printf("input:");
        scanf("%d",&t);
	char s[100], h[7] = {'B','A', 'D', 'O', 'P', 'Q', 'R'};
	
		for(p = 0; p < t;p++)
		{
			scanf("%s",s);
			
		}
		int counter = 0,l = strlen(s);
		//printf("output:\n");		
		for(i = 0;i < l;i++)
		{
		
			for(j = 1;j < 6;j++)
			{
				if(s[i] == h[j])
				{
					counter++;
				}
			}
			if(s[i] == h[0])
			{
				counter = counter + 2;
			}
			
		}
		for(p = 0;p < t;p++)
		{
			printf("%d\n",counter);		
		}
		
	

}
