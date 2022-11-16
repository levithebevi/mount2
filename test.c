#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( )

{

	char answer;
	char drive[30];
	char mount[30] = "sudo mount ";
	char mountpoint[15] = " /mountpoint";

	system( "lsblk" );
	printf( "What drive would you like to mount?: " );
	gets( drive );
	strcat( mount,drive );
	strcat( mount,mountpoint );

	printf( "\nYou typed: " );
	puts( drive );

	printf( "\nAre you sure you want to mount this? (Y/N) " );
	
	scanf( " %c", &answer );
	printf( "\nSelected %c\n", answer );
	
	if ( answer == 'Y' )
		
{

		system( "sudo mkdir /mountpoint" );
		system( mount );

	return 0;

}
	else if ( answer == 'y' )
{	

		system( "sudo mkdir /mountpoint" );
		system( mount );
		
	return 0;
	
}
	else
{
return 0;
}
return 0;
}
