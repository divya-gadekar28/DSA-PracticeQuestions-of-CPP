#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first value :";
    cin>>a;
    cout<<"enter second value :";
    cin>>b;

    //performing operations

    cout<< "a & b : "<< (a&b)<<endl;  // AND(&) Operator :- if both bits are 1 then 1 else 0 
    cout<< "a | b :"<< (a|b)<<endl;   //OR(|) Operator :- if any one of the bit is 1 then 1 else 0
    cout<< "~a :"<< ~a<<endl;     //NOT(~) Operator :- if bit is 1 then it becomes 0 and vice versa
    cout<< "a ^ b :"<< (a^b)<<endl;   //EX-OR(^) Operator :- if same bits then 0 else 1
    cout<< "a << b :"<<(a<<b)<<endl;     //Left-shift(<<) Operator :- left shifts the bit of a by b
    cout<< "a >> b :"<<(a>>b)<<endl;     //Right-shift(>>) Operator :- right shifts the bit of a by b
    cout<< "a ++ :"<<a++<<endl;          //post-increment(val++) :- first displays the value & then increments it by 1
    cout<< "++ a :"<<++a<<endl;         //pre-increment(++val) :- first increments & then display the value
    cout<< "a-- :"<<a--<<endl;               //post-decrement(val--) :- first displays the value & then decrements it by 1
    cout<< "--a :"<<--a<<endl;                //pre-decrement(--val) :- first decrements & then display the value
}

/* OUTPUT :-
enter first value :10
enter second value :8
a & b : 8
a | b :10
~a :-11
a ^ b :2
a << b :2560
a >> b :0
a ++ :10
++ a :12
a-- :12
--a :10
*/