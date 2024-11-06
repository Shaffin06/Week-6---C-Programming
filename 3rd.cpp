//Concat
#include <stdio.h>
int main()
{
	int i,n,l2=0,l1=0;
	printf("Enter limit for size of string: ");
	scanf("%d",&n);
	char ch[n], sh[n];
	printf("Enter String: \n");
	scanf("%s",ch);
	scanf("%s",sh);
	for(i=0;ch[i]!='\0';i++)
	l1++;
	for(i=0;sh[i]!='\0';i++)
	l2++;
	for(i=l1;i<l1+l2;i++)
	ch[i]=sh[i-l1];
	printf("Updated String = %s",ch);
	return 0;
}
	
	
