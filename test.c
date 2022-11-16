#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( )

{

	char answer;
	char drive[30];
	char mount[30] = "sudo mount";

	system( "lsblk" );
	printf( "What drive would you like to mount?: " );
	gets( drive );

	printf( "\nYou typed: " );
	puts( drive );

	printf( "\nAre you sure you want to mount this? (Y/N) " );
	
	scanf( " %c", &answer );
	printf( "\nSelected %c\n", answer );
	
	if ( answer == 'Y' )
	
{

		printf( "Initializing ..." );
		strcat( mount, drive );
		printf( " Mounting ... " );
		system( drive );

		return 0;

}
	else 
{	
	printf( "Aborted!" );
	
	return 0;
}
	return 0;
}
