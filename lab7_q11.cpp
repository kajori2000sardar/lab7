//include library
#include<iostream>

using namespace std;

//create function to find HCF
int HCF(int a,int b)
{
	//checking condition
	if(b==0)
	{
		//returning the value
		return a;
	}
	else
	{
		//calling the function
		return HCF(b,a%b);
	}
		

}

//create main
int main()
{
	//declaring variables
	int a,b,hcf;

	//ask for two no.s
	cout<<"Enter twon numbers whose HCF you want to know : ";

	//take the no.s as input
	cin>>b>>a;

	//calling the function
	hcf=HCF(a,b);

	//print the value of HCF
	cout<<"The HCF of "<<a<<" and "<<b<<" is "<<hcf<<endl;

	//terminating the program
	return 0;
}
