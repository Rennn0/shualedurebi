////////////////////////////////////////////////
#include <vector>
#include <fstream>
#include <cmath>
#include <iostream>
using namespace std;


string pirveli, meore;

void print(vector<string>* v) {
	for (string s : *v)
		cout << s << " ";
	cout << endl;
}

void swap(vector<string>* v) {
	
	for (size_t i{}; i < v->size(); ++i) {
		if (v->at(i).size() < 10) {
			pirveli = v->at(i);
			meore =v->at(v->size() - 4);
			iter_swap(v->begin() + i, v->end() - 4);
			break;
		}			
	}
	cout << "pirveli _ " << pirveli<<"; sigrdze _ " << pirveli.length();
	cout << "\nmeore _ " << meore<<"; sigrdze _ "<<meore.length();
	cout << "\nafter swap _ \n"; 
	print(v);
	
}

void out(vector<string>* v) {
	fstream out("out.txt");
	for (size_t i{}; i < v->size(); ++i) {
		out << v->at(i)<<" ";
	}
	out << endl << pirveli << " pirveli wevri\n" << meore << " meore wevri";
}

//////////////////////////////////////////////////

