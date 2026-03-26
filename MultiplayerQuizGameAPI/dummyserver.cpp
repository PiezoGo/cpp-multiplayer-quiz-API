#include <iostream>
#include "httplib.h"

using namespace std;

int main(){
    httplib::Server srv;

    srv.Get("/", [](const httplib::Request& req, httplib::Response& res){
        res.set_content("Response from quiz server!!!\n", "text/plain");
    } );

    cout<<"Listenning!!!";
    srv.listen("localhost", 8080);
    cout<<"Listenning!!!";
    if(srv.listen("0.0.0.0", 8080)){
        cout<<"Connected Successfully!!!";
    } 
    // if (!srv.listen("0.0.0.0", 8080)) {   // Use "0.0.0.0" instead of "localhost"
    //     cout << "Failed to start server!\n";
    //     return 1;
    // }
    return 0;
}