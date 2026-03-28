import java.io.*;

class CharacterCounter
{
    public int countCharacters(String filename)
    {
        int count = 0;
        try
        {
            FileReader fr = new FileReader(filename);
            int c;
            while ((c = fr.read()) != -1)
            {
                count++;
            }
            fr.close();
        }
        catch (IOException e)
        {
            System.out.println("Error reading file: " + e.getMessage());
        }
        return count;
    }
}

class program5
{
    public static void main(String A[])
    {
        String filename = "input.txt"; // Change to your file name

        CharacterCounter counter = new CharacterCounter();
        int totalChars = counter.countCharacters(filename);

        System.out.println("Total number of characters in the file \"" + filename + "\" is: " + totalChars);
    }
}