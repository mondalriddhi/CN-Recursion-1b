/*  Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx
Sample Output 3:


*/

#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print anything

void removeX(char input[]) {
    // Write your code here
    
int len=0;
    while(input[len]){
        len++;
    }
    if(len<1){
        return;
    }
    removeX(input+1);
    if(input[0]=='x'){
        for(int i=0;i<=len;i++){
            input[i]=input[i+1];
        } 
    }
}



int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

