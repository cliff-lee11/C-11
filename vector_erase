#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <sstream>

using namespace std;


int main() {
    
    int cnt ;

    string tmp; 
    std::getline(cin,tmp);
    cnt = stoi(tmp);

    string data; 
    std::getline(cin,data);

    istringstream iss(data); 
    vector<string> vData((istream_iterator<string>(iss)), istream_iterator<string>());

    int dPos = 0;
    std::getline(cin,tmp);
    dPos = stoi(tmp);

    vData.erase(vData.begin()+dPos-1);


    int dPos1, dPos2 =0;
    scanf("%d %d",&dPos1, &dPos2); 
    vData.erase(vData.begin()+dPos1-1,vData.begin()+dPos2-1);
    

    cout << vData.size() << endl; 

    for (auto i : vData)
        cout << i << " "; 

    cout << endl; 

    
    return 0;
}
