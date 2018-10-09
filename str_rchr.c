# include   "head.h"
# include	<stdio_ext.h>
int a;
char* str_chr(char* , char );
int main()

{


	char c;
	char *p;
	char *ret;
	printf("how many characters do you have buddy\n");
	scanf("%d",&a);
	p=rd_str(a);
	printf("from which character you want me to return the pointer\n");
	__fpurge(stdin);
	scanf("%c",&c);
	ret = str_chr(p,c);
	printf("this is what youve asked me --->  %s <---\n",ret);
	return 0;
}
	char* str_chr(char* p,char c)
	{
			char *x = (char*)malloc(a*sizeof(char));
		while(*p != '\0'){
			p++;
			if(*p == '\0'){ break; }
			
			}
		p--;
		x = p;	
		while( *x ) {
		if( *x == c  ) {
		return x;
	}
		else{
			x--;
		}
		}return 0;
	}
	

