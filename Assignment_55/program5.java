class MyArray
{
    void Pattern(int arr[])
    {
        for(int i = 0; i < arr.length; i++)
        {
            for(int j = 0; j < arr[i]; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

class program5
{
    public static void main(String A[])
    {
        int arr[] = {8, 9, 7, 6, 4, 2, 4};

        MyArray obj = new MyArray();
        obj.Pattern(arr);
    }
}