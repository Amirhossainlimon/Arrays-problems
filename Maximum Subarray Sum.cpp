#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int maxsum=INT_MIN;

 for(int st=0; st<5;st++){
        int cursum=0;
    for(int end=st;end<5;end++){
       cursum +=arr[end];
       maxsum=max(cursum,maxsum);
    }

 }

   cout<<"The max sum is "<<maxsum<<endl;


return 0;
}
