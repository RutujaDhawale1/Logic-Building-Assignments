import java.util.HashMap;
import java.util.Map;

class WordFrequency
{
    public void printFrequency(String input)
    {
        String words[] = input.split(" ");
        HashMap<String, Integer> freqMap = new HashMap<String, Integer>();
        for(int i = 0; i < words.length; i++)
        {
            if(freqMap.containsKey(words[i]))
            {
                freqMap.put(words[i], freqMap.get(words[i]) + 1);
            }
            else
            {
                freqMap.put(words[i], 1);
            }
        }
        for(Map.Entry<String, Integer> entry : freqMap.entrySet())
        {
            System.out.println(entry.getKey() + " : " + entry.getValue());
        }
    }
}

class program2
{
    public static void main(String A[])
    {
        String input = "India is Demo India Hello Demo";
        WordFrequency obj = new WordFrequency();
        obj.printFrequency(input);
    }
}