//include library
#include<iostream>

using namespace std;

//create function to print fibbonicci series
void FIBN(int n,int &a,int &b)
{
	if(n>0)
	{
		//dclaring variable
		int temp;

		//printing the series
		cout<<a<<" ";	
		
		//initializing the variables
		temp=a+b;
		a=b;
		b=temp;

		//calling the function
		FIBN(--n,a,b);
	}
}

//create main
int main()
{
	//decalring variables
	int n,a=0,b=1;

	//ask for the no. of terms
	cout<<"Enter the number of terms to be printed : ";

	//take the no. of terms
	cin>>n;

	//calling the function
	FIBN(n,a,b);

	cout<<endl;

	//terminating the program
	return 0;
}
