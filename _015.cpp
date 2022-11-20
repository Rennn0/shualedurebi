#include "lib.h"
 
void gen(void);
void output(void);

int main(){
    gen();
    output();
}


void gen(void){
    ofstream out("data.in");
    int n;

    srand(time(0));
    for(char a{};a<15;++a){
        n=rand()%900+100;
        out<<n<<" ";
    }
    
}

void output(void){
    ifstream inn("data.in"); ofstream out("product.out");
    int n, i=1;
    while(inn>>n){
        if(n%2==1){
            while(n>1){
                if((n%10)%2==0){
                    i*=n%10;
                }
                n/=10;
            }
            if(i==1)
                out<<0<<" ";
            else
            out<<i<<" ";
            i=1;
        }
        else{
            out<<n<<" ";
        }
        
    }
}