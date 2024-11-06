//Number of Wordsbnc
#include <stdio.h>
int main() 
{
    int i,c=1;
	char ch[100];
	printf("Enter String: \n");
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		c++;
	}
	printf("Number of Words = %d",c);
    return 0;
}
