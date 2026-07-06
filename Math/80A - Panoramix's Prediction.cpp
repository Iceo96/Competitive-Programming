#include <vector>
#include <iostream>
#include<string>
#include<stack>
#include<vector>
#include <algorithm>
#include<map>
#include<unordered_map>
using namespace std;
bool isPrime(int n) {
	if (n <= 1)
		return false;

	
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) {
			return false;
		}
		
	}
	return true;
	
}
int main() {
	int n, m;
	cin >> n >> m;
	int nextprime = n + 1;
	while (!isPrime(nextprime))
	{
		nextprime++;
	}
	if (nextprime == m)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	

}