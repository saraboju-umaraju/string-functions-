#include	<stdlib.h>

#include	<stdio.h>

#include	<string.h>

#define SIZE 1024

#define _SIZE 120

char* str_tok ( char* , char *) ;

int main ( void ) 
{

		char buf[ SIZE ] = "" ;

		char del_buf [ _SIZE ] = "" ;

		char *token = NULL ;

		puts ("enter a sentence to tokenize") ;

		if  ( ! fgets (buf , SIZE , stdin)  ) {

				puts ("error in input") ;

				exit ( EXIT_FAILURE ) ;

		}

		if ( buf [ strlen ( buf ) - 1 ] == '\n' )

				buf [ strlen ( buf ) - 1 ] = '\0' ;

		puts ("enter delimiters") ;

		if  ( ! fgets ( del_buf , SIZE , stdin)  ) {

				puts ("error in input") ;

				exit ( EXIT_FAILURE ) ;

		}

		if ( buf [ strlen ( del_buf ) - 1 ] == '\n' )

				buf [ strlen ( del_buf ) - 1 ] = '\0' ;

		token = str_tok  ( buf , del_buf ) ;

		while  ( token ) {

				printf ("token is : %s\n" , token);
			
				token = str_tok ( NULL , del_buf ) ;
				
				printf ("token is : %s\n" , token);

		}

		return 0 ;

}


char *str_tok ( char *buf , char *del_buf ) 
{
	
		static char *ptr = NULL ; 
			
		char *stack = NULL ;
		
		char *stick = del_buf ;

		int flag = 0 ;

		if ( ! buf ) {
	
			stack = ptr ;

		}	
		
		else {

		stack = buf ;

		ptr = buf ;
			

		}

		while  ( *stick ) {

				stack = ptr ; 

				while  ( *stack ) {

						if ( *stack == *stick ) {

								ptr = stack + 1 ;

								stack[0] = '\0' ; 

								return buf ;

						}

						else {
	
								stack ++ ;

								if  ( !stack ) {

									flag = 1 ;

									stick ++ ;

									break ; 

								}

						}
				}  // inner while ends here 

				if  ( stick == NULL ) { 

					return NULL ;

				}

					if ( !flag ) {

					stick ++ ;

					flag = 0 ;

				}

		}
}





