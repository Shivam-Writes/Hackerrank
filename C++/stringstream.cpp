#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> integer;
    stringstream ss(str);
    char c;
    int i;
    while (ss >> i) {
    integer.push_back(i);
    ss>>c;
    }
    return integer;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}