/*
Rotate Matrix Elements
Given a matrix, clockwise rotate elements in it.
Input
1    2    3
4    5    6
7    8    9
Output:
4    1    2
7    5    3
8    9    6
For 4*4 matrix
Input:
1    2    3    4    
5    6    7    8
9    10   11   12
13   14   15   16
Output:
5    1    2    3
9    10   6    4
13   11   7    8
14   15   16   12
*/

#include <iostream>
#define R 4
#define C 4
using namespace std;

void rotatematrix(int m, int n, int mat[R][C])
{
	int row = 0, col = 0;
	int prev, curr;

	/*
	row - Staring row index
	m - ending row index
	col - starting column index
	n - ending column index
	*/
	while (row < m && col < n)
	{

		if (row + 1 == m || col + 1 == n)
			break;

		prev = mat[row + 1][col];
        
        /* Move elements of first row from the remaining rows */
		for (int i = col; i < n; i++)
		{
			curr = mat[row][i];
			mat[row][i] = prev;
			prev = curr;
		}
		row++;

        /* Move elements of last column from the remaining columns */
		for (int i = row; i < m; i++)
		{
			curr = mat[i][n-1];
			mat[i][n-1] = prev;
			prev = curr;
		}
		n--;

        /* Move elements of last row from the remaining rows */
		if (row < m)
		{
			for (int i = n-1; i >= col; i--)
			{
				curr = mat[m-1][i];
				mat[m-1][i] = prev;
				prev = curr;
			}
		}
		m--;

        /* Move elements of first column from the remaining rows */
		if (col < n)
		{
			for (int i = m-1; i >= row; i--)
			{
				curr = mat[i][col];
				mat[i][col] = prev;
				prev = curr;
			}
		}
		col++;
	}

	// Print rotated matrix
	for (int i=0; i<R; i++)
	{
		for (int j=0; j<C; j++)
		cout << mat[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int a[R][C] = { {1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16} };
		
	rotatematrix(R, C, a);
	return 0;
}