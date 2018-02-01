#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
   vector<int> list;
   stringstream ss(str);
   int temp;
   char ch;
   while(ss>>temp){
    list.push_back(temp);
    ss>>ch;
   }
   return list;
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
