# include	"head.h"
# include	<stdio_ext.h>
# define SZ 99
int a;
int str_spn(char*, char*);
int main()
{
	char *p1,*p2;
	int ab;
	int ret;	
	printf("tell me how many characters you need\n");
	scanf("%d",&ab);
	p1=(char*)rd_str(ab);
	p2=(char*)rd_str(ab);
	ret=str_spn(p1,p2);
	printf("num of matched characters without fail are %d\n",ret);
	return 0;
}

	int str_spn(char *p1, char *p2)
	{
	int flag=0;	
		int count=0;
		char* p3=p2;

		for( ;*p1 != '\0';p1++) {

			p2 = p3;

			for( ;*p2 ;p2++) {
		
				if(*p1==*p2){
			//		flag=1;	
						count++;
							break;	
				}

			}
				//if(flag==1)
				//	flag=0;
			//	else
			//		return count;
			
		}
		return count;

	}


