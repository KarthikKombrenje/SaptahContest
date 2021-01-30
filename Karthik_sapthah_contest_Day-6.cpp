#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;
string convert(string s, int numRows){
    string arr[10];
    string str = "";
    for (int i=0; i<numRows; i++){
        arr[i] = "";
    }
    int i = 0;
    int ch = 0;
    int direction;
    while(ch!=s.length()){
        if(i == 0){
            direction = 1;
        }
        else if(i == numRows - 1){
            direction = -1;
        }
        arr[i] += s[ch];
        i += direction;
        ch ++;
    }

    for (int i=0; i<numRows; i++){
        str += arr[i];
    }
    return str;
}

int main(){
    cout<<convert("PAYPALISHIRING\n", 3);
    cout<<convert("PAYPALISHIRING",4);
    return 0;
}
