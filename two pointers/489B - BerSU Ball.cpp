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
	sort(arr.begin(), arr.end());
	int t;
	cin >> t;
	vector<int> arr2(t);
	for (int i = 0; i < t; i++)
	{
		cin >> arr2[i];
	}
	sort(arr2.begin(), arr2.end());
	int i = 0;
	int i2 = 0;
	int count = 0;
	while (i<n && i2<t)
	{
		if (abs(arr[i] - arr2[i2]) <= 1)
		{
			count++;
			i++;
			i2++;
		}
		else if (arr[i] < arr2[i2]) {
			i++;
		}
		else {
			i2++;
		}
		
	}
	cout << count;
}