class MyArray
{
    public int CountCapital(char arr[])
    {
        int count = 0;
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                count++;
            }
        }
        return count;
    }
}

class program3
{
    public static void main(String A[])
    {
        char arr[] = {'b', 'N', 'j', 'B', 'R', 'b', 'A', 'd', 'G', 'G'};

        MyArray obj = new MyArray();
        int result = obj.CountCapital(arr);

        System.out.println(result);
    }
}