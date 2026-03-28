class MyArray
{
    int ArrayCountVowels(char arr[])
    {
        int count = 0;
        for(int i = 0; i < arr.length; i++)
        {
            char ch = arr[i];
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
               ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                count++;
            }
        }
        return count;
    }
}

class program2
{
    public static void main(String A[])
    {
        char arr[] = {'b', 'N', 'e', 'B', 'R', 'b', 'A', 'i', 'G', 'i'};

        MyArray obj = new MyArray();
        int result = obj.ArrayCountVowels(arr);

        System.out.println(result);
    }
}