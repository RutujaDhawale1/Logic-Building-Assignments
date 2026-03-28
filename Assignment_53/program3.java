class MyArray
{
    public int[] CopyReverse(int arr[])
    {
        int brr[] = new int[arr.length];

        for(int i = 0; i < arr.length; i++)
        {
            brr[i] = arr[arr.length - i - 1];
        }

        return brr;
    }
}

class program3
{
    public static void main(String A[])
    {
        int arr[] = {10, 20, 30, 40, 50};

        MyArray obj = new MyArray();
        int brr[] = obj.CopyReverse(arr);

        System.out.print("Output: ");
        for(int i = 0; i < brr.length; i++)
        {
            System.out.print(brr[i] + " ");
        }
    }
}
