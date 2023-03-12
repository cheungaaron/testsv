#include<stdio.h>
/*sort numbers*/
void sort_numbers(int  *m,int *n)
{
	int temp;
	if(*m<*n) {
		temp = *m;
		*m = *n;
		*n = temp;
	}
}

char *s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;

	ret_val = fgets(st,n,stdin);
	if(ret_val) {
		while (st[i] !='\n'&& st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i]='\0';
		else
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}

/*Hermite Polynomials*/
int hermite(int n,int x)
{
	int result = 0;
	if(n<=0) {
		result = 1;
	} else if(n=1) {
		result  = 2*x;
	} else {
		result = 2*x*hermite(n-1,x)-2*(n-1)*hermite(n-2,x);
	}
	return result;
}