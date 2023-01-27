#include "c-count.h"
#include <iostream>
using namespace std;
int main() {
    if(count("") != 0){
        cout<<"Empty String Failure"<<endl;
    }

    if(count("hello world") != 2 ){
        cout<<"Hello World Failure"<<endl;
    }

    if(count("   this   string has     weird   spacing") != 5){
        cout<<"Many Spaces Failure"<<endl;
    }
    return 0;
}