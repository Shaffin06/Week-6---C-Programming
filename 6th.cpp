//First Occurence
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter limit for size of string: ");
	scanf("%d",&n);
	char ch[n],k;
	printf("Enter String: \n");
	scanf("%s",ch);
	fflush(stdin);
	printf("Enter character to search: ");
	scanf("%c",&k);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==k)
		{
			printf("Position of First Occurence = %d",i+1);
			break;
		}
	}
	return 0;
}
