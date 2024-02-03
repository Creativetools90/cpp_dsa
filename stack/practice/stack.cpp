#include <iostream>
using namespace std;

class stk{

public:
int data[100];
int top  = -1;

//show 

void print(){
	if(top == -1){
		cout<<"stack is empty"<<endl;
	}
	else{
		for(int i=0; i<=top; i++){
			cout<<data[i]<<"->";
		}
	}

};

//add
void push(int n){

	top ++;
	data[top] = n;
};

//pop

void pop(){

top --;
}

};

int main(){

stk stack;
stack.push(10);
stack.push(20);
stack.push(30);
stack.print();

return 0;
}