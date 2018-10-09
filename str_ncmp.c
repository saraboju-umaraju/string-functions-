# include   "head.h"

# define SIZE 99
int c;
int str_ncmp(char* , char* ,int );
int main(void)
{

	int z=0;
	char *p1;
	char *p2;
	int ret;
	printf("how many slots you need budddy;\n");
	scanf("%d",&c);
	p1=(char*)rd_str(c);
	p2=(char*)rd_str(c);
	printf("how many bytes you want me to check\n");
	__fpurge(stdin);
	scanf("%d",&z);
	ret = str_ncmp(p1,p2,z);
	printf("the result is %d ",ret);
	return 0;
}
int str_ncmp(char *s1,char *s2, int z)
{
	int i=0,h=0;
	while(h<z){
	if(s1[i]!=s2[i])
	break;
	i++;
	h++;
	}
	if((s1[i]==s2[i])||(s1[i]=='\n'&& s2[i]=='\n')){
	return 0;}
	if(s1[i]>s2[i]){
	return 1;
	}
	else if(s1[i]<s2[i]){
	return -1;
	}
	
	free(s1);
	free(s2);
	return 0;
}
