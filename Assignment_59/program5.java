class Pattern5
{
    public void printPattern(int n)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = n; j > i; j--)
            {
                System.out.print("*");
            }
            
            for(int k = 0; k < 2 * i - 1; k++)
            {
                System.out.print(" ");
            }
            
            if(i != 0)
            {
                for(int j = n; j > i; j--)
                {
                    System.out.print("*");
                }
            }
            
            System.out.println();
        }
    }
}

class Program5
{
    public static void main(String A[])
    {
        Pattern5 obj = new Pattern5();
        int rows = 5;
        obj.printPattern(rows);
    }
}