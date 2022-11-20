#include "lib.h"

void generate(void);
void fill(vector<int>&);
void print(vector<int>*);
void kent(int &,vector<int>&);
void diap(int &,vector<int>&);
void finish(vector<int>*);


int main(){
    vector<int>vec;
    fill(vec);
    finish(&vec);
}

void generate(void){
    srand(time(0));
    ofstream  out("input.txt");
    for(size_t a{};a<21;++a)
        out<<rand()%2001-1000<<' ';
}

void fill(vector<int>&v){
    generate();
    ifstream inn("input.txt");
    int n;
    while(inn>>n)
        v.push_back(n);
    print(&v);
}

void print(vector<int>*v){
    for(auto a:*v)
        cout<<a<<" ";
}
void kent(int &i,vector<int>&v){
    for(auto a:v)
        if(a%2==1 || a%2==-1)++i;
}

void diap(int &i,vector<int>&v){
    for(auto a:v)
        if(a>=10 && a<=350)++i;
}

void finish(vector<int>*v){
    int kenti{}, diapazoni{};
    kent(kenti,*v);
    diap(diapazoni,*v);
    cout<<"\nkentebia_ "<<kenti
        <<"\n[10:350]_ "<<diapazoni;
}