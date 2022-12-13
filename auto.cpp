#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double row,z,sum=0,p, R[40]={0,0.12,0.01,0.23,0.28,0.89,0.31,0.64,0.28,0.83,0.93,0.99,0.15,0.33,0.35
	              ,0.91,0.41,0.60,0.27,0.75,0.88,0.68,0.49,0.05,0.43,0.95,0.58,0.19,0.36,0.69,0.87};
	              int i,m;
	cout<<"Enter i:";
	cin>>i;
	cout<<"Enter m";
	cin>>m;
	int M=ceil(((30-i)/m)-1);
	for(int k=0;k<=m;k++)
	{

		sum+=R[i+(k*m)]*R[i+((k+1)*m)];
	}
	p=((1.0/(M+1))*sum)-0.25;
	row=(sqrt(13*M+7))/(12*(M+1));
	z=p/row;
	cout<<"Z= "<<z;
	if (z<=1.96)
	cout<<"Accepted";
	else
	cout<<"Rejected";	       
}
