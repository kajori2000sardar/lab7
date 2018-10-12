//include library
#include<iostream>

using namespace std;

//initializing satic variable
int i=1;

//create function to find LCM
int LCM(int a,int b)
{
	//checking condition
	if((i%a==0)&&(i%b==0))
	{
		//returning value
		return i;
	}
	else
	{
		//incrementing variable value
		i++;
	
		//calling function
		LCM(a,b);
	}
	//returning value
	return i;
}

//create main
int main()
{
	//declaring variables
	int a,b,i=1,lcm;
	
	//ask for the no.s
	cout<<"Enter two numbers whose LCM you want to find : ";

	//take the no. as input
	cin>>a>>b;

	//calling the function
	if(a<b)
	{
		//calling function
		lcm=LCM(a,b);
	}
	else
	{
		//calling function
		lcm=LCM(b,a);
	}
		
	//print the LCM
	cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm<<endl;
	
	//terminating the program
	return 0;
}
	
