#include <iostream>
using namespace std;

int main(){
    int x, y;
     cout<< "ENTER THE NO. ";
      cin>> x >>y;
    char op;
       cout<< "ENTER THE opreator. "; 
       cin>> op;
    switch(op){
        case '+': cout<<(x+y);break;
        case '*': cout<<(x*y);break;
        case '/': cout<<(x/y);break;
        case '%': cout<<(x%y);break;
        case '-': cout<<(x-y);break;

    }
}
