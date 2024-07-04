#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr;
    string b;
    cin>>arr;
    cin>>b;
    cout<<arr.size()<<" "<<b.size()<<endl;
    cout<<arr<<b<<endl;
    char temp;
    temp=arr[0];
    arr[0]=b[0];
    b[0]=temp;
    cout<<arr<<" "<<b;   
    return 0;
}