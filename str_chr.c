# include   "head.h"

int a;
char* str_chr(char* , char );
int main()

{

	char c;
	char *p;
	char *ret;
	printf("how many characters do you have buddy\n");
	scanf("%d",&a);
	p=(char*)rd_str(a);
	printf("from which character you want me to return the pointer\n");
	__fpurge(stdin);
	scanf("%c",&c);
	ret = str_chr(p,c);
	if(ret==NULL){
	printf("iam afraid your input didnt match the string\n");
	return 0;
	}
	printf("this is what youve asked me --->  %s <---",ret);
	return 0;
}
char* str_chr(char* p,char c)
{

		while(*p) {
				if( *p == c  ) {
						return p;
				}

				else{
						p++;
				}
		}
		return 0;
}


