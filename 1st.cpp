//Length
#include <stdio.h>
int main()
{
	int i,n,c=0;
	printf("Enter limit for size of string: ");
	scanf("%d",&n);
	char ch[n];
	printf("Enter String: \n");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	c++;
	printf("Length of string = %d",c);
	return 0;
}
