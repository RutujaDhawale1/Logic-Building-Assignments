class StringRotation
{
    public boolean isRotation(String s1, String s2)
    {
        if(s1.length() != s2.length())
            return false;
        String temp = s1 + s1;
        return temp.contains(s2);
    }
}

class program1
{
    public static void main(String A[])
    {
        String s1 = "abcdefg";
        String s2 = "cdefgab";
        StringRotation obj = new StringRotation();
        System.out.println(obj.isRotation(s1, s2));
    }
}