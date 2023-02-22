#include <iostream>
using namespace std;
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Write your code here

    if(n==0){
        return;
    }
    if(n==1){
      cout<<"1"<<" from "<< source<<" "<< destination<<endl;//disk number is also printed here
      return; 
    }
    towerOfHanoi(n-1,source,destination,auxiliary);
    cout<< n<<" from "<<source<<" "<< destination<<endl;//disk number is also printed here
    towerOfHanoi(n-1,auxiliary,source,destination);
        
}
int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}


