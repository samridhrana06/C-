import java.util.* ;
public class LongestSubString 
{
	public static int uniqueSubstrings(String input) 
    {
		//write your code here
		Map<Character,Integer> m = new HashMap<>();
		int max = -1;
		for(int i = 0;i<input.length();i++)
		{
			if(m.containsKey(input.charAt(i)))
			{
				if(max<m.size()) max = m.size();
                System.out.println(m.keySet());
				System.out.println(m.size());
				m.clear();
			}
			m.put(input.charAt(i), 1);
		}
						System.out.println(m.size());

		// return (max<m.size())?m.size():max;
		return 0;
	}
    public static void main(String[] args) 
    {

        System.out.println(uniqueSubstrings("qdbaszitlnniyayvgojnmlcjwmpnsrnlcrbkjaycurpzrhswguucjdezcmmddgyjgkjfrjqvymzuscpncfnoidrodcxerbygmmhgfunixdroyhzhraqdeinfxilodxzvgwklmfiozhewvticrxfyenbdesnhipqiufnyayloiizhfyjgaicakmsvfjfibppopovyifqnjexqnefatyxyauzuwfsxvfewgjdalhuqoszpngvrmgrxjmylnvhukkqvvnpzglhmkrnohayufmcdzumoolikxyuzywtbxbjpdgvdxraheoclpllfoxofspnfpuvpsgnaneefinfbwiivfyfqabsxqutqgvjlbjtwgudxhnvklftftvxyyhzybybwozjmrmuhizdtjwtqlwxalmrbawdzaovekiovnucefttmwgjmfzjvwyeeijemwvxpojkhchznbuywkjzlbiflcogqfvfhehvswkdvqsxqtytpxiwrwixadpyknqdopbaknvxsgvimhciwklhwwpajilaothdibsimfkhrqlysymbccbkrurnimqkeadihmqticquxnlqjfxusxscqktafolecwydrmotozevofwtcfuqkfzmmxcsabqjezaizeewxomosgaldtuqqecaxqbhnfejrtdsbpfadnilgwmmyiyiqqtfhczjgmysvtytavvqmrlydlgtyvxcoimdeyajfaxokmkemckzlxdqfcqphqqsuiptryozbuimbjmtlclftnacbeflirspvezwxvbtszhklmwefpbpophgfwzztmkvanlrhdfmafjtmwtiwibdkpbgyfmiervjlxfsyrlmhrpgrsajtqxcmxxkbwozvkoicdxhqfewoxjyfzciangmhdzjnifteqhleopkgzaqkzgbhmeulehsbzjbjqkrujvlpmdqidapwbnhshbfmuzgeabwsscrhjvgggiesfzfgugvfbqelseycxrllixdg"));
    }
}