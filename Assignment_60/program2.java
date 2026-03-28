class MatrixOperations
{
    public int[][] multiplyMatrices(int[][] a, int[][] b)
    {
        int rowsA = a.length;
        int colsA = a[0].length;
        int rowsB = b.length;
        int colsB = b[0].length;

        if (colsA != rowsB)
        {
            System.out.println("Matrix multiplication not possible due to incompatible dimensions.");
            return null;
        }

        int[][] result = new int[rowsA][colsB];

        for (int i = 0; i < rowsA; i++)
        {
            for (int j = 0; j < colsB; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < colsA; k++)
                {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        return result;
    }

    public void printMatrix(int[][] matrix)
    {
        if (matrix == null)
        {
            System.out.println("No matrix to display.");
            return;
        }
        for (int i = 0; i < matrix.length; i++)
        {
            for (int j = 0; j < matrix[0].length; j++)
            {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}

class program2
{
    public static void main(String A[])
    {
        int[][] matrixA = {
            {1, 2, 3},
            {4, 5, 6}
        };

        int[][] matrixB = {
            {7, 8},
            {9, 10},
            {11, 12}
        };

        MatrixOperations ops = new MatrixOperations();

        System.out.println("Matrix A:");
        ops.printMatrix(matrixA);

        System.out.println("\nMatrix B:");
        ops.printMatrix(matrixB);

        System.out.println("\nProduct of A and B:");
        int[][] product = ops.multiplyMatrices(matrixA, matrixB);
        ops.printMatrix(product);
    }
}