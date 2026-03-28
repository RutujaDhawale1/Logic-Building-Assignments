class MyArray
{
    public void ReverseArray(int arr[])
    {
        for(int i = 0; i < arr.length; i++)
        {
            int num = arr[i];
            int rev = 0;
            while(num != 0)
            {
                rev = rev * 10 + num % 10;
                num = num / 10;
            }
            arr[i] = rev;
        }
    }
}

class program1
{
    public static void main(String A[])
    {
        int arr[] = {89, 687, 56, 549, 87, 9};

        MyArray obj = new MyArray();
        obj.ReverseArray(arr);

        for(int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}