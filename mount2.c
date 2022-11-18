#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char** argv ) {

	char answer;
	char drive[30];
	char mount[30] = "sudo mount ";
	char mountpoint[30] = " /mountpoint";
	
if( argv = "--path" )
{
	printf( "Type the path you would like to mount the drive in. (Putting a space after the : is required.):");
	gets( mountpoint );

	system( "lsblk" );
	printf( "\nWhat drive would you like to mount?: " );
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

		system( mount );

	return 0;

	}
	
	else if ( answer == 'y' )
	
	{	

		system( mount );
		
	return 0;
	
	}
		else
	{
		printf( "Aborted!" );
		return 0;
	}
}

else

{

printf( "Warning: Path not specified, mounting in /mountpoint by default." );

	system( "lsblk" );
	printf( "\nWhat drive would you like to mount?: " );
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
		printf( "Aborted!" );
		return 0;
	}
	return 0;
	}
	
}
