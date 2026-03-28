class Pattern3
{
    public void printPattern(int n)
    {
        for(int i = 0; i < n; i++)
        {
            
            for(int s = 0; s < i; s++)
            {
                System.out.print(" ");
            }
            
            for(int j = 0; j < n - i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

class Program3
{
    public static void main(String A[])
    {
        Pattern3 obj = new Pattern3();
        int rows = 5;
        obj.printPattern(rows);
    }
}
