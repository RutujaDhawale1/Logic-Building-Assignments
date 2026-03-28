class MyArray
{
    public void SumOfDigits(int arr[])
    {
        for(int i = 0; i < arr.length; i++)
        {
            int num = arr[i];
            int sum = 0;
            while(num != 0)
            {
                sum = sum + num % 10;
                num = num / 10;
            }
            arr[i] = sum;
        }
    }
}

class program2
{
    public static void main(String A[])
    {
        int arr[] = {89, 687, 56, 549, 87, 9};

        MyArray obj = new MyArray();
        obj.SumOfDigits(arr);

        for(int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}