//include library
#include<iostream>

using namespace std;

//create function to calculate factorial
int FAC(int n)
{
	//checking condition
	if(n>1)
	{
		//returning and calling the function
		return n*=FAC(--n);
	}
	else
	{
		//return value
		return 1;
	}
}

//create main
int main()
{
	//declaring variables
	int n,fac;

	//ask for the no.
	cout<<"Enter the number to find it's factorial : ";

	//take the guven no. as input
	cin>>n;

	//calling the function to calculate the factorial
	fac=FAC(n);

	//print the factorial
	cout<<"Factorial of "<<n<<" is "<<fac*n<<endl;

	//terminating the program
	return 0;
}
