#include <vector>
#include <iostream>
#include<string>
#include<stack>
#include<vector>
#include <algorithm>
#include<map>
#include<unordered_map>
using namespace std;
int fn(int n){
	if (n < 0)
	{
		int removelastone = n / 10;
		int removebeforelastone = (n / 100) * 10 + (n % 10);
		return max(removelastone, removebeforelastone);
	}
	else
	{
		return n;
	}
}

int main() {
	int n;
	cin >> n;
	cout << fn(n);
}