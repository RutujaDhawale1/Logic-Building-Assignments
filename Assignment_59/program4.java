class Pattern4
{
    public void printPattern(int n)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print("*");
            }
            
            int spaces = 2 * (n - i);
            for(int j = 1; j <= spaces; j++)
            {
                System.out.print(" ");
            }
            
            for(int j = 1; j <= i; j++)
            {
                System.out.print("*");
            }
            
            System.out.println();
        }
    }
}

class Program4
{
    public static void main(String A[])
    {
        Pattern4 obj = new Pattern4();
        int rows = 4;
        obj.printPattern(rows);
    }
}
