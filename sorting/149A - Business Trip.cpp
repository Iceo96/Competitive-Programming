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
	
	vector<int> arr(12);
	for (int i = 0; i < arr.size(); i++)
	{
		cin >> arr[i];
	}
	sort(arr.rbegin(), arr.rend());
	int sum = 0;
	int ans = -1;
		if (n == 0)
		{
			ans = 0;
		}
		else
		{
			for (int i = 0; i < 12; i++)
			{
				sum += arr[i];
				if (sum >= n)
				{
					ans = i + 1;
					break;
				}
			}
		}
	
		cout << ans;
}