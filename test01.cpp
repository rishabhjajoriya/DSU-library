#include <bits/stdc++.h>
#include"DSU.hpp"
using namespace std;

int main()
{
	
	int n;
	cin >> n;
	DSU myDSU(n);

	 myDSU.Union(2,3);
	cout << myDSU.find(3);

}
