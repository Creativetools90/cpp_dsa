#include <iostream>
using namespace std;

class Q{
public:


int data[100];
int f = -1;
int l = -1;

void add(int n){
if(f == -1){
f ++;
}

l ++;
data[l] = n;

};

void print(){

if(f == -1 ){

cout<<"empty"<<endl;
}

for(int i=f; i<=l; i++){
cout<<data[i]<<" |";

}
};

void pop(){

f++;
}

};

int  main(){

Q q;
q.add(100);
q.add(200);
q.add(300);
q.pop();
q.print();

return 0;
}