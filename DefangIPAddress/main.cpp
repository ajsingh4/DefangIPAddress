//
//  main.cpp
//  DefangIPAddress
//
//  Created by Aj Gill on 7/28/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>

//For ease of coding
using namespace std;

string Defang(string IP) {
    string finalIP;
    for(int i=0; i<IP.length(); i++){
        if(IP[i] == '.'){
            finalIP += "[.]";
        }
        else{
            finalIP += IP[i];
        }
    }
    return finalIP;
}

int main() {
    string IP;
    cout << "Please input an IP address\n";
    cin >> IP;
    cout << "\nDefanged IP is " << Defang(IP) << "\n";
}
