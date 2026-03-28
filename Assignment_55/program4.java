class MyArray
{
    int Difference(char arr[])
    {
        int capitalCount = 0;
        int smallCount = 0;
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                capitalCount++;
            }
            else if(arr[i] >= 'a' && arr[i] <= 'z')
            {
                smallCount++;
            }
        }
        return capitalCount - smallCount;
    }
}

class program4
{
    public static void main(String A[])
    {
        char arr[] = {'b', 'N', 'e', 'B', 'R', 'b', 'A', 'I', 'O', 'G', 'i'};

        MyArray obj = new MyArray();
        int result = obj.Difference(arr);

        System.out.println(result);
    }
}
