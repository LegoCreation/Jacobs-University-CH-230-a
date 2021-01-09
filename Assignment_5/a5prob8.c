void input_mtrx(int **matrix, int m, int n)
{
    for (int i = 0; i < m; i++) //for rows of the matrix
    {
        for (int j = 0; j < n; j++) //for column of the matrix
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
    return;
}
void print_mtrx(int **matrix, int m, int n)
{
    for (int i = 0; i < m; i++) //for rows of the matrix
    {
        for (int j = 0; j < n; j++) //for column of the matrix
        {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n"); //for the enter key after every row
    }
    return;
}
void multiply_mtrx(int **matrix1, int **matrix2, int **prod_matrix, int m,
                   int n, int p)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int total = 0; //assaigning zero as the value of 'total' so that
            //previous value do not affect the new sum
            for (int k = 0; k < n; k++)
            {
                total += (*(*(matrix1 + i) + k)) * *(*(matrix2 + k) + j);
            }
            *(*(prod_matrix + i) + j) = total; //assigning the calculated sum
            //as the value of 'ith' row and 'jth' column element of prod_matrix
        }
    }
    return;
}
int main()
{
    int m, n, p;
    int **matrix1, **matrix2, **prod_matrix;
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);
    matrix1 = (int **)malloc(sizeof(int *) * m);
    //allocating memory for 'matrix1'
    if (matrix1 == NULL)
    {
        printf("Error in allocating memory\n");
        exit(0);
    }
    for (int i = 0; i < m; i++)
    {
        (matrix1 + i) = (int)malloc(sizeof(int) * m);
        //allocating memory for every row of 'matrix1'
        if ((matrix1 + i) == NULL)
        {
            printf("Error in allocating memory\n");
            exit(0);
        }
    }
    matrix2 = (int **)malloc(sizeof(int *) * n);
    //allocating memory for 'matrix2'
    if (matrix2 == NULL)
    {
        printf("Error in allocating memory\n");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        (matrix2 + i) = (int)malloc(sizeof(int) * n);
        //allocating memory for every row of 'matrix2'
        if ((matrix2 + i) == NULL)
        {
            printf("Error in allocating memory\n");
            exit(0);
        }
    }
    prod_matrix = (int **)malloc(sizeof(int *) * m);
    //allocating memory for 'prod_matrix'
    if (prod_matrix == NULL)
    {
        printf("Error in allocating memory\n");
        exit(0);
    }
    for (int i = 0; i < m; i++)
    {
        (prod_matrix + i) = (int)malloc(sizeof(int) * m);
        //allocating memory for every row of 'prod_matrix'
        if ((prod_matrix + i) == NULL)
        {
            printf("Error in allocating memory\n");
            exit(0);
        }
    }
    input_mtrx(matrix1, m, n); //for inputing value of 1st matrix
    input_mtrx(matrix2, n, p); //for inputing value of 2nd matrix
    printf("Matrix A:\n");
    print_mtrx(matrix1, m, n); //for printing value of 1st matrix
    printf("Matrix B:\n");
    print_mtrx(matrix2, n, p); //for printing value of 2nd matrix
    printf("The multiplication result AxB:\n");
    multiply_mtrx(matrix1, matrix2, prod_matrix, m, n, p);
    //for computing the matrix multiplication of matrix1 and matrix2
    print_mtrx(prod_matrix, m, p);
    for (int i = 0; i < m; i++)
    {
        free(matrix1 + i);
        //deallocating memory of every row of 'matrix1'
    }
    free(matrix1);
    //deallocating memory of 'matrix1'
    for (int i = 0; i < n; i++)
    {
        free(matrix2 + i);
        //deallocating memory of every row of 'matrix2'
    }
    free(matrix2);
    //deallocating memory of 'matrix2'
    for (int i = 0; i < m; i++)
    {
        free(prod_matrix + i);
        //deallocating memory of every row of 'prod_matrix'
    }
    free(prod_matrix);
    //deallocating memory of 'prod_matrix'
    return 0;
}