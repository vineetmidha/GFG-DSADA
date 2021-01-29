// https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1/?track=DSASP-Stack&batchId=155

// Space efficient solution

#include<bits/stdc++.h>

using namespace std;

// Implement two stacks with one array

struct TwoStacks { 
    int * arr; 
    int capacity; 
    int top1, top2; 
    
    TwoStacks(int n){
        capacity = n;
        arr = new int[capacity];
        top1 = -1;
        top2 = capacity;
    }
    void push1(int value){
        if (top1 < top2 - 1)
            arr[++top1] = value;
        else
            cout << "\nOverflow - Stack-1 full";
    }
    void push2(int value){
        if (top1 < top2 - 1)
            arr[--top2] = value;
        else
            cout << "\nOverflow - Stack-2 full";
    }
    int pop1(){
        if (top1==-1){
            cout << "\nUnderflow - Stack-1 empty";
            return -1;
        }
        
        return arr[top1--];
    }
    int pop2(){
        if (top2==capacity){
            cout << "\nUnderflow - Stack-2 empty";
            return -1;
        }
        
        return arr[top2++];
    }
};

int main()
{
    TwoStacks ts(5); 
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    ts.push1(12); 
    ts.push2(70); 
    cout << "\nPopped element from stack1 is "<<ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 
    cout << "\nPopped element from stack1 is "<<ts.pop1(); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 
    cout << "\nPopped element from stack1 is "<<ts.pop1(); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 

	return(0);
}

// Output

Overflow - Stack-1 full
Overflow - Stack-2 full
Popped element from stack1 is 11
Popped element from stack2 is 40
Popped element from stack1 is 5
Popped element from stack2 is 7
Underflow - Stack-1 empty
Popped element from stack1 is -1
Popped element from stack2 is 15
Popped element from stack2 is 10
Underflow - Stack-2 empty
Popped element from stack2 is -1
