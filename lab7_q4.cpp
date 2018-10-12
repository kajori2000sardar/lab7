//include library
#include<iostream>

using namespace std;

//create function to add all the natural no.s
int SUM(int n)
{
	//check the condition
	if(n>0)
	{
		//calling the function again
		return n+=SUM(--n);	

	}
}

//create main
int main()
{
	//declaring variables
	int n,sum;

	//ask for output
	cout<<"Enter the ending value : ";

	//take the output as input
	cin>>n;
	
	//call the function
	sum=SUM(n);

	//show the output
	cout<<"The addition of all the numbers till the given number is : "<<sum+n<<endl;

	//terminating the program
	return 0;
}		
