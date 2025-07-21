//EXPERIMENT-4
// PALAK SONI
// ENTC A3
// 24070123069
//Problem statement-Write a program to show the use of bitwise operators in C++.


#include <iostream>
using namespace std;

int main() {
    int a=2;
    int b=4;
    int bitwise_AND = a&b;
   
    int bitwise_OR = a|b;
   
    int bitwise_NOT= ~b;
   
    int bitwise_XOR=a^b;
   
    int right_shift=a>>1;
    int left_shift=a<<1;
   
    cout<<"AND: "<<bitwise_AND<<endl;
    cout<<"OR:"<<bitwise_OR<<endl;
    cout<<"NOT: "<<bitwise_NOT<<endl;
    cout<<"XOR: "<<bitwise_XOR<<endl;
    cout<<"right shift: "<<right_shift<<endl;
    cout<<"left shift: "<<left_shift<<endl;
    return 0;
}

/*Output
AND: 0
OR:6
NOT: -5
XOR: 6
right shift: 1
left shift: 4
*/
