#include "lib.h"

void fill(vector<int>*);
void print(vector<int> *);


int main(){
    vector<int>vec;
    fill(&vec);
}

void fill(vector<int>*v){
    srand(time(0));
    int n;
    for(size_t a{};a<10;++a){
        n=rand()%21-10;
        v->push_back(n);
    }
    print(v);   
}

void print(vector<int> *v){
    for(auto a:*v)
        cout<<a<<'_'<<pow(a,3)<<'_'<<abs(a)<<'_'
        <<sqrt(abs(a))<<endl;
}

