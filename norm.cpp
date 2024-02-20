#include <iostream>
using namespace std;
#define ROW 10
#define COL 10
int main()
{
        int array[ROW][COL], norm[COL] = {0};
        int i, j, row, col, max;
        cout<<"Enter the number of rows:";
        cin>>row;
        cout<<"Enter the number of columns:";
        cin>>col;
        cout<<"Enter the entries for input matrix:";
        for (i = 0; i < row; i++) 
        {
                for (j = 0; j < col; j++) {
                        cin>>array[i][j];
                }
        }
        for (i = 0; i < col; i++) 
        {
                for (j = 0; j < row; j++) {
                        norm[i] = norm[i] + array[j][i];
                }
        }

        max = norm[0];
        for (i = 0; i < col; i++) {
                if (max < norm[i]) {
                        max = norm[i];
                }
        }
        cout<<"Norm of the given matrix is:"<<max;
        return 0;
  }