#include	<stdio_ext.h>
#include	<string.h>
# include	<stdlib.h>
# include	<stdio.h>
# define SZ 99
int a;
int str_cspn(char*, char*);
int main()
{
	char *p1,*p2;
	int ret;
	printf("how many characters you need \n");
	scanf("%d",&a);
	p1=(char*)malloc(a*sizeof(char));
	p2=(char*)malloc(a*sizeof(char));
	printf("enter first string\n");
	__fpurge(stdin);
	fgets(p1,a,stdin);
    p1[strlen(p1) - 1] = '\0';
	printf("enter 2nd string\n");
	__fpurge(stdin);
	fgets(p2,a,stdin);
    p2[strlen(p2) - 1] = '\0';
	ret=str_cspn(p1,p2);
	printf("num of matched characters without fail are %d\n",ret);
	return 0;
}

	int str_cspn(char *p1, char *p2)
	{
		
		int count=0;
		char* p3=p2;

		for( ;*p1;p1++) {

			for( p2=p3;*p2;p2++) {
		
				if(*p1==*p2){

				return count;

				}
			}count++;
	
		}return count;
}	
