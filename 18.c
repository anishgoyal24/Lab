// Program to read text file and count number of character, word and line in a file.
// Program to read text file and count number of character, word and line in a file.
# include <stdio.h>
main( )
{
 FILE *fp ;
 char ch ;
 int nol = 0, noc = 0, now = 0 ;

 fp = fopen ( "INDIA.TXT", "r" ) ;
 while ( 1 )
 {
 ch = fgetc ( fp ) ;
 if ( ch == EOF )
 break ;
 printf("%c",ch);
 noc++ ;
 if ( ch == '\n' )
 nol++ ;
 if (ch == ' ' || ch == '\n')
 now++;

 }
 fclose ( fp ) ;
 printf ( "\n\n\nNumber of characters = %d", noc ) ;
 printf ( "\nNumber of lines = %d", nol ) ;
 printf ( "\nNumber of words = %d", now ) ;
}
