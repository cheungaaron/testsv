/*
*求两个整数的最大公
*/
#include"gcd.h"
#include<stdio.h>
unsigned int gcd(unsigned int m, unsigned int n)
{

	unsigned int result  = 0 ;
	if(m <= 0 || n <=0) {
		result = 0;
	} else if(m%n == 0) {
		result = n;
	} else if((m%n)>0) {
		result = gcd(n,(m%n));
		
	}
	return result;
}