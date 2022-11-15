#include <stdio.h>
#include <stdlib.h>
int main( )
{
	char filesystem[15];
	char answer;

	printf( "Enter the filesystem you would like to change write permissions too: " );
	gets( filesystem );

	printf( "\nYou typed: " );
	puts( filesystem );

	printf( "\nAre you sure you want to use this filesystem? (Y/N) " );
	
	scanf(" %c", &answer);
	printf("\n Selected %c\n", answer);
	if (answer == 'Y')
	{
		printf( "Success!" );
		strcpy( filesystem, filesystem );
		system( ls, &&filesystem );
	}
	else 
	{	
	printf( "Aborted!" );
		return 0;
}
	return 0;
}
