#include <iostream>
using namespace std;

int main() 
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows for the first matrix: ";
    cin >> rows1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> cols1;
    cout << "Enter the number of rows for the second matrix: ";
    cin >> rows2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> cols2;

    if (cols1 != rows2) 
    {
        cout << "Error: The number of columns in the first matrix must match the number of rows in the second matrix." << endl;
        return 0;
    }

    int a[rows1][cols1], b[rows2][cols2];
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols1; j++) 
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            cin >> b[i][j];
        }
    }

    int result[rows1][cols2];
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Result:" << endl;
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
