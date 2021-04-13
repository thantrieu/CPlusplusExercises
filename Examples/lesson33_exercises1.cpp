/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.04
*/

#include <iostream>

using namespace std;
#define M 100
#define N 100

void getMatrixElements(int matrix[][N], int& m, int& n);
void showMatrixElements(int matrix[][N], int m, int n);

int main()
{
    int matrix[M][N];
    int m, n;
    getMatrixElements(matrix, m, n);
    if (m > 0 && n > 0) {
        // cout << "Ma tran ban vua nhap: ";
        cout << endl;
        showMatrixElements(matrix, m, n);
    }
    else {
        cout << "ERROR" << endl;
    }
    return 0;
}

void getMatrixElements(int matrix[][N], int& m, int& n) {
    cin >> m >> n;
    if (m > 0 && n > 0) {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }
}

void showMatrixElements(int matrix[][N], int m, int n) {
    cout << m << " " << n << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}