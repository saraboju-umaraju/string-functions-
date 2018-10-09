# include	"head.h"
# define SIZE 99

char * mystr(char *,char *, int);
int main(void)
{
	int j=0;
	int c=0;
	char *p;
	char *ret;
	char s1[SIZE];
	printf("how many slots you need budddy;\n");
	scanf("%d",&c);
	c++;
	p=rd_str(c);
	printf("how many characters you wanna take out and paste:\n");
	__fpurge(stdin);
	scanf("%d",&j);
	if(j==0){
	printf("so you dont wanna copy anything?\n");
	}
	ret = mystr(s1,p,j);
	printf("you have --> %s <-- with you\n",ret);
	return 0;
}
char* mystr(char *s1,char *p,int n)
{
	int i;
	for(i=0;i<n;i++){
	s1[i]=p[i];
	}
	s1[i]='\0';
	
	free(p);
	return s1;
}
