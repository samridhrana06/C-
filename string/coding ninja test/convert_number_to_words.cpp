// Problem Statement
// You are given an Integer 'N' you have to convert the integer to
// words.
// For example you are given integer N = 2234 then you have to
// return the string "two thousand two hundred and thirty four".

// Input: 1234
// Output: one thousand two hundred and thirty four

// Input: 123
// Output: one hundred and twenty three


//steps
// 1. create a string array of numbers from 0 to 19 
// 2. create a string array of tens from 0 to 90
// 3. create a string array of hundred, thousand, million, billion
// 4. create a function to convert 3 digit number to words
// 5. create a function to convert 2 digit number to words
// 6. create a function to convert 1 digit number to words


#include<bits/stdc++.h>
using namespace std;

// Arrays to store the words for numbers
string one[] = {"", "one ", "two ", "three ", "four ", 
                "five ", "six ", "seven ", "eight ", 
                "nine ", "ten ", "eleven ", "twelve ", 
                "thirteen ", "fourteen ", "fifteen ", 
                "sixteen ", "seventeen ", "eighteen ", 
                "nineteen "};

string ten[] = {"", "", "twenty ", "thirty ", "forty ",
                "fifty ", "sixty ", "seventy ", "eighty ",
                "ninety "};

string hundred[] = {"", "hundred ", "thousand ", "million ", "billion "};

// Function to convert a number less than 100 to words
string convert1(int n){
    string ans = "";
    if(n > 19){
        ans += ten[n/10] + one[n%10];
    }
    else{
        ans += one[n];
    }
    return ans;
}

// Function to convert a number less than 1000 to words
string convert2(int n){
    string ans = "";
    if(n > 99){
        ans += one[n/100] + hundred[1] + convert1(n%100);
    }
    else{
        ans += convert1(n);
    }
    return ans;
}

// Function to convert a number less than 1 million to words
string convert3(int n){
    string ans = "";
    if(n > 999){
        ans += one[n/1000] + hundred[2] + convert2(n%1000);
    }
    else{
        ans += convert2(n);
    }
    return ans;
}

// Function to convert a number less than 1 billion to words
string convert4(int n){
    string ans = "";
    if(n > 999999){
        ans += one[n/1000000] + hundred[3] + convert3(n%1000000);
    }
    else{
        ans += convert3(n);
    }
    return ans;
}

// Function to convert a number to words
string convertNumberToWords(int n){
    if(n == 0){
        return "zero";
    }
    else{
        return convert4(n);
    }
}

int main(){
    int n = 1234;
    cout<<convertNumberToWords(n)<<endl;
    return 0;
}

