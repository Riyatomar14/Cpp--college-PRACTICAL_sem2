/* display matrix sum , product ,transpose */
/sum of matrix

#include <iostream>
using namespace std;

int main() {
    int R, C;
    cout << "Enter the size of matrix: ";
    cin >> R >> C;

    int m1[10][10], m2[10][10], res[10][10]; 
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> m2[i][j];
        }
    }

    cout << "Sum of the matrices:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/ mutiplication of matrix

#include <iostream>
using namespace std;


int main() {
    int a[3][3],b[3][3],i,j,k,result[3][3]={0};
    cout<<"enter first matrix elements"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter the elements in pocket["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }
    cout<<"second matrix is.."<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter the elements in pocket["<<i<<"]["<<j<<"]";
            cin>>b[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                result[i][j]=result[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    cout<<"Multiplication of two matrix is.."<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/ transpose of matrix

#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int matrix[MAX][MAX], transpose[MAX][MAX];
    int row, col;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> row >> col;
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
