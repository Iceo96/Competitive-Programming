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
	int k;
	cin >> n;
	cin >> k;
	string s;
	cin >> s;
	int ans = 0;
	int left = 0;
	int diff = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i]!='a')
		{
			diff++;
		}
		while (diff > k)
		{
			if (s[left] != 'a')
			{
				diff--;
			}
			left++;
		}
		ans = max(ans, i - left + 1);
	}
	left = 0;
	diff = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] !='b')
		{
			diff++;
		}
		while (diff>k)
		{
			if (s[left]!='b')
			{
				diff--;
			}
			left++;
		}
		ans = max(ans, i - left + 1);
	}
	cout << ans;
}