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
	int t;
	cin >> t;
	int left = 0;
	int sum = 0;
	int best = 0;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		while (sum > t)
		{
			sum -= arr[left];
			left++;
		}
		best = max(best, i - left + 1);
	}
	cout << best;
}