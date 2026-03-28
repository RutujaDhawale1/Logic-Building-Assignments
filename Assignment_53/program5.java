class MyArray
{
    public boolean IsPalindrome(int arr[])
    {
        int start = 0, end = arr.length - 1;
        while(start < end)
        {
            if(arr[start] != arr[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
}

class program5
{
    public static void main(String A[])
    {
        int arr[] = {11, 252, 387783, 252, 11};

        MyArray obj = new MyArray();
        boolean result = obj.IsPalindrome(arr);

        if(result == true)
        {
            System.out.println("Output: TRUE");
        }
        else
        {
            System.out.println("Output: FALSE");
        }
    }
}
