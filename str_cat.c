# include "head.h"

char* str_cat(char*, char*);

int c;
int main()
{
	char *p1,*p2,*p3;
	printf("enter how many bytes you nedd buddy\n");
	scanf("%d",&c);
	p1=rd_str(2*c);
	p2=rd_str(c);
	p3=(char*)str_cat(p1,p2);
	printf("the resulted string is: %s \n",p3);
	return 0;
	}


	char* str_cat(char *p1, char* p2)
	
	{

	int i,j;
	for(i=strlen(p1),j=0;*p2;p2++,i++){
	p1[i]=p2[j];
		}
		
		return p1;
		}
	
