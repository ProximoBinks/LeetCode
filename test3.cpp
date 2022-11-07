#include <iostream>
#include <string>
using namespace std;

int main(){
    //string a[4]={"a","b","c","d"};
    int a[]={3,4,5,5,5,34,4,4,5,6};
    for(int i:a){
        cout<<i<<" ";
    }
    int b=sizeof(a)/sizeof(int);
    cout<<endl;
    cout<<"There are "<<b<<" numbers in the array!"<<endl;
    return 0;
}