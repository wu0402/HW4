#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str1[20], str2[] = "string literal";
	int i;
	
	printf("Enter a string¡G");
	scanf("%s",str1);
	
	printf("string1 is¡G %s\nstring2 is¡G %s\n"
		"string1 with space between characters is¡G \n"
		,str1,str2);
	for(i = 0;str1[i] != '\0'; i++)
	{
		printf("%c ",str1[i]);
	}
	
	printf("\n");
	system("pause");
	return 0 ;
}
