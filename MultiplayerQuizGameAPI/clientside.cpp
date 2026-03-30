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
        cli.Post("localhost", "This is a querry from the client\n", "text/plain");
    }else{
        cout<<"FAILURE!!!!!!!!!!!\n";

        // I need to create a way for the client and server should communicateQQQ
    }
    return 0;
}