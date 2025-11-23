#include <stdio.h>
#include <stdlib.h> 

void printa(const int a[][3]);

int main()
{
	int a1[2][3] = {{1,2,3},{4,5,6}};
	int a2[2][3] = {1,2,3,4,5,};
	int a3[2][3] = {{1,2},{4}};
	
	printf("Values in array1 by row are¡G\n");
	printa(a1);
	
	printf("Values in array2 by row are¡G\n");
	printa(a2);
	
	printf("Values in array3 by row are¡G\n");
	printa(a3);
	
	system("pause");
	return 0;
}

void printa(const int a[][3]) 
{
	int i, j;
	
	for(i = 0;i < 2; i++)
	{
		for(j = 0;j < 3; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
