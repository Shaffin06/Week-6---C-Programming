//Equal or Unequal
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter limit for size of string: ");
	scanf("%d",&n);
	char ch[n],sh[n];
	printf("Enter String: \n");
	scanf("%s",ch);
	scanf("%s",sh);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=sh[i])
		{
			printf("They are unequal");
			return 0;
		}
	}
	printf("They are equal");
	return 0;
}

	
	
