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
	set<char> all;
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		all.insert(s[i]);
	}
	int nee = all.size();
	map<char, int>freq;
	int left = 0;
	int have = 0;
	int ans = n;
	for (int i = 0; i < n; i++)
	{
		freq[s[i]]++;
		if (freq[s[i]]==1)
		{
			have++;
		}
		while (have == nee)
		{
			ans = min(ans, i - left + 1);
			freq[s[left]]--;
			if (freq[s[left]]== 0)
			{
				have--;
			}
			left++;
		}
	}
	cout << ans;
}