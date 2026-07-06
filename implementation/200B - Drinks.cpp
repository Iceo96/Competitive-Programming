#include <vector>
#include <iostream>
#include<string>
#include<stack>
#include<vector>
#include <algorithm>
#include<map>
#include<unordered_map>
using namespace std;
int fn(int n) {
	if (n==0)
	{
		return 1;
	}
	else {
		return fn(n - 1)* n;
	}
}
int main() {
	int n;
	cin >> n;
	
	double res = 0;
	for (int i = 0; i < n; i++)
	{
		double x;
		cin >> x;
		res += x;
	}
	res = res / n;
	cout << res;
}