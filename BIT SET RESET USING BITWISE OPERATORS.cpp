//EXPERIMENT-4
// PALAK SONI
// 24070123069
// ENTC A3
//Problem statement-Write a program to set and reset the position of bit with the use of bitwise operators in C++.


#include<iostream>
using namespace std;

int main(){
    int i=24;
    int set;
    int reset;
    int bittobereset;
    int bittobeset;
    cout<<"Enter the bit position to be set:"<<endl;
    cin>>bittobeset;
    
    cout<<"Enter the bit position to be reset:"<<endl;
    cin>>bittobereset;
    
    set= i|(1<<bittobeset);
    reset=i&(~(1<<bittobereset));
   
    cout<<"Your number is:"<<set<<endl;
   
    cout<<"Your number is:"<<reset<<endl;

    return 0;
   
}


/*Output
Enter the bit position to be set: 5
Enter the bit position to be reset: 3
Your number is:56
Your number is:16
*/
