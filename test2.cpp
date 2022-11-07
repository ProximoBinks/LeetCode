#include <iostream>
using namespace std;

void create_2darray(int ** &a, int rows, int cols){
    a=new int*[rows];
    for(int i=0;i<rows;i++){
        a[i]=new int [cols];
    }
}

int main(){
    int** p;
    create_2darray(p, 5,2);
    for (int i=0;i<5;i++){
        for (int j=0;j<2;j++){
            cout <<p[i][j] << " ";
        }
        cout<< "\n";
    }
    return 0;
}