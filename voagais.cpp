#include <iostream>
#include <string>

 using namespace std;

int main() {
    string str;
    int a=0,e=0,i=0,o=0,u=0;
    cout << "Digite uma palavra" << endl;
    cin >> str; 
    for (int c =0; c<str.size(); c++){
        if(str[c]==97){
            a++;
        }
        else if (str[c]==101){
            e++;
        }
        else if (str[c]==105){
            i++;
        }
        else if (str[c]==111){
            o++;
        }
        else if(str[c]==117){
            u++;
        } 
        
    }
    if (a>0){
       cout << "a=" << a << endl;
    } 
    if (e>0){
       cout << "e=" << e << endl;
    }
    if (i>0){
        cout << "i=" << i << endl;
    }
    if (o >0){
       cout << "o=" << o << endl;
    }
    if (u>0){
       cout << "u=" << u << endl;
    }
 
return 0;
}
