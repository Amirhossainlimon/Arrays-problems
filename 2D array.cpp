#include<iostream>
using namespace std;
int  main(){
    /*
 int matrix[4][3]={{1,2,3},
                   {2,3,4},
                   {3,4,5},
                   {4,5,6}
                   };*/



  // Declare a 4x3 matrix (4 rows, 3 columns)
int matrix[4][3];
cout<<"Enter the values of a 2D array:"<<endl;
// For input
 for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cin>> matrix[i][j];
        }
    }

    cout<<"This is the 2D array of given values:"<<endl;
// Print the output
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


return 0;
}
