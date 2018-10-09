#include "head.h"
char* str_str(char* , char* );
int c;
int main(void)
{

	

	char *p1;                                                                             
    char *p2;                                                                             
    char* ret;                                                                              
    printf("how many slots you need budddy;\n");                                          
    scanf("%d",&c);                                                                       
    p1=(char*)rd_str(c);                                                                  
    p2=(char*)rd_str(c);                                                                  
    ret = str_str(p1,p2);                                                                 
    printf("the result is --->  %s  <---",ret);  
	return 0;

}   


 char* str_str(char* s1,char* s2)
	{	
		
		int i;
		int j;
			for(i = 0;s1[i];i++) {
				if(s1[i] == s2[0]) {
					for( j = 1;s2[j];j++) {
							if(s2[j] != s1[i+j])
								break;
						}
						if(s2[j] =='\0' || s2[j]== '\n')  
							return (s1+i);			
			}
		}
		return 0;
}
