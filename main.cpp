#include <iostream>
#include <string>

using namespace std;
using std::string;


int main(){

int num;
int total=1;

cout<<"Enter a number to get its factorial "<<endl;
cin>>num;

for(int i=0; i<num; i++){

total=total*(num-i);


}

cout<<"The Factorial Of Number "<<num<<"! is "<<total<<endl;
    return 0;
}
