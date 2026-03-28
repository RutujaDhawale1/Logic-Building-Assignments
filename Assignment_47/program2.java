import java.util.*;

class Pattern
{
    public void PatternX(int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iNum = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, iNum = 1; j <= iCol; j++, iNum++)
            {
                System.out.print(iNum+"\t");
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
        Pattern pobj = new Pattern();

        System.out.println("Enter the number of rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int iValue2 = sobj.nextInt();

        pobj.PatternX(iValue1, iValue2);
    }
}