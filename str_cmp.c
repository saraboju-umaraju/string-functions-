# include   "head.h"
# define SIZE 99
int c;
int str_cmp(char* , char* );
int main(void)
{

	char *p1;
	char *p2;
	int ret;
	printf("how many slots you need budddy;\n");
	scanf("%d",&c);
	p1=(char*)rd_str(c);
	p2=(char*)rd_str(c);
	ret = str_cmp(p1,p2);
	printf("the result is %d ",ret);
	return 0;
}
int str_cmp(char *s1,char *s2)
{
	int i=0,h=0;
	while(h<c){
	if((s1[i]!=s2[i])!='\0'){
	break;}
	i++;
	h++;
	}
	if((s1[i]==s2[i])=='\n'){
	return 0;}
	if(s1[i]>s2[i]){
	return 1;
	}
	else if(s1[i]<s2[i]){
	return -1;
	}
	return 0;
}
