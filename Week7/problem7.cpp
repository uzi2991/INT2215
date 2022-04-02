int **inputMatrix(int nRows, int nCols)
{
    int **res = new int *[nRows];

    for (int i = 0; i < nRows; ++i)
    {
        res[i] = new int[nCols];
    }

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nCols; ++j)
        {
            cin >> res[i][j];
        }
    }

    return res;
}

void printMatrix(int **matrix, int nRows, int nCols)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nCols; ++j)
        {
            cout << matrix[i][j] << " ";
        }

        cout << "\n";
    }
}