#include "lib.h"

void scan(vector<double> *);
void fill(vector<double> *);
void print(vector<double> *);
void output(double *);

int main(){
    vector<double>vect;
    fill(&vect);
    scan(&vect);
    output(&vect[4]);
}

void fill(vector<double> *v){
    double d;
    for(size_t a{};a<4;++a){
        cin>>d;
        v->push_back(d);
    }
    print(v);
}
void print(vector<double> *v){
    for(auto a:*v)
        cout<<a<<" ";
    cout<<endl;
}
void scan(vector<double> *v){
    short n{};
    for(auto a:*v){
        if(a!=5.75)
            ++n;
    }
    // bolo elementad daemateba
    v->push_back(n);
}
void output(double *t){
    ofstream out("diff.txt");
    out<<*t<<"_ different value";
    out.close();
}
