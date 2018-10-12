//include library
#include<iostream>

using namespace std;

//create function to sum digits of a no.
void SUMD(int n,int &sum)
{
	if(n>=10)
	{
		//declare variables
		int i;

		//initializing the variable
		i=n%10;
		sum+=i;
		n/=10;

		//calling the function
		SUMD(n,sum);
	}
	else
	{
		//initializing
		sum+=n;
	}
}

//create main
int main()
{
	//declaring variables
	int n,sum=0;

	//ask for the input
	cout<<"Enter a number and know the sum of each digit of the number : ";

	//take the no. as input
	cin>>n;

	//calling the function
	SUMD(n,sum);

	//print the sum of each digits
	cout<<"The sum of each digit of "<<n<<" is "<<sum<<endl;

	//terminating the program
	return 0;
}

