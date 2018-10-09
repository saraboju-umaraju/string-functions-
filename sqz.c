# include    "head.h"

char *str_sqz(char* , char*);
int a;
int main(void)

{
		char *p1,*p2,*ret;
		printf("how many bytes you need buddy\n");
		scanf("%d",&a);
		p1=rd_str(a);
		p2=rd_str(a);
		ret=str_sqz(p1,p2);
		printf("the sqeezed string is:%s\n",ret);
		free(p1);
		free(p2);
		return 0;
		
}

char* str_sqz( char* p1, char *p2)
{

			int i,j,k,cnt;	
			char *p3 = malloc(a*(sizeof(char)));	
		
		for(i=0 ; p2[i] ; i++){

				for(cnt = 0,j=0, k=0 ; p1[j] ; j++  ){

						if( p2[i] != p1[j] ){

								p3[k++]=p1[j];
								
								
							}
						else 
							cnt++;

				}
		p3[k] = '\0';
		if(cnt != 0) {
			
			i = 0;
			p1 = p3;
	}	
		

		}

	//	p3[k]='\0';
		return p3;


}

