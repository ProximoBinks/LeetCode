#include <iostream>
using namespace std;

int main(){
    int rows=2,cols=5;
    int* *a=new int*[rows];

    for(int i=0;i<rows;i++){
        a[i]=new int[cols];
    }
    for(int i=0;i<rows;i++){
        for(int j=0;i<cols;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++){
        delete [] a[i];
    }
    delete [] a;
    return 0;
}