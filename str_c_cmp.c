# include   "head.h"
# define SIZE 99
int c;
char* conv(char*);
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
	p1=(char*)conv(p1);
	p2=(char*)conv(p2);
	ret=str_cmp(p1,p2);
	printf("the result after comparision  %d\n",ret);
	return 0;
}
	int str_cmp(char* s1, char *s2){

	int i=0,h=0;
	while(h<c){
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



	char* conv(char* p)
	{
	char *k=NULL;
	k=(char*)malloc(strlen(p) + 1);
	k=p;
	
		while(*p){
		
		if(*p < 91 && *p > 64)
		{
			*p=(*p|(1<<5));
			p++;
		}
else{
	p++;
	}
}
			
	return k;	
}	
	
