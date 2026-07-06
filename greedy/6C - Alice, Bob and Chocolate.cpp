#include <vector>
#include <iostream>
#include<string>
#include<stack>
#include<vector>
#include <algorithm>
#include<map>
#include<unordered_map>
#include <unordered_map>
#include <iomanip>
#include<array>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int sumA = 0;
	int sumB = 0;
	int sn = 0;
	int sn2 = 0;
	int j = n - 1;
	int i =0;
	while (i<=j)
	{
		if (sumA <= sumB)
		{
			sumA += arr[i];
			i++;
			sn++;
			
		}
		else
		{
			sumB += arr[j];
			j--;
			sn2++;

			
		}
	}
		
	
	cout << sn << " " << sn2;
}