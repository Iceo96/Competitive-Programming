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
#define ll long long;
using namespace std;
int x = 1e9;
int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	
	if (k ==0)
	{
		if (arr[0] == 1)
		{
			cout << -1;
		}
		else
		{
			cout << 1;
		}
	}
	else
	{
		int x = arr[k - 1];
		if (k < n && arr[k] == x)
		{
			cout << -1;
		}
		else
		{
			cout << x;
		}
	}
	
	
}