// Ninja is currently facing North. An instructor gives him
// 'N' instructions in the form of a binary string 'S'. If 'S[ i l'
// is IO', then Ninja will turn clockwise by '90' degrees.
// Otherwise, Ninja will turn counterclockwise by '90'
// degrees.
// Ninja is lazy and doesn't feel like doing all 'N'
// instructions. So, he decides to just face the final
// direction. Find the final direction of Ninja, which will be
// one of the following: 'NORTH', 'SOUTH', 'EAST', or
// 'WEST'.

// n = '3'
// s ="101"
// Ninja's direction will change in the
// following order:
// North West North West
// So, the answer is 'WEST' .

// n = '4'
// s = "1101"
// Ninja's direction will change in the
// following order:
// south 


//n= 4
//s = "1111"
// north

// n = 8
// s = "10011101"
// SOUTH

// n = 7
// s= "0101011"
//west


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //initialize variables
    int n = 7;
    string s = "0101011";
    int i = 0;
    int dir = 0;
    
    //iterate through the string
    while (i < n)
    {
        //if the current character is '0', turn right
        if(s[i] == '0'){
            dir = (dir + 1)%4;
        }
        //if the current character is '1', turn left
        else{
            dir = (dir + 3)%4;
        }
        i++;
    }
    
    //print the final direction based on the value of dir
    if(dir == 0){
        cout<<"NORTH";
    }
    else if(dir == 1){
        cout<<"EAST";
    }
    else if(dir == 2){
        cout<<"SOUTH";
    }
    else{
        cout<<"WEST";
    }
    
    return 0;
}