//Vowels
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter limit for size of string: ");
	scanf("%d",&n);
	char ch[n],sh[n];
	printf("Enter String: \n");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if (ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		printf("%c",ch[i]);
	}
	return 0;
}

