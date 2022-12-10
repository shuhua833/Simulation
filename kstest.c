#include<stdio.h>
int main()
{
	float R[20],Dplus[20],Dminus[20],temp,a,temp1,max;
	int n,i,j;
	printf("Enter the number of data:");
	scanf("%d",&n);
	printf("Enter the data:");
	for(i=1;i<=n;i++)
	{
		scanf("%f",&R[i]);
	}
	printf("Enter the critical value:");
	scanf("%f",&a);
// 	printf("Arranging the data in ascending order:");
    for(i=1;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(R[j]>R[j+1])
            {
                temp=R[j];
                R[j]=R[j+1];
                R[j+1]=temp;
            }
        }
    }
// 		for(i=1;i<=n;i++)
// 	{
// 		printf("%.3f\t",R[i]);
// 	}
for(i=1;i<=n;i++)
{
    Dplus[i]=(((float)i/n)-R[i]);
    Dminus[i]=(R[i]-((float)(i-1)/n));
    
}
for(i=1;i<=n;i++)
{
    printf("\nFor R%d",i);
   printf("\nD+ %.3f=",Dplus[i]) ;
    printf("\nD- %.3f=",Dminus[i]) ;
    
}
temp=0;
for(i=1;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(Dplus[j]>Dplus[j+1])
            {
                temp=Dplus[j];
                Dplus[j]=Dplus[j+1];
                Dplus[j+1]=temp;
            }
             if(Dminus[j]>Dminus[j+1])
            {
                temp=Dminus[j];
                Dminus[j]=Dminus[j+1];
                Dminus[j+1]=temp;
            }
        }
    }
    // printf("\nMax of Dplus = %.3f",Dplus[n]);
    // printf("\nMax of Dminus = %.3f",Dminus[n]);
    
    if(Dplus[n]>Dminus[n])
    {
         max=Dplus[n];
    }
    else
    {
        max=Dminus[n];
    }
    printf("\n\nConclusion\n");
    if(max<=a)
    printf("\nUniformly distributed");
    else
    printf("\nNot distributed uniformly");
    

}
