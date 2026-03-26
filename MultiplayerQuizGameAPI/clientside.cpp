#include <iostream>
#include "httplib.h"
using namespace std;

int main(){
    cout<<"Welcome to this Multiplayer Quiz game\n";
    httplib::Client cli("localhost", 8080);
    //Simple GET request!!
    auto result = cli.Get("/");
    if(auto result = cli.Get("/")){
        cout<<"The GET request was a success!!\n";
    }else{
        cout<<"FAILURE!!!!!!!!!!!\n";
    }
    return 0;
}