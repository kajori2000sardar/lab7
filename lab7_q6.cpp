//include library
#include<iostream>

using namespace std;

//create function to take and print the last digit
void REVERSE(int n,int &rev)
{
	if(n>=10)
	{
		//declaring variable
		int i;

		//intializing the variables
		i=n%10;
		rev=rev*10+i;
		n/=10;

		//calling the function 	
		REVERSE(n,rev);
	}
	else
		//print the no.
		rev=rev*10+n;
}

//create main
int main()
{
	//declaring variables
	int n,rev=0;

	//ask for the value
	cout<<"Enter the number whose reverse you want to find : ";

	//take the value as input
	cin>>n;

	//calling the function
	REVERSE(n,rev);
	
	//printing the reverse
	cout<<"The reverse of the number "<<n<<" is "<<rev<<endl;
	
	//terminating the program
	return 0;
}
