#include<iostream>
#include<math.h>
using namespace std;
void addition();
void subtraction();
void multiplication();
void division();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main()
{
	cout<<"WELCOME TO THE DIGITAL CALCULATOR"<<endl;
	cout<<"Press 0 to quit the program"<<endl;
	cout<<"Enter 1 for Addition \n";
	cout<<"Enter 2 for Subtraction \n";
	cout<<"Enter 3 for Multiplication \n";
	cout<<"Enter 4 for Division \n";
	cout<<"Enter 5 for Factorial \n";
	cout<<"Enter 6 for Power \n";
	cout<<"Enter 7 for Square \n";
	cout<<"Enter 8 for Cube \n";
	cout<<"Enter 9 for squareroot \n";
	int choice;
	
	while(1)
	{
			cout<<"Enter your choice: ";
	        cin>>choice;
	
    	switch(choice)
	  {
		case 1: 
	     	addition();
		    break;
		case 2:
		    subtraction();
			break; 
		case 3: 
	     	multiplication();
		    break;
		case 4:
		    division();
			break;   
		case 5: 
	     	factorial();
		    break;
		case 6:
		    power();
			break;
		case 7: 
	     	square();
		    break;
		case 8:
		    cube();
			break;   
		case 9: 
	     	squareroot();
		    break;
		case 0:
			exit(0);
		default:
			cout<<"Wrong choice, Enter valid choice \n";
			break;
   	 }
    }
}
	 void addition()
	 {
	 	cout<<"Enter the numbers you want to add: ";
	 	int a,b;
	 	cin>>a>>b;
	 	cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
	 }
	 void subtraction()
	 {
	 	cout<<"Enter the numbers you want to subtract: ";
	 	int a,b;
	 	cin>>a>>b;
	 	cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
	 }
	 void multiplication()
	 {
	 	cout<<"Enter the numbers you want to multiply: ";
	 	int a,b;
	 	cin>>a>>b;
	 	cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
	 }
	 void division()
	 {
	 	cout<<"Enter the numbers you want to divide: ";
	 	int a,b;
	 	cin>>a>>b;
	 	cout<<"The division of "<<a<<" and "<<b<<" is "<<(float)a/(float)b<<endl;
	 }
	 void factorial()
	 {   //n! = n(n-1)(n-2).....
	 	cout<<"Enter the number you want the factorial of: ";
	 	int n;
	 	cin>>n;
	 	int fact =1;
	 	for (int i =1; i<=n;i++)
	 	{
		  fact = fact*i;
	 	}
		 cout<<"The factorial of "<<n<<" is "<<fact<<endl;   
	 }
	 void power()
	 {   //6^4 = 6*6*6*6
	     //pow(b,e)
	    //pow(6,4)
	 	cout<<"Enter the base and exponent: ";
	 	double b,e;
	 	cin>>b>>e;
	 	double power = pow(b,e);
	 	cout<<"The power of "<<b<< " is "<<power<<endl;
	 }
	 void square()
	 {  //n^2 = n*n
	 	cout<<"Enter the number you want the square of: ";
	 	double b;
	 	cin>>b;
	 	double power = pow(b,2);
	 	cout<<"The square of "<< b<<" is "<<power<<endl;
	 }
	 void cube()
	 {
	 	cout<<"Enter the number you want the cube of: ";
	 	double b;
	 	cin>>b;
	 	double power = pow(b,3);
	 	cout<<"The cube of "<< b<<" is "<<power<<endl;
	 
	 }
	 void squareroot()
	 {
	 	cout<<"Enter the numbers you want the squareroot of: ";
	 	double n;
	 	cin>>n;
	 	double squareRoot =  sqrt(n);
	 	cout<<"The squareRoot of "<<n<<" is "<<squareRoot<<endl;
	 }
	




