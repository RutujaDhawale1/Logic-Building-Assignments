class MyArray
{
    public void ArrayReplace(char arr[])
    {
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                arr[i] = (char)(arr[i] + 32);
            }
        }
    }
}

class program1
{
    public static void main(String A[])
    {
        char arr[] = {'b', 'N', 'j', 'B', 'R', 'b', 'A', 'd', 'G', 'G'};

        MyArray obj = new MyArray();
        obj.ArrayReplace(arr);

        for(int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}