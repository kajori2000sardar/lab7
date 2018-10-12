//include library
#include<iostream>

using namespace std;

//create function to print odd no.
void PRINTODD(int n,int i)
{
	//checking the condition
	if(i<=n)
	{
		//check whether the no. is odd or not
		if(i%2!=0)
		{
			//print the no.
			cout<<i<<" ";
		}
		
		//checking the condition
		if(i!=n)
		{
			//use recursion to call the function again
			PRINTODD(n,++i);
		}
	}
}

//create function to print even no.
void PRINTEVEN(int n,int i)
{
	//checking the condition
	if(i<=n)
	{
		//check whether the no. is even or not
		if(i%2==0)
		{
			//print thr no.
			cout<<i<<" ";
		}

		//checking the condition
		if(i!=n)
		{
			//use recursion to call the function again
			PRINTEVEN(n,++i);
		}
	}
}

//create main
int main()
{
	//declaring variables
	int n,i,a;

	//ask for the starting value
	cout<<"Enter the starting value : ";

	//take the given no. as input
	cin>>i;

	//ask for the ending value
	cout<<"Enter the ending value : ";

	//take the given no. as input
	cin>>n;

	//giving choice to print whether the even no.s or odd no.s 
	cout<<"Enter 1 to print all the odd numbers"<<endl<<"Enter 2 to print all the even numbers"<<endl<<"Enter 3 to print both the odd numbers and even numbers separately"<<endl<<"between the given range"<<endl;

	//take the input
	cin>>a;

	//checking the input option
	if(a==1)
	{
		//print all the odd no.s
		cout<<"All the odd numbers between "<<i<<" and "<<n<<" are as following : "<<endl;

		PRINTODD(n,i);

		cout<<endl;
	}
	
	if(a==2)
	{
		//print all the even no.s
		cout<<"All the even numbers between "<<i<<" and "<<n<<" are as following : "<<endl;

		PRINTEVEN(n,i);

		cout<<endl;
	}

	if(a==3)
	{
		//print all the odd no.s
		cout<<"All the odd numbers between "<<i<<" and "<<n<<" are as following : "<<endl;

		PRINTODD(n,i);

		cout<<endl;

		//print all the even no.s
		cout<<"All the even numbers between "<<i<<" and "<<n<<" are as following : "<<endl;

		PRINTEVEN(n,i);

		cout<<endl;
	} 
	//terminating the program
	return 0;
}



















