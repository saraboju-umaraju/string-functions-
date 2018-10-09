# include	<string.h>
# include	<stdio.h>
# include   <stdlib.h>
int a;
char* str_chr(char* , int );
int main()

{

	int c;
	char *p;
	char *ret;
	printf("how many characters do you have buddy\n");
	scanf("%d",&a);
	p=(char*)malloc(a*(sizeof(char)));
	printf("enter your string dude\n");
	__fpurge(stdin);
	fgets(p,a,stdin);
	printf("from which character you want me to return the pointer\n");
	__fpurge(stdin);
	c = getchar();
	ret = str_chr(p,c);
	printf("look what you got---> %s <---",ret);
	return 0;
}
	char* str_chr(char* p,int c)
	{
	
		int i=0;
    printf("%d\n",c);	
	for(i=0;p[i];i++){
		if(p[i] == c){
		return p + i;
		}
	}
		/*else{
			printf("iam afraid that your input isnt there in string\n");
				exit(0);
		}*/
	}

