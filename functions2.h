#include "lib.h"

void print(vector<string>* v) {
	for (string s : *v)
		cout << s << " ";
	cout << endl;
}
void out(vector<string>&s) {
	fstream	outt("output.txt");
	for (short a{}; a < s.size(); ++a) {
		outt << "\nwevri #" << a << " " << s[a] << "\tsigrdze_" << s[a].length();
	}
	outt << "\nsul raodenoba :: " << s.size();
}

void raod(vector<string>* v,short *n) {
	vector<string>tempor;
	for (string s : *v) {
		if (s[0] == s[s.size() - 1]) {
			++*n;
			tempor.push_back(s);
		}
	}	
	cout << "\nagmochenilia " << *n << " obieqti\n\n";
	out(tempor);
}

