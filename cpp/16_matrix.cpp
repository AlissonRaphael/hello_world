#include <iostream>

using namespace std;

int main()
{
  int rows, cols;

  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of cols: ";
  cin >> cols;

  int matrix[rows][cols];

  for (int row = 0; row < rows; row++)
  {
    for (int col = 0; col < cols; col++)
    {
      cout << "Row " << row + 1 << " - Col " << col + 1 << " : ";
      cin >> matrix[row][col];
    }
  }

  for (int i = 0; i < rows; i++)
  {
    cout << "| ";

    for (int j = 0; j < cols; j++)
    {
      cout << matrix[i][j] << " ";
    }

    cout << "|" << endl;
  }

  return 0;
}
