import java.util.HashMap;
import java.util.Map;

class MaxFrequencyWord
{
    public String maxFrequencyWord(String input)
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
        String maxWord = "";
        int maxFreq = 0;
        for(Map.Entry<String, Integer> entry : freqMap.entrySet())
        {
            if(entry.getValue() > maxFreq)
            {
                maxFreq = entry.getValue();
                maxWord = entry.getKey();
            }
        }
        return maxWord;
    }
}

class program3
{
    public static void main(String A[])
    {
        String input = "India is Demo India Hello Demo India";
        MaxFrequencyWord obj = new MaxFrequencyWord();
        System.out.println(obj.maxFrequencyWord(input));
    }
}