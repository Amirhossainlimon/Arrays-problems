#include<iostream>
#include <climits>
using namespace std;
int  main(){
    int x,y;
    cout<<"Enter row"<<endl;
    cin>>x;
    cout<<"Enter columns"<<endl;
    cin>>y;
int matrix[x][y];
cout<<"Enter the values of a 2D array:"<<endl;
// For input
 for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin>> matrix[i][j];
        }
    }

int maxsum=INT_MIN;
    for (int i = 0; i < x; i++) {
        int maxsumi=0;
        for (int j = 0; j < y; j++) {
           maxsumi+=matrix[i][j];
            }
            maxsum=max(maxsum,maxsumi);
        }


   cout<<"Max row sum : "<<maxsum<<endl;


return 0;
}
