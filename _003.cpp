#include "functions3.h"

int main()
{
    vector<string>vec;
    string s; short m;
    
    fstream inn("words.txt");
    for(size_t a{};a<33;++a){
        inn>>s;
        vec.push_back(s);
    }
        
    print(&vec);
    scan(&vec,m);
    
}
