//Upp to Low
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter limit for size of string: ");
	scanf("%d",&n);
	char ch[n];
	printf("Enter String: \n");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	ch[i]=ch[i]+32;
	printf("Updated String = %s",ch);
	return 0;
}
