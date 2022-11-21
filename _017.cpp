#include "lib.h"

void generate(void);
void fill_auto(vector<int>*);
void fill_manual(vector<double>*);
void operat(vector<int>*,double*,vector<double>*);


int main(){
    vector<int>mteli;
    vector<double>real;
    double aritmetikuli{};
    generate();
    fill_auto(&mteli);
    fill_manual(&real);
    for(auto v:real)
        cout<<v<<endl;
    operat(&mteli,&aritmetikuli,&real);
}

void generate(void){
    srand(time(0));
    ofstream  out("data.txt");
    for(size_t a{};a<5;++a)
        out<<rand()%101<<' ';
    
}

void fill_manual(vector<double>*v){
    double d;
    for(size_t a{};a<5;++a){
        cin>>d;
        v->push_back(d);
    }
}

void operat(vector<int>*mteli,double *aritmetikuli,vector<double>*real){
    for(int n:*mteli)
        *aritmetikuli+=n;
    *aritmetikuli/=mteli->size();
    cout<<*aritmetikuli<<"_sashualo aritmetikuli\n";
    double max=real->at(0);
    for(double v:*real)
        if(v>max)max=v;
    
    cout<<max<<"_max value";
}

void fill_auto(vector<int>*v){
    fstream inn("data.txt");
        int i;
        while(inn>>i)
            v->push_back(i);
}