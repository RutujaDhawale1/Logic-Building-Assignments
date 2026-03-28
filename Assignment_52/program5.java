import java.util.Scanner;

class MyArray 
{
    public void SumArray(int[] arr1, int[] arr2) 
    {
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < arr1.length; i++) 
        {
            sum1 += arr1[i];
        }

        for (int i = 0; i < arr2.length; i++) 
        {
            sum2 += arr2[i];
        }

        System.out.println("Summation of first array: " + sum1);
        System.out.println("Summation of second array: " + sum2);
    }
}

class Program5 
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
        mobj.SumArray(arr1, arr2);

        sobj.close();
    }
}