#include <iostream>
#include <fstream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
    ofstream out;
    int n, min, max;
    out.open("data.txt");
    srand(time(NULL));
    
    cout << "��Ƶ���:";
    cin >> n;
    // cout << "�U��:";
    // cin >> min;
    // cout << "�W��:";
    // cin >> max;

    out << n << " ";
    // �@�르��
    // for(int i = 0; i < n; i++){
    //     out << rand()%(max-min+1) << " ";
    // }

    // insertion sort�̯Ӯ�
    for(int i = n; i > 0; i--){
        out << i << " ";
    }
    
    out.close();
}