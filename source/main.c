/*test files*/
/*.gitµÄÅäÖÃÎÄ¼ş*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"gcd.h"
#include"sort_number.h"
#define MAX 2000

int main(void)
{
	unsigned int m,n,w;
	char ch = '0';
	char ch1 = 'a';
	char * pch = &ch;
	char test[MAX];
	
	printf("please enter the first number:\n");
	scanf("%d",&m);
	printf("please enter the 2nd number:\n");
	scanf("%d",&n);
	w = gcd(m,n);
	printf("%d\n",sizeof(pch));
	printf("log10(%d)=%.16lf\n",m,log10(m));
	sort_numbers(&m,&n);
	printf("ch=%c,ch1=%c",ch,ch1);
	system("pause");
	return 0;

}
