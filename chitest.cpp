#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int N=100,j,n=10,E[20],O[20],count=0;
	double 	chi=0,i,a[N]={0.34,0.83,0.96,0.47,0.79,0.99,0.37,0.72,0.06,0.18,
	              0.90,0.76,0.99,0.30,0.71,0.17,0.51,0.43,0.39,0.26,
				  0.25,0.79,0.77,0.17,0.23,0.99,0.54,0.56,0.84,0.97,
				  0.89,0.64,0.67,0.82,0.19,0.46,0.01,0.97,0.24,0.88,
				  0.87,0.70,0.56,0.56,0.82,0.05,0.81,0.30,0.40,0.64,
				  0.44,0.81,0.41,0.05,0.93,0.66,0.28,0.94,0.64,0.78,
				  0.47,0.12,0.94,0.52,0.45,0.65,0.10,0.69,0.96,0.40,
				  0.60,0.21,0.74,0.73,0.31,0.37,0.42,0.34,0.58,0.19,
				  0.11,0.46,0.22,0.99,0.78,0.39,0.18,0.75,0.73,0.79,
				  0.29,0.67,0.74,0.02,0.05,0.42,0.49,0.49,0.05,0.62
				  };

   for(i=0;i<=1;i=i+0.1)
   {
       O[count]=0;
       for(j=0;j<N;j++)
       {
       	if((a[j]>i)&&(a[j]<=i+0.1))
       	{
       	 if(i>9)
       		{
       			cout<<endl<<a[j];
			   }
       	
       		O[count]++;
       		
		   }
	   }
	   count++;    
   }
  

  for(j=0;j<n;j++)
  {
  	E[j]=N/n;
  }
  for(j=0;j<n;j++)
  {
  	chi+=(pow((O[j]-E[j]),2)/E[j]);

  }
  cout<<"\nChi value="<<chi<<endl;
  if(chi<16.92)
    cout<<"Uniformly distributed";
    else
    cout<<"Not distributed uniformly";
  


   
}
