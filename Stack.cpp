#include<iostream>
#include<vector>
using namespace std;

class stack{
    private:
    vector<int>Stack;
    public:
    //using push_back method to add the element to the end of the vector/array
    void push(int data){
       Stack.push_back(data);
    }
    //remove the last element pushed
    void pop(){
        Stack.pop_back();
    }
    //iterate the vector & print the elements
    void display(){
        if(Stack.empty()){
            cout<<"Stack is empty!"<<endl;
        }
        for(auto x : Stack){
            cout<<"|"<<x<<"|";
        }
    }
};
int main(){
    stack obj;
    obj.push(11);
    obj.push(12);
    obj.push(13);
    obj.pop();
    obj.display();
}
