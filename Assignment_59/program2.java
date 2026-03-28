class Pattern
{
    public void printPattern(int n)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

class Program2
{
    public static void main(String A[])
    {
        Pattern obj = new Pattern();
        int rows = 5;  
        obj.printPattern(rows);
    }
}