public class rohit {

    public String StringDecoder(String input1) 
    {
        // throws new UnsupportedOperationException("StringDecoder(String input)");
        int def = 64;
        int n = input1.length();
        int c = 0;
        int counter = 0;
        String s = new String();

        for(int i=0;i<n;i++)
        {
            if(input1.charAt(i) == '1')
            {
                counter++;
            }
            else if(input1.charAt(i) =='0')
            {
                c = def+counter;
                s = s + (char) c;
                c=0;
                counter=0;
            }
        }
        return s;
    }
}
