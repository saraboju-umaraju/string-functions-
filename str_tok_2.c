# include    "head.h"

char *str_tok( char* , char*);
int a;
int main(int argc, char *argv[])

{
	char *ret = NULL;
	printf("how many bytes you need buddy\n");
	ret=str_tok(argv[1],argv[2]);
	while(ret!= NULL){

		printf("the token is: %s\n",ret);
		ret=str_tok(NULL,argv[2]);
	}
	return 0;
}

char * str_tok(char * p1, char *p2)
{
	static int z;
	static char *s;	
	int start = z;
	if(p1!=NULL)
		s = p1;

	int j = 0;
	while(s[z] != '\0')
	{
		j = 0;	
		while(p2[j] != '\0')
		{		
			if(s[z] == p2[j])
			{
				s[z] = '\0';
				z = z+1;				
				if(s[start] != '\0')
					return (&s[start]);
				else
				{

					start = z;
					z--;
					break;
				}
			}
			j++;
		}
		z++;		
	}
	s[z] = '\0';
	if(s[start] == '\0')
		return NULL;
	else
		return &s[start];
}

