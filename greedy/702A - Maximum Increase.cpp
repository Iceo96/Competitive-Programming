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
	int count = 1;
	int best = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			count++;
			best = max(best, count);
		}
		else
		{
			count = 1;
		}
		
	}
	cout << best;
}