import java.util.Scanner;

class MyArray 
{
    public void Display(int[] arr1, int[] arr2)
    {
        System.out.println("Contents of first array:");
        for (int i = 0; i < arr1.length; i++) 
        {
            System.out.print(arr1[i] + " ");
        }
        System.out.println();

        System.out.println("Contents of second array:");
        for (int i = 0; i < arr2.length; i++) 
        {
            System.out.print(arr2[i] + " ");
        }
        System.out.println();
    }
}

class Program1 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of first array:");
        int size1 = sobj.nextInt();
        int[] arr1 = new int[size1];
        System.out.println("Enter elements of first array:");
        for (int i = 0; i < size1; i++) 
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.println("Enter size of second array:");
        int size2 = sobj.nextInt();
        int[] arr2 = new int[size2];
        System.out.println("Enter elements of second array:");
        for (int i = 0; i < size2; i++) 
        {
            arr2[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Display(arr1, arr2);

        sobj.close();
    }
}