#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double g(double x){
		double y=x*log(x)-exp(x);
		
		return y;
	}
int main(){
	double aire=0.00000;
	double eps=0.0001;
	double a=0.000,b=0.0000;
	printf("Donnez l'intervalle [a,b]\n");
	printf("Donnez a:")
	;scanf("%lf",&a);
	printf("Donnez b:")
	;scanf("%lf",&b);
	while((a+eps)<b){
		
		aire+=(eps*(g(a)+g(a+eps)))/2;
		a=a+eps;
	}
	printf("L'aire du domaine plan est %lf",aire);
	return 0;
}

