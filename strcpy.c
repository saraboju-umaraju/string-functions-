# include   "head.h"
# define SIZE 99

char * mystr(char *,char *);
int main(void)
{

	int c=0;
	char *p;
	char *ret;
	char s1[SIZE];
	printf("how many slots you need budddy;\n");
	scanf("%d",&c);
	p=(char *)malloc(c*sizeof(char));
	perror("malloc");
	printf("enter the string you wanna copy\n");
	__fpurge(stdin);
	fgets(p,c,stdin);
	ret = mystr(s1,p);
	printf("you have enterde :  %s\n",ret);
	return 0;
}
char* mystr(char *s1,char *p)
{
	int i;
	for(i=0;p[i];i++){
	s1[i]=p[i];
	}
	s1[i]='\0';
	
	free(p);
	return s1;
}
