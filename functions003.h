#include "lib.cpp"

void print(vector<string> *v){
    for(string s:*v)
        cout<<s<<" ";
    cout<<endl;
}

void v_out(vector<string>&v){
    fstream out("answer.txt");
    for(string s:v)
        out<<s<<" ";
    out<<"\n\nsul raodenoba_"<<v.size();
}

void scan(vector<string>*v, short &n){
    char z=3;
    vector<string>temporary;
    for(size_t a{};a<v->size();++a){
        for(size_t b{};b<(*v)[a].size();++b){
            if((*v)[a][b]=='i')
                --z;
        }
        if(z==0){
            temporary.push_back(v->at(a));
            ++n;
        }
        z=3;
    }
    v_out(temporary);
    cout<<"\nfound "<<n<<" such word.\n"
        "MY JOB HERE IS DONE!\n\n";
}