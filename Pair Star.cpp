/*  Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string

Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a


*/

#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[]) {
    // Write your code here

    int len=0;
    while(input[len]){
        len++;
    }
    if(len<=1){
        return;
    }
    pairStar(input+1);
    if(input[0]==input[1]){
        for(int i=3*len;i>0;i--){
            input[i+1]=input[i];
        }
        input[1]='*';
    }
}



int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

