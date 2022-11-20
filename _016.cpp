#include "lib.h"

random_device rnd;
default_random_engine gen(rnd());
uniform_real_distribution <double> distr(0,100);

void outfile(void);
void infile(vector<double>*);
void finish(vector<double>*);

int main(){
    vector<double>vec;
    infile(&vec);

}

void outfile(void){
    ofstream out("input.txt");

    for(size_t a{};a<5;++a)
        out<<distr(gen)<<" ";
}

void infile(vector<double>*v){
    outfile();
    ifstream inn("input.txt");
    double d;
    while(inn>>d)
        v->push_back(d);
    finish(v);
}

void finish(vector<double>*v){
    for(double d:*v){
        cout<<d<<'\t'<<sqrt(d)<<'\t'<<(12*d-21)/pow(d,2)<<endl;
    }
}