class MyArray
{
    public void DisplayClass(double arr[])
    {
        for(int i = 0; i < arr.length; i++)
        {
            double marks = arr[i];
            if(marks < 35)
            {
                System.out.println(marks + " -> Fail");
            }
            else if(marks < 50)
            {
                System.out.println(marks + " -> Pass class");
            }
            else if(marks < 60)
            {
                System.out.println(marks + " -> Second class");
            }
            else if(marks < 70)
            {
                System.out.println(marks + " -> First class");
            }
            else
            {
                System.out.println(marks + " -> First class with Distinction");
            }
        }
    }
}

class program4
{
    public static void main(String A[])
    {
        double arr[] = {67.3, 45.8, 88.9, 77.5, 55.2};

        MyArray obj = new MyArray();
        obj.DisplayClass(arr);
    }
}
