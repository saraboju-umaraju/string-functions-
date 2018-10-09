#include "head.h"

int main(void)
{
      	char *buf = NULL;
		FILE *fp;
		int x;
		int i;
		int j;
		int n;
		int cnt;
		fp = fopen("","r");
			if(fp == NULL) {
				printf("empty folder\n");
				return 0;
			}
		fseek(fp,0,2);
		cnt = ftell(fp);
		rewind(fp);
		buf = (char*) calloc(1, cnt+1);
		fread(buf,1,cnt+1,fp);
		printf("enter no of characters to divide\n");
		x = intmain();
		n = x;
			
			for(i = 0;buf[i];i++) {
				n = x;
				while(n) {
					i++;
					n--;
				}
				
				if(buf[i] == ' ' || buf[i] == '\t' )
						buf[i] = '\n';
				else {
					j = i;
					while(buf[j]) {
   						if(buf[j] != ' ') {
							j--;
							continue;
						}
						else {
							buf[j] = '\n';
							break;
							}
					}
				}
		}
		printf("%s\n",buf);
		return 0;
}

