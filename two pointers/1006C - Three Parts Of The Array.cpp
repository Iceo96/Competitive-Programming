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
	vector<long long> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int left = 0;
	int right = n - 1;
	long long sumA = 0;
	long long sumB = 0;
	long long ans = 0;
	while (left<= right)
	{
		if (sumA<=sumB)
		{
			sumA += arr[left];
			left++;
		}
		else {
			sumB += arr[right];
			right--;
		}
		 if (sumA == sumB) {
			ans = sumA;
		}
	}
	cout << ans;
}