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
int main() {
	int n;
	cin >> n;
	while (n--)
	{
		int t;
		cin >> t;
		int count = 1;
		vector<int> arr(t);
		for (int i = 0; i < t; i++)
		{
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		for (int i = 0; i < t; i++)
		{
			if (arr[i]<=i + 1)
			{
				count=i+2;
			}
		}
		cout << count<<endl;
	}
	
	
}