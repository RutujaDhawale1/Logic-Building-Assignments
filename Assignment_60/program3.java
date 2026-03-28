class Fibonacci
{
    public void printFibonacci(int n)
    {
        int a = 0, b = 1, c;
        System.out.print("Fibonacci Series: ");
        
        if (n <= 0)
        {
            System.out.println("Invalid input");
            return;
        }
        if (n == 1)
        {
            System.out.println(a);
            return;
        }
        
        System.out.print(a + " " + b + " ");
        
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            System.out.print(c + " ");
            a = b;
            b = c;
        }
        
        System.out.println();
    }
}

class program3
{
    public static void main(String A[])
    {
        int length = 10; 
        Fibonacci fib = new Fibonacci();
        fib.printFibonacci(length);
    }
}