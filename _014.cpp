#include "lib.h"

void gen(void);
void show(void);

int main(){
    show();
}

void gen(void){
    ofstream out("smash.txt");
    int n;

    srand(time(0));
    for(char a{};a<2;++a){
        n=rand()%91+10;
        out<<n<<" ";
    }
}

void show(void){
    gen();
    ifstream inn("smash.txt");
    vector<int>vec;
    int n;
    while(inn>>n) vec.push_back(n);

    cout<<vec[0]<<" "<<vec[1]<<endl;
    
    if(vec[0]<vec[1]){
        cout<<7*10+vec[1]%10<<endl;

        cout<<vec[1]/10*10+7<<endl;
    } else{
        cout<<7*10+vec[0]%10<<endl;

        cout<<vec[0]/10*10+7<<endl;
    }
}