//include library
#include<iostream>

using namespace std;

//create function to print all the given no.s using recursion
void PRINT(int n,int i)
{
	//checking condition
	if(i<=n)
	{
		//printing the no.
		cout<<i<<" ";

		//checking condition 
		if(i!=n)
		{
			//creating recursion
			PRINT(n,++i);
		}
	}
}

//creating main
int main()
{
	//declaring variable
	int n,i=1;

	//asking for the ending value
	cout<<"Enter the ending value : ";

	//take the given no. as input
	cin>>n;

	//call the function
	PRINT(n,i);

	cout<<endl;

	//terminating the program
	return 0;
}
	
