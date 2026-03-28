class MyArray
{
    public void MinArray(int arr1[], int arr2[])
    {
        int min1 = arr1[0];
        int min2 = arr2[0];

        for(int i = 1; i < arr1.length; i++)
        {
            if(arr1[i] < min1)
            {
                min1 = arr1[i];
            }
        }

        for(int i = 1; i < arr2.length; i++)
        {
            if(arr2[i] < min2)
            {
                min2 = arr2[i];
            }
        }

        System.out.println("Output: " + min1 + " " + min2);
    }
}

class program2
{
    public static void main(String A[])
    {
        int arr1[] = {2, 9, 7, 5, 2, 3};
        int arr2[] = {9, 3, 5, 5};

        MyArray obj = new MyArray();
        obj.MinArray(arr1, arr2);
    }
}