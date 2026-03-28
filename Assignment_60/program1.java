class PatternPrinter
{
    public void printPattern(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1)
                {
                    System.out.print("*");
                }
                else if (j == 0 || j == n - 1)
                {
                    System.out.print("*");
                }
                else if (i < n / 2 && (j <= n / 2 - i - 1 || j >= n / 2 + i + 1))
                {
                    System.out.print("*");
                }
                else if (i >= n / 2 && (j >= i - n / 2 && j <= n - (i - n / 2) - 1))
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}

class program1
{
    public static void main(String A[])
    {
        int size = 9; // should be odd for symmetry
        PatternPrinter printer = new PatternPrinter();
        printer.printPattern(size);
    }
}