#include <iostream>
#include "httplib.h"
using namespace std;

int main(){
    cout<<"Welcome to this Multiplayer Quiz game";
    httplib::Client cli("http://example.com");
    //Simple GET request!!
    auto result = cli.Get("/");
    if(auto result = cli.Get("/")){
        cout<<"The GET request was a success!!";
    }else{
        cout<<"FAILURE!!!!!!!!!!!";
    }
    return 0;
}