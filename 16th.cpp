#include <stdio.h>
int main()
{
	int i,j=0;
	char ch[100],sh[100];
	printf("Enter String: \n");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{	
		if(ch[i]>='a'&&ch[i]<='z')
		{
			if (ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
			{
				continue;
			}
			else
			{
				sh[j]=ch[i];
				j++;
			}
		}
	}
	printf("Updated string = %s",sh);
	return 0;
}

