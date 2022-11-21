#include "lib.h"

random_device rnd;
default_random_engine gen(rnd());
uniform_int_distribution <int> distr(-17,44);

void generate(vector<int>*);
void timer(void);
void print(vector<int>*);

int main(){
    vector<int>vec;
    generate(&vec);
    print(&vec);
}

void timer(void){
    time_t dro; time(&dro);
    struct tm *ptr=localtime(&dro);
    cout<<ptr->tm_min<<"_min"<<endl;
}

void generate(vector<int>*v){
    timer();
    srand(time(0));
    for(size_t a{};a<10;++a)
        v->push_back(distr(gen));    
}

void print(vector<int>*v){
    for(int n:*v){
        if(n>=0){
            cout<<n<<'\t'<<&n<<'\t'<<sizeof(n)<<'\t'<<sqrt(n)<<endl;
        }
        else{
            cout<<n<<'\t'<<&n<<'\t'<<sizeof(n)<<'\t'<<abs(n)<<endl;
        }
    }   
}