#include <stdio.h>
int main() 
{
    int i;
	char ch[100],sh[100];
	printf("Enter String: \n");
	scanf("%[^\n]s",ch);
	ch[0]=ch[0]+32;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		ch[i+1]=ch[i+1]+32;
	}
	printf("Updated String: %s",ch);
	return 0;
}
