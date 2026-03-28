class MyArray
{
    public int DiffArray(int arr1[], int arr2[])
    {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < arr1.length; i++)
        {
            sum1 += arr1[i];
        }
        for(int i = 0; i < arr2.length; i++)
        {
            sum2 += arr2[i];
        }
        return sum1 - sum2;
    }
}

class program1
{
    public static void main(String A[])
    {
        int arr1[] = {2, 9, 7, 5, 2, 3};
        int arr2[] = {9, 3, 5, 5};

        MyArray obj = new MyArray();
        int result = obj.DiffArray(arr1, arr2);

        System.out.println("Output: " + result);
    }
}