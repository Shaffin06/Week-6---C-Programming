#include <stdio.h>
int main()
{
	int i,j=0;
	char ch[100],sh[100];
	printf("Enter String: \n");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='A'&&ch[i]<='Z')
		{
			printf("%c",ch[i]);
			return 0;
		}
	}
}
