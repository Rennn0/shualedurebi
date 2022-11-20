#include "lib.h"


int jami(vector<int>&);
double geometriuli(vector<int>&);
void gadatana(void);
void gadmotana(vector<int>*);
void shetana(vector<int> *);
void shedareba(int&,double &);

int main(){
    vector<int>vec_rand,vec_file;
    
    gadatana();
    gadmotana(&vec_file);
    shetana(&vec_rand);

    int sum=jami(vec_rand);
    double geom=geometriuli(vec_file);
    cout<<sum<<endl<<geom<<endl;
    shedareba(sum,geom);
}

void gadatana(void){
    ofstream out("data.txt");
    srand(time(0));
    int n;
    for(size_t a{};a<20;++a){
        n=rand();
        out<<n<<" ";
    }

}

void shetana(vector<int> *v){
    int n;
    for(size_t a{};a<35;++a){
        n=rand()%86-43;
        v->push_back(n);
    }
}

void gadmotana(vector<int>*v){
    ifstream inn("data.txt");
    int n;
    while(inn>>n)
        v->push_back(n);
}

int jami(vector<int>&v){
    int sum=0;
    for(size_t a{};a<v.size();++a)
        if(v[a]<0)
        sum+=abs(v[a]);
    return sum;
}

double geometriuli(vector<int>&v){
    double geom=1;
    for(size_t a{};a<v.size();++a)
        geom*=v[a];
    
    return pow(geom,1./v.size());
}

void shedareba(int &n,double &d){
    if(n>d){
        cout<<"jami metia\n";
    } else if(n<d){
        cout<<"geometriuli metia\n";
    } else{
        cout<<"tolia\n";
    }
}