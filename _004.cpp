#include "lib.h"

void print(vector<int>*);
void scan(vector<int>*);
void output(vector<int>*);


int main() {
	vector<int>vec;
	int n,ornishna_jami = 0, samnishna_raodenoba=0;
	while (cin >> n)
		vec.push_back(n);
	print(&vec);
	scan(&vec);
}

void print(vector<int>* v) {
	for (int n : *v)
		cout << n << " ";
	cout << endl;
}

void scan(vector<int>* v) {
	int n_count = 0;
	vector<int>vec;
	
	for (int n :* v) {
		if (n >= 10 && n <= 99) {
			n_count+=n;
		} 
		else if (n >= 100 && n <= 999 && n/100==(n/10)%10) {
			vec.push_back(n);
		}
	}

	cout << "\nornishnebis jami_" << n_count
		<< "\niseti samnishnebis raodenoba_" << vec.size()<<endl;

	output(&vec);
}

void output(vector<int>* v) {
	print(v);
	int sum{};
	for (int n : *v)sum += n;
	cout << "\nsamnishnebis raodenoba_" << v->size()
		<< "\nsamnishnebis jami_" << sum;
}