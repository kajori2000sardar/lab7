//include library
#include<iostream>

using namespace std;

//create function to calculate power
int POWER(int b,int p)
{
	//check condition
	if(p>1)
	{
		//calculate and return value
		return b*=POWER(b,--p);
	}
}

//create main
int main()
{
	//declaring variable
	int b,p,pow;

	//ask for the base value
	cout<<"Enter the value whose power you want to find : ";

	//take the base as input
	cin>>b;

	//ask for the power
	cout<<"Enter the power to which you want to calculate the base : ";

	//take the power as input
	cin>>p;

	//call the function to calculate power of the given base
	pow=POWER(b,p);

	//print the output
	cout<<"The power "<<p<<" of the given base "<<b<<" gives the value "<<pow<<endl;

	//terminate the program
	return 0;
}
