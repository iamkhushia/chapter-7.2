#include<stdio.h>

/*
    A
    B A
    C B A
    D C B A
    E D C B A
*/

main()
{
	char A,B,C,D,E;
	int i,j;
	
	for(i= 'A' ; i<='E' ;i++)
	{
		for(j=i ; j>='A' ; j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}