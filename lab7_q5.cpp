//include library
#include<iostream>

using namespace std;

//create function to add all the even no.s
void EVENSUM(int n,int i,int &se)
{
	//check the condition
	if(n>=i)
	{
		//checking whether the no. is even or not
		if(n%2==0)
		{
			//calling the function
			se+=n;
			cout<<n<<" ";
			EVENSUM(--n,i,se);
		}
		else
		{
			//calling the function
			EVENSUM(--n,i,se);
		}
	}
}

//create function to add all the odd no.s
void ODDSUM(int n,int i,int &so)
{
	//check the condition
	if(n>=i)
	{
		//checking whether the no. is odd or not
		if(n%2!=0)
		{
			//calling the function
			so+=n;
			cout<<n<<" ";
			ODDSUM(--n,i,so);
		}
		else
		{
			//calling the function
			ODDSUM(--n,i,so);
		}
	}
}

//create main
int main()
{
	//declare variables
	int i,n,ch,se=0,so=0;

	//ask for the starting value
	cout<<"Enter the starting value : ";

	//take the given no. as input
	cin>>i;

	//assk for the ending value
	cout<<"Enter the ending value : ";

	//take the given no. as input
	cin>>n;

	//ask which option do they choose
	cout<<"Enter 1 to get the sum of all the even numbers"<<endl<<"Enter 2 to get the sum of all the odd numbers "<<endl<<"Enter 3 to get the sum of both even and odd numbers separately "<<endl<<"from the given numbers : ";
	
	//take the option as input
	cin>>ch;

	//calling function to add all the even no.s in the given range
	EVENSUM(n,i,se);

	//calling the function to add all the odd no.s in the given range
	ODDSUM(n,i,so);

	//checking the option to print the asked value
	if(ch==1)
	{
		//printing the even no.s
		cout<<"The sum of all the even numbers from "<<i<<" to "<<n<<" is "<<se<<endl;
	}
	if(ch==2)
	{
		//printing the odd no.s
		cout<<"The sum of all the odd numbers from "<<i<<" to "<<n<<" is "<<so<<endl;
	}
	if(ch==3)
	{
		//printing the even no.s
		cout<<"The sum of all the even numbers from "<<i<<" to "<<n<<" is "<<se<<endl;

		//printing the odd no.s
		cout<<"The sum of all the odd numbers from "<<i<<" to "<<n<<" is "<<so<<endl;
	}

	//terminating the function
	return 0;
}

