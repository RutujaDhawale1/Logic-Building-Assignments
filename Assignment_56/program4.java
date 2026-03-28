class RemoveCharacter
{
    public String removeChar(String input, char ch)
    {
        String result = "";
        for(int i = 0; i < input.length(); i++)
        {
            if(input.charAt(i) != ch)
            {
                result += input.charAt(i);
            }
        }
        return result;
    }
}

class program4
{
    public static void main(String A[])
    {
        String input = "IndiaisDemoIndia";
        char ch = 'i';
        RemoveCharacter obj = new RemoveCharacter();
        System.out.println(obj.removeChar(input, ch));
    }
}