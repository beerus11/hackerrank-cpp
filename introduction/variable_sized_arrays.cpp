#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int ** seq = new int* [n];
    for(int i=0;i<n;i++){
        int k;
        cin >>k;
        seq[i] = new int[k];
        for(int j=0;j<k;j++){
            cin>>seq[i][j];
        }
    }
    int a,b;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        cout << seq[a][b];
    }
    return 0;
}