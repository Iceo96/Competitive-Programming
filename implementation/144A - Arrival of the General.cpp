#include <vector>
#include <iostream>
#include<string>
#include<stack>
#include<vector>
#include <algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int maxOne = 0;
	int minOne = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]>arr[maxOne])
		{
			maxOne = i;
		}
		if (arr[i]<= arr[minOne])
		{
			minOne = i;
		}
	}
	int res = maxOne + (n - 1 - minOne);
	if (maxOne > minOne)
	{
		res--;
	}
	cout << res;
	
}