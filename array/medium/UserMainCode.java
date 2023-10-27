// StringConcatenation: Given 2 strings input1 & input2,

// • Concatenate both the strings

// • Remove duplicate alphabets & white spaces.

// • Arrange the alphabets in descending order.

// Assumption 1: There will either be alphabets, white spaces or null in both the inputs. Assumption 2: Both inputs will be in lower case.

// Note: If any one of the input is empty or null, output should be "null".

// Example 1:

// Input 1: apple

// Input 2: orange

// Output: rponlgea

// Example 2:

// Input 1: fruits
// Input 2: are good 
// Output: utsroigfeda 

// import java.util.*;
// import java.io.*;

// class UserMainCode{
//     public String stringConcatin(String input1, String input2){
//         // code here 





//         throw new UnsupportedOperationException("stringConcatin(String input1, String input2)");
//     }
// }


import java.util.*;
import java.util.stream.Collectors;
import java.io.*;

class UserMainCode {
    public String stringConcatin(String input1, String input2) {
        if (input1 == null || input2 == null || input1.isEmpty() || input2.isEmpty()) {
            return "null";
        }
        String concatenated = input1 + input2;
        concatenated = concatenated.replaceAll("\\s", "");
        concatenated = concatenated.chars().distinct().mapToObj(c -> String.valueOf((char) c)).sorted(Comparator.reverseOrder()).collect(Collectors.joining());
        return concatenated;
    }
}