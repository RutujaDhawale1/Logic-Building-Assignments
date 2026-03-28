import java.util.*;

class Pattern
{
    public void PatternX(String str)
    {
        int i = 0, j = 0;
        int size = str.length();

        for(i = size; i > 0; i--)
        {
            System.out.print("H\t");
            for(j = 1; j < i; j++)
            {
                if(j < i)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }

            System.out.println();
        }

        for(i = 2; i <= size; i++)
        {
            System.out.print("H\t");
            for(j = 1; j < i; j++)
            {
                if(j < i)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }

            System.out.println();
        }
        
    }
}

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        pobj.PatternX(str);
    }
}