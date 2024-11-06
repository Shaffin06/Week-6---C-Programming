#include <stdio.h>
int main()
{
	int i,k;
	char ch[100],sh[100],c;
	printf("Enter String: \n");
	scanf("%[^\n]s",ch);
	printf("Enter character to insert:\n");
	scanf("%c",&c);
	printf("Enter position to insert =\n");
	scanf("%d",&k);
	for(i=0;i<k-1;i++)
	sh[i]=ch[i];
	sh[k-1]=c;
	for(i=k;ch[i]!='\0';i++)
	sh[i]=ch[i];
	printf("Updated String = %s",sh);
	return 0;
}
