import java.util.Scanner;

class Pattern {
    public void Display(int[][] matrix, int iRow, int iCol) {
        for (int i = 0; i < iRow - 1; i += 2) {
            int[] temp = matrix[i];
            matrix[i] = matrix[i + 1];
            matrix[i + 1] = temp;
        }

        System.out.println("Matrix after swapping consecutive rows:");
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }
}

class program1 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows: ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        iCol = sobj.nextInt();

        int[][] matrix = new int[iRow][iCol];

        System.out.println("Enter matrix elements:");
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                matrix[i][j] = sobj.nextInt();
            }
        }

        Pattern pobj = new Pattern();
        pobj.Display(matrix, iRow, iCol);
    }
}
