# include "head.h"

char* str_ncat(char*, char*, int);

int c;
int main()
{
	char *p1,*p2,*p3;
	int n=0;
	printf("enter how many bytes you nedd buddy\n");
	scanf("%d",&c);
	p1=rd_str(2*c);
	p2=rd_str(c);
	printf("enter the num of charactets to be concatinated:\n");
	scanf("%d",&n);
	p3=(char*)str_ncat(p1,p2,n);
	printf("the resulted string is: %s \n",p3);
	free(p1);
	free(p2);
	free(p3);
	return 0;
	}


	char* str_ncat(char *p1, char* p2,int n)
	
	{

	int i,j;
	int count=0;

	for( i = strlen(p1) , j=0 ; *p2 && count<n ; p2++ , i++, count++ ){
	p1[i]=p2[j];
		}
		
	
		return p1;
}
	
