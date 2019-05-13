#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{	
	char arr[100];
	int x;
	
	cout << "Please input the elements of your array: \n";
	cin>> arr;
	
	x =0;
	
	while(arr[x] !='\0')
	x++;
		
	cout << "\n The reversed array is \n";
	
	for(int j = x - 1; j >= 0 ; j--)
	{
		cout << arr[j];
	}
	
	cout<< "\nThe size of your array is: \n"<< x;
	
	getch();
	return 0;
}
