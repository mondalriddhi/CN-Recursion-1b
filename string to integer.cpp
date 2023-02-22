#include <iostream>

using namespace std;
#include <cmath>
int stringToNumber(char input[]) {
    // Write your code here
int len=0;
    while(input[len]){
        len++;
    }
    if(len<1){
        return 0;
    }
    int b=stringToNumber(input+1);
    int a;
    if(input[0]!='\0'){
        a=(input[0]-48)*pow(10,len-1);
    
    }
    return b+a;
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

