// The String Decoder

// You are provided with a string which has a sequence of 1's and 0's.

// This sequence is the encoded version of a English word. You are supposed write a program to decode the provided string and find the original word. Each alphabet is represented by a sequence of 1s.

// This is as mentioned below.

// A:1

// B:11

// C: 111

// D: 1111

// E: 11111

//input: 101101110
// the decoded string is: ABC



import java.util.*;
import java.io.*;
import java.lang.*;


public class string_decoder {

public String  stringDecoder(String input1){
    String result = "";
    String[] arr = input1.split("0");
    for(int i = 0; i < arr.length; i++){
        if(arr[i].length() == 1){
            result += "A";
        }
        else if(arr[i].length() == 2){
            result += "B";
        }
        else if(arr[i].length() == 3){
            result += "C";
        }
        else if(arr[i].length() == 4){
            result += "D";
        }
        else if(arr[i].length() == 5){
            result += "E";
        }
        else if(arr[i].length() == 6){
            result += "F";
        }
        else if(arr[i].length() == 7){
            result += "G";
        }
        else if(arr[i].length() == 8){
            result += "H";
        }
        else if(arr[i].length() == 9){
            result += "I";
        }
        else if(arr[i].length() == 10){
            result += "J";
        }
        else if(arr[i].length() == 11){
            result += "K";
        }
        else if(arr[i].length() == 12){
            result += "L";
        }
        else if(arr[i].length() == 13){
            result += "M";
        }
        else if(arr[i].length() == 14){
            result += "N";
        }
        else if(arr[i].length() == 15){
            result += "O";
        }
        else if(arr[i].length() == 16){
            result += "P";
        }
        else if(arr[i].length() == 17){
            result += "Q";
        }
        else if(arr[i].length() == 18){
            result += "R";
        }
        else if(arr[i].length() == 19){
            result += "S";
        }
        else if(arr[i].length() == 20){
            result += "T";
        }
        else if(arr[i].length() == 21){
            result += "U";
        }
        else if(arr[i].length() == 22){
            result += "V";
        }
        else if(arr[i].length() == 23){
            result += "W";
        }
        else if(arr[i].length() == 24){
            result += "X";
        }
        else if(arr[i].length() == 25){
            result += "Y";
        }
        else if(arr[i].length() == 26){
            result += "Z";
        }
    
}
