class MyArray
{
    int Search(char arr[], char ch)
    {
        int count = 0;
        char searchChar = (ch >= 'A' && ch <= 'Z') ? (char)(ch + 32) : ch;
        for(int i = 0; i < arr.length; i++)
        {
            char currentChar = (arr[i] >= 'A' && arr[i] <= 'Z') ? (char)(arr[i] + 32) : arr[i];
            if(currentChar == searchChar)
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
        char arr[] = {'b', 'N', 'e', 'B', 'R', 'b', 'A', 'i', 'G', 'i', 'B', 'b'};
        char ch = 'b';

        MyArray obj = new MyArray();
        int result = obj.Search(arr, ch);

        System.out.println(result);
    }
}