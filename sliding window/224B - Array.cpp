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
#include<set>
#include<numeric>
#define ll long long;
using namespace std;

int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;
	map<int, int>freq;
	int dis = 0;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int left = 0;
	int right = 0;
	while (right < n)
	{
		if (freq[arr[right]] == 0)
		{
			dis++;
		}
		freq[arr[right]]++;
		if (dis == k)
		{
			break;
		}
		right++;
	}
	if (dis<k)
	{
		cout << -1 << " " << -1;
		return 0;
	}
	while (freq[arr[left]] > 1)
	{
		freq[arr[left]]--;
		left++;
	}
	cout << left + 1 << " " << right + 1;
}