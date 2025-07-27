#include <iostream>
using namespace std;

int main() {
    int rowA, colA, rowB, colB;
    cin >> rowA >> colA >> rowB >> colB;
    if (colA != rowB) return 0;

    int A[rowA][colA], B[rowB][colB], C[rowA][colB];

    for(int i=0; i<rowA; i++)
        for(int j=0; j<colA; j++)
            cin >> A[i][j];

    for(int i=0; i<rowB; i++)
        for(int j=0; j<colB; j++)
            cin >> B[i][j];

    for(int i=0; i<rowA; i++)
        for(int j=0; j<colB; j++)
            C[i][j] = 0;

    for(int i=0; i<rowA; i++)
        for(int j=0; j<colB; j++)
            for(int k=0; k<colA; k++)
                C[i][j] += A[i][k] * B[k][j];
   cout<<"New matrix:"<<endl;
    for(int i=0; i<rowA; i++) {
        for(int j=0; j<colB; j++)
            cout << C[i][j] << " ";
        cout << endl;

    }
    return 0;
}

