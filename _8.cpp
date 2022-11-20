#include "lib.h"

void print(vector<char> *);
void scan(vector<char> *);

int main(){
    vector<char>vec;
    char c;
    for(size_t a{};a<10;++a){
        cin>>c;
        vec.push_back(c);
    }
    print(&vec);
    scan(&vec);
}


void print(vector<char> *v){
    for(char c:*v)
        cout<<c<<" ";
    cout<<endl;
}
void scan(vector<char> *v){
    short n=0;
    ofstream out("pasuxi.txt");
    
    for(size_t a{}; a<v->size();++a){
        if(v->at(a)<'A' || v->at(a)>'z'){
            out<<v->at(a)<<"\n";
            ++n;
        }
    } 
    out<<"\nsul napovnia "<<n<<" wevri \n";
}