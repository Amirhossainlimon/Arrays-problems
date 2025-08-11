#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 int x[]={1,2,3,4,5,6};
    int a=sizeof(x)/sizeof(x[0]);
    reverse(x,x+a);//reverse syntax for array
    cout<<"Reverse of x[]={1,2,3,4,5,6} is:"<<endl;
    for (int i = 0; i < a; i++) {
        cout << x[i] << " ";
    }

return 0;
}
