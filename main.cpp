#include <iostream>
#include "shapes.hpp"

using namespace std;
int main(){
    int choice;
    cout<< "Welcome to the shapes calculator."<<endl<<"Pick a Shape by number"<<endl<<"1.Circle\n2.Rectangle\n3.Square\n4.Right Triangle\n5.Isosceles right Traingle"<<endl;
    cin>> choice;
    if(choice == 1){
        cout<<"What is the radius";
        double r;
        cin>>r;
        Circle s(r);
        printAreaToScreen(&s);
}
    else if(choice == 2){
        cout<<"What are the side lengths:";
        double a,b;
        cin>>a;
        cin>>b;
        Rectangle s(a,b);
        printAreaToScreen(&s);
    }
    else if(choice == 3){
        cout<<"What is the side length:";
        double l;
        cin>>l;
        Square s(l);
        printAreaToScreen(&s);
    }
    else if(choice == 4){
        cout<<"What are the side lengths:";
        double a,b;
        cin>>a;
        cin>>b;
        RightTriangle s(a,b);
        printAreaToScreen(&s);
    }
    else if(choice == 5){
        cout<<"What is the side length";
        double l;
        cin>>l;
        IsoscelesRightTriangle s(l);
        printAreaToScreen(&s);}
    else{cout<<endl<<"invalid selection:";
        return -1;
    }
}