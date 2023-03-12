/*test files*/

#include<stdio.h>
#define MAX 20


float class;

#if(0)
char * s_gets(char *st, int n);
int main(void)
{
	char first[MAX];
	
	char last[MAX];
	char formal[2*MAX+10];
	double prize;
	
	puts("Enter your first name:");
	s_gets(first,MAX);
	puts("Enter your last name:");
	s_gets(last,MAX);
	puts("Enter your prize money:");
	scanf("%lf",&prize);
	sprintf(formal,"%s,%s:%f\n",last,first,prize);
	
	puts(formal);
	puts(first);
	class = 89;
	
	
	
	return 0;
}


char *s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;
	
	ret_val = fgets(st,n,stdin);
	if(ret_val)
	{
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
#endif

#if(0)


int main(void)
{
	int x;
//	printf("%d",3*x*x-4*x+6);

	char first[MAX];
	char last[MAX];
	char formal[2*MAX+10]= {"sdldkjgas"};
	double prize;

	puts("Enter your first name:");
	s_gets(first,MAX);
	puts("Enter your last name:");
	s_gets(last,MAX);
	puts("Enter your prize money:");
	scanf("%lf",&prize);

	sprintf(formal,"%s,%s:%f\n",last,first,prize);


	puts(formal);
	system("pause");
	return 0;
}



#endif