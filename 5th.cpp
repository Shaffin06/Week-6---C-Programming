//Reverse
#include <stdio.h>
int main()
{
	int i,n,c=0;
	printf("Enter limit for size of string: ");
	scanf("%d",&n);
	char ch[n],sh[n];
	printf("Enter String: \n");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	c++;
	for(i=0;ch[i]!='\0';i++)
	sh[i]=ch[c-i-1];
	printf("Reversed String = %s",sh);
	return 0;
}

