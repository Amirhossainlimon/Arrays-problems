// "Ei code er kaj holo array er pasha pasi 2ta index er value compare kore seta update kora"

#include<iostream>
using namespace std;

int main(){
int a, mx=INT_MIN;
 cin>>a;
int n[a];

 for(int i=0;i<a;i++){

    cin>>n[i];
 }

 for(int i=0;i<a;i++){

     mx= max(mx,n[i]);
     cout<<mx<<endl;
 }


return 0;
}
