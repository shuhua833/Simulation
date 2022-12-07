#include<stdio.h>
int main(){
	int x0,x[20],a,c,m,i,n,seed;
	printf("Enter the seed: ");
	scanf("%d",&x0);
	printf("Enter the increment:");
		scanf("%d",&c);
			printf("Enter the modulus:");
		scanf("%d",&m);
			printf("Enter the multiplier:");
		scanf("%d",&a);
		printf("Enter the number of random number to generate:");
		scanf("%d",&n);
		printf("Random numbers generated are:\n");
		seed=x0;
		for(i=0;i<n;i++){
			x[i]=(a*x0 + c) % m;
			printf("%d\n",x[i]);
			x0=x[i];
			if(x[i]==seed)
			printf("Cycle Repeats\n");
		}
}
