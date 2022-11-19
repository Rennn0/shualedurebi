#include "lib.h"

void print(vector<int>&);
void swap(vector<int>&);

int main() {
	fstream inn("numbers.txt");
	vector<int>vec;
	int n;
	while (inn >> n) vec.push_back(n);
	print(vec);
	swap(vec);
}

void print(vector<int>& v) {
	for (int n : v)cout << n << "~";
	cout << endl;
}

void swap(vector<int>& v) {
	vector<int>* ptr = &v;
	for (size_t n{}; n < v.size();++n) {
		if (v[n] % 4 == 0) {
			swap(ptr->at(n), ptr->at(v.size()/2));
			break;
		}
	}
	cout << "\nafter swap :: \n\n";
	print(v);
}