import java.util.*;

class Pattern
{
    public void PatternX(String str)
    {
        int i = 0, j = 0;

        for(i = str.length(); i > 0; i--)
        {
            for(j = 0; j < i; j++)
            {
                if( j < i)
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

class program2
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