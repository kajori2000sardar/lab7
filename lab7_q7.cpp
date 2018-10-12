//include library
#include<iostream>

using namespace std;

//create function to reverse a no.
void PAL(int n,int &rev)
{
	if(n>=10)
	{
		//declare variable
		int i,r;

		//initialize the variables
		i=n%10;
		rev=rev*10+i;
		n=n/10;
	
		//calling the function
		PAL(n,rev);
	}
	else
	{
		//initialize reverse
		rev=rev*10+n;
	}
}

//create main
int main()
{
	//declaring variables
	int n,rev=0;

	//ask for the no.
	cout<<"Enter the number to check whether it is pallindrome or not : ";

	//take the no. as input
	cin>>n;

	//calling the function
	PAL(n,rev);

	//check whether the no. is equal to it's reverse or not
	if(n==rev)
	{
		//print the no. is pallindrome
		cout<<"The given number "<<n<<" is pallindrome"<<endl;
	}
	else
	{
		//print the no. is not pallindrome
		cout<<"The given number "<<n<<" is not a pallindrome"<<endl;
	}

	//terminating the program
	return 0;
}
