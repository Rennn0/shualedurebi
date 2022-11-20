#include "lib.h"

void print(vector<char> *);
void input(vector<char> *,vector<char> *);
void renew(vector<char> *,vector<char> *);


int main(){
    vector<char>vec, new_vec;
    input(&vec,&new_vec);
}

void print(vector<char> *v){
    for(char c:*v)
        cout<<c<<" ";
    cout<<endl;
}
void input(vector<char> *v,vector<char> *nv){
    ifstream inn("data.txt");
    char c;
    while(inn>>c)
        v->push_back(c);
    
    print(v);
    renew(v,nv);
}
void renew(vector<char> *v,vector<char> *nv){
    for(char c:*v){
        if(c>='a' && c<='z')
            nv->push_back(c);
    }
    cout<<"new vector :: \n";
    print(nv);
    
    sort(v->begin(),v->end());
    sort(nv->begin(),nv->end());
    
    cout<<"after sorting ::\n";
    print(v); print(nv);
}