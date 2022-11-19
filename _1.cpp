#include <vector>
#include <fstream>
#include <cmath>
#include <iostream>
using namespace std;

#include "functions.h"

int main()
{
	vector<string>vec;
	string s;
	while (cin >> s)
		vec.push_back(s);
	print(&vec);
	swap(&vec);
	out(&vec);
}


