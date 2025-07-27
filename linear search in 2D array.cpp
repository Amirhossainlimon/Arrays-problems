#include<iostream>
using namespace std;
int  main(){
    int key=8,x=0;
int matrix[4][3];
cout<<"Enter the values of a 2D array:"<<endl;
// For input
 for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cin>> matrix[i][j];
        }
    }
// Print the output
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if(matrix[i][j]==key){
                x++;
  cout << "Key is here at row " << i << " and column " << j << endl;
                break;
            }
        }
    }
    if(x==0){
     cout<<"Key is not here"<<endl;
    }



return 0;
}
