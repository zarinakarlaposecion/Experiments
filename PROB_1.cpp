#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int smallest, largest;
	int numb[10];
	double sum;
	
	cout<<"Please input the elements of the array: \n"; 
	for(int i = 0; i < 10; i++)
		{
			cin>> numb[i]; 
		}	
		cout << endl;

	smallest = numb[0];
	for(int i = 1; i < 10; i++)
	
	{	
		if(smallest > numb[i])
		smallest = numb[i];	
	}
	largest = numb[0];
	for(int i = 1; i < 10; i++)
	
	{
		if(largest < numb[i])
		largest = numb[i];	
	}
	for(int i = 0; i < 10; i++)
		{
			sum = sum + numb[i];
		}
	cout << "The sum of all the elements is " << sum << endl;
    cout << "The average is " << sum / 10 << endl;
	cout << "The largest number is \n "<< largest << endl;
	cout << "The smallest number is \n "<< smallest << endl;
	

getch ();
return 0;

}
