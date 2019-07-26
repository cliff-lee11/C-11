#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iterator>
using namespace std;


int main() {
    
    int cnt ; 
    string tmp;
    std::getline(cin, tmp);

    cnt = atoi(tmp.c_str());

    string data= ""; 
    std::getline(cin,data);

    istringstream iss(data);
    vector<int> vData((istream_iterator<int>(iss)),istream_iterator<int>());

    sort(vData.begin(), vData.end());

    for(auto i:vData)
        cout << i << ' '; 

    cout << endl ; 
    


    return 0;
}
