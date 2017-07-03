#include <iostream>
using namespace std;

int factorial(int x)
{
	int y = 1;
	int z = x;
	
	while(z > y)
	{
		x = x * y;
		y++;
	}
	
	if(z == 0)
	{
		x = 1;
	}	
	
	return x;
}

int main()
{
	
	int n;
	cin >> n;
	
	int row = 0;
	
	while(row <= n-1)
	{
		int col = 0;
		
		for(int i = 2; i <= n - row; i++)
		{
			cout << " ";
		}
		
		while(col <= row)
		{
			cout << factorial(row)/(factorial(col)*factorial(row-col)) << " ";
			col++;
		}	
		
		cout << endl;
		row++;
	}	
}

