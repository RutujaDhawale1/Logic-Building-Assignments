import java.util.Scanner;

class MatrixOperations
{
    public int[][] addMatrices(int[][] matrix1, int[][] matrix2, int rows, int cols)
    {
        int[][] sum = new int[rows][cols];
        
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        
        return sum;
    }
}

class AddMatrices
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter number of rows:");
        int rows = sc.nextInt();
        
        System.out.println("Enter number of columns:");
        int cols = sc.nextInt();
        
        int[][] matrix1 = new int[rows][cols];
        int[][] matrix2 = new int[rows][cols];
        
        System.out.println("Enter elements of first matrix:");
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                matrix1[i][j] = sc.nextInt();
            }
        }
        
        System.out.println("Enter elements of second matrix:");
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                matrix2[i][j] = sc.nextInt();
            }
        }
        
        MatrixOperations obj = new MatrixOperations();
        int[][] sum = obj.addMatrices(matrix1, matrix2, rows, cols);
        
        System.out.println("Sum of the two matrices:");
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }
        
        sc.close();
    }
}