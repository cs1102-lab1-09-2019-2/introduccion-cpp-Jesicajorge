#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> v{{1, 2}, {3, 4}, {5, 6}};
    for (auto a=0;a<=3;a++) {
        for (auto i =1;i<=a;i++){
            cout<<i;
            // imprimir i
        }
        cout<<endl;// salto de linea
    }
    return 0;
}


