//Copy
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter limit for size of string: ");
	scanf("%d",&n);
	char ch[n], ss[15];
	printf("Enter String: \n");
	scanf("%s",ch);
	for(i=0;i<n;i++)
	{		
		ss[i]=ch[i];
		printf("%c",ss[i]);
	}
	return 0;
}

