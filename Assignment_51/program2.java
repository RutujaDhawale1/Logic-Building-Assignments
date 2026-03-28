import java.util.Scanner;

class Pattern
{
    public void Display(int[][] matrix, int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(j = 0; j < iCol - 1; j += 2)
        {
            for(i = 0; i < iRow; i++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][j+1];
                matrix[i][j+1] = temp;
            }
        }

        System.out.println("Matrix after swapping consecutive columns:");
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }
}

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        iValue2 = sobj.nextInt();

        int[][] matrix = new int[iValue1][iValue2];

        System.out.println("Enter the matrix elements:");
        for(int i = 0; i < iValue1; i++)
        {
            for(int j = 0; j < iValue2; j++)
            {
                matrix[i][j] = sobj.nextInt();
            }
        }

        Pattern pobj = new Pattern();
        pobj.Display(matrix, iValue1, iValue2);
    }
}
