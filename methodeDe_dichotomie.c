#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

double fonction(double x);
int main(){
	double eps=0.00000000001;
	double min=0.000,max=0.0000;
	printf("Donnez l'intervalle [min,max]\n");
	printf("Entrez min:")
	;scanf("%lf",&min);
	printf("Entrez b:");	
	scanf("%lf",&max);
	if(fonction(min)*fonction(max)<0){
	while(fabs(min-max)>=eps){
			if(fonction(min)*fonction((min+max)/2)<0){
				max=(min+max)/2;
			}
			else{
				min=(min+max)/2;
				}
	}
	printf("Voici a=%lf et voici b=%lf",min,max);
}else{
	
	printf("Pas de solution");}
	return 0;
}

double fonction(double x){
		double y=exp(x)-sqrt(2*x+1)-x*x;
		
		return y;
	}

