#include <stdio.h>
#include <math.h>
int main(){
	long long tf, n, ti, income;
	long long pa = 9000000, pd = 3600000;

	printf("Your income of this year:");
	scanf("%lld", &income);
	printf("Number of dependent:");
	scanf("%lld", &n);	
	
	tf = 12 * (pa + n * pd);
	ti = income - tf;
	
	printf("tax-free income :%lld\n", tf);
	if(ti <= 0 ){
		printf("Taxable income: 0\n");
		printf("income tax: 0");
	}
	else if(ti <= 5000000){
		printf("Taxable income: %lld\n", ti);
		printf("Income tax: %lld", ti * 5 / 100);
	}
	else if(ti <= 10000000 ){
		printf("Taxable income: %lld\n", ti);
		printf("Income tax: %lld", ti * 10 / 100);
	}
	else if(ti <= 18000000 ){
		printf("Taxable income: %lld\n", ti);
		printf("Income tax: %lld", ti * 15 / 100);
	}
	else{
		printf("Taxable income: %lld\n", ti);
		printf("Income tax: %lld", ti * 20 / 100);
	}
	return 0;
}

