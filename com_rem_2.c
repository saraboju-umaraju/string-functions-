#include "head.h"

int main()
{
	FILE *fp,*fp1;
	fp = fopen("uma.txt","r");
	fp1 = fopen("umx.txt","w");
	int ch;
	while((ch = fgetc(fp)) != EOF) {
		if(ch == '/') {
			ch = fgetc(fp);
			if(ch == '/') {
				fputc(' ',fp1);
				fputc(' ',fp1);
				while((ch = fgetc(fp)) != '\n') 
				fputc(' ',fp1);
				fputc('\n',fp1);
				
			}
		else if(ch  == '*') {
				fputc(' ',fp1);
			while((ch = fgetc(fp))!= '*')
				fputc(' ',fp1);
				
			if((ch == '*') && ((ch =fgetc(fp)) == '/' )) {
				fputc(' ',fp1);
				fputc(' ',fp1);
			}
		}
		}
		else if(ch == '"') {
			fputc(ch,fp1);
				while((ch = fgetc(fp) ) != '"')
					fputc(ch,fp1);
				fputc(ch,fp1);
			
		}
			else
			fputc(ch,fp1);
	}
}
