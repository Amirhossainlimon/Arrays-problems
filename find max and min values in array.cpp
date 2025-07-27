#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n,x,y;
    int maxno=INT_MIN,minno=INT_MAX;
 cin>>n;
 int array[n];
 for(int i=0;i<n;i++){
     cin>>array[i];
 }
 for(int i=0;i<n;i++){
    maxno= max(maxno,array[i]);
    if(maxno==array[i]){
        x=i;
    }
    minno= min(minno,array[i]);
   if(minno==array[i]){
        y=i;
    }
 }
 cout<<"Max number is "<<maxno<<" & index number is "<<x<<endl;

 cout<<"Min number is "<<minno<<" & index number is "<<y<<endl;
    return 0;
}
