//
//  main.cpp
//  Clase-teoria-martes_29abril
//
//  Created by neftali calixto on 4/29/20.
//  Copyright © 2020 neftali calixto. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void P146(){
    string code;


    while (code != "#"){
        cin>>code;
        if(code!="#"){

            string temp= code;
            string igual = code;
            next_permutation(code.begin(), code.end());
            sort(temp.begin(), temp.end());
            if( temp == code || igual == code)
                cout<<"No  Successor"<<endl;
            else
                cout<<code<<endl;
        }
    }
    
}

int main() {
    
    //P146();
    size_t testcases;
    cin>>testcases;
    while (testcases--) {
        vector<int>posi {3,1,2};
        vector<float>floats {32.0,54.7,2.0};
        vector<float>out;
        for(auto i=begin(posi) ; i!=end(posi) ; ++i){
            out.push_back(floats[*i]);
        }
        for(auto i=begin(out) ; i!=end(out) ; ++i){
            cout<<*i<<endl;
        }

    }

    
    return 0;
}
