#include <vector>
#include <iostream>
#include<string>
#include<stack>
#include<vector>
#include <algorithm>
#include<map>
#include<unordered_map>
using namespace std;
void fn(int lights[3][3], int press[3][3]) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (press[i][j] % 2 == 1)
			{
				lights[i][j] = 1 - lights[i][j];
				if (i - 1 >= 0)
				{
					lights[i - 1][j] = 1 - lights[i - 1][j];
				}
				if (i + 1 < 3)
				{
					lights[i + 1][j] = 1 - lights[i + 1][j];
				}
				if (j - 1 >= 0)
				{
					lights[i][j - 1] = 1 - lights[i][j - 1];
				}
				if (j + 1 < 3)
				{
					lights[i][j + 1] = 1 - lights[i][j + 1];
				}
			}
		}
	}
}
int main() {
	int lights[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			lights[i][j] = 1;
		}
	}
	int press[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> press[i][j];
		}
	}
	fn(lights, press);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << lights[i][j];
		}
		cout << endl;
	}

}