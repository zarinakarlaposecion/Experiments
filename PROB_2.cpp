#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
const int x =3, y =7;
char PROVINCE;
    int temperature[x][y];

    cout << "Please input all the temperature for a week of Province A, Province B and Province C. \n";
    for (int i = 0; i < x; ++i)
    {
        for(int j = 0; j < y; ++j)
        {
			if(i + 1 == 1) 
				PROVINCE = 'A'; 
			else if(i + 1 == 2) 
				PROVINCE = 'B';
			else if (i + 1 == 3) 
				PROVINCE ='C';
            cout << "PROVINCE " << PROVINCE << ", DAY " <<j + 1 << " : "; cin >> temperature[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";
 
    for (int i = 0; i < x; ++i)
    {
    	if(i + 1 == 1) 
		PROVINCE = 'A'; 
		else if(i + 1 == 2) 
		PROVINCE = 'B';
		else if (i + 1 == 3) 
		PROVINCE ='C';
        for(int j = 0; j < y; ++j)
        {
            cout << "PROVINCE " << PROVINCE<< ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
		
	getch();
	return 0;
}

