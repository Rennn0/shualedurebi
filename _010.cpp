#include "lib.h"

void fill(vector<double>*);
void transfer(vector<double>*,vector<double>*);
void finish(vector<double>&, double &);

int main(){
    vector<double> vec_rand, vec_4;
    double arit{};
    
    fill(&vec_rand);
    transfer(&vec_rand,&vec_4);
    finish(vec_4,arit);    
}

void fill(vector<double>*v){
    srand(time(0));
    long a;
    for(size_t i{};i<10;++i){
        a=rand()%91001+10000;
        v->push_back(a);
    }
}

void transfer(vector<double>*v1,vector<double>*v2){
    for(auto v:*v1){
        v2->push_back(pow(v,4));
    }
}

void finish(vector<double>&v, double &d){
    for(auto a:v)
        d+=a;
    d/=1.*v.size();
    cout<<"sashualo aritmetikulia_"<<d;
}