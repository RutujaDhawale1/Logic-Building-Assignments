import java.util.*;

class Pattern
{
    public void PatternX(String str)
    {
        int i = 0, j = 0;

        for(i = 0; i < str.length(); i++)
        {
            for(j = 0; j < str.length(); j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }

            System.out.println();
        }
        
    }
}

class program1
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