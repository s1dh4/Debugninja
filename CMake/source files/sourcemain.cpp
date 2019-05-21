// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"

using namespace std;

int main()
{
	int n, i;
	cin >> n;
	vector<int>v(n); 
	for (i = 0; i < n; i++) {
		cin >> v[i];
	}
	cout << TotalBill(v);
}

