#include "head.h"

int  main(void)
{
        char *str1 = 0;
        int i;
		int j;
		int k;
		int l1;
		int l2;
        char *str2 = 0;
		char ch;
		int cnt = 0;
		char *temp = 0;
        str1 = rd_str(44);
        str2 = rd_str(44);
		l1 = strlen(str1);
        l2 = strlen(str2);
		i = l1-2;
        j = l2-2;
		temp = (str1 + i);
		if(l1 != l2) {
            printf("not same\n");
            return 0;
        }
        k = strcmp(str1,str2);
        if(k == 0) {
                printf("%d\n",l1);
                return l1;
        }
		      while(i) {
                j = 9;
                ch = *temp;
                while(j) {
                        str1[j] = str1[j -1];
                        j--;
                }
                str1[0] = ch;

                k = strcmp(str1,str2);
                cnt++;
                if(k == 0) {
                        printf("c=%d\n", cnt);
                        return 0;
                }
                i--;

        }
        return 0;

}

