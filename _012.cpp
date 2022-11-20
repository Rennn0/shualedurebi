#include "lib.h"

void check(int &);
void reVerse(int &);

int main(){
    int n;
    cin>>n;
    check(n);
}

void check(int &i){
    ofstream out("sample.txt");
    if(i>=100&&i<=999){
        reVerse(i);
        out<<i;
    } else{
        out<<"araa samnishna";
    }
    
}

void reVerse(int &i){
    int tmp=0;
    while(i>0){
        tmp=tmp*10+i%10;
        i/=10;
    }
    i=tmp;
}