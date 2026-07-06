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
	int k;
	cin >> k;
	vector<int> arr(n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < k; i++)
	{
		sum += arr[i];
	}
	int min_sum = sum;
	int answer = 1;
	for (int i = k; i < arr.size(); i++)
	{
		sum -= arr[i - k];
		sum += arr[i];
		if (sum< min_sum)
		{
			min_sum = sum;
			answer = i - k + 2;
		}
	}
	cout << answer;
}