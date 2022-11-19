#include "functions2.h"

int main()
{
	fstream  inn("sityvebi.txt");
	vector<string>vec;
	string s;
	while (inn >> s)
		vec.push_back(s);
	print(&vec);

	short raodenoba=0;
	raod(&vec, &raodenoba);
				
}