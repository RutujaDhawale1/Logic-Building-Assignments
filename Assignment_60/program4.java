import java.io.*;

class FileMerger
{
    public void mergeFiles(String file1, String file2, String file3)
    {
        try
        {
            BufferedReader br1 = new BufferedReader(new FileReader(file1));
            BufferedReader br2 = new BufferedReader(new FileReader(file2));
            BufferedWriter bw = new BufferedWriter(new FileWriter(file3));
            
            String line1 = br1.readLine();
            String line2 = br2.readLine();
            
            while (line1 != null || line2 != null)
            {
                if (line1 != null)
                {
                    bw.write(line1);
                    bw.newLine();
                    line1 = br1.readLine();
                }
                if (line2 != null)
                {
                    bw.write(line2);
                    bw.newLine();
                    line2 = br2.readLine();
                }
            }
            
            br1.close();
            br2.close();
            bw.close();
            
            System.out.println("Files merged successfully into " + file3);
        }
        catch (IOException e)
        {
            System.out.println("Error: " + e.getMessage());
        }
    }
}

class program4
{
    public static void main(String A[])
    {
        // Specify file paths (change to your actual file paths)
        String file1 = "file1.txt";
        String file2 = "file2.txt";
        String file3 = "mergedFile.txt";
        
        FileMerger merger = new FileMerger();
        merger.mergeFiles(file1, file2, file3);
    }
}