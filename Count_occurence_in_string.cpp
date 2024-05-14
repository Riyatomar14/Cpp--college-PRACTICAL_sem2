/* write a program that prints the table indicating the number of occurences of each alphabet in a text entered as a command line arguments */
#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<" enter line of string: ";
    getline(cin,str);
    int count =0;
    for(int i=0;i<str.length();i++){
        count =0;
        for(int j=0;j<str.length();j++){
            if(j<i && str[i]==str[j]){
                break;
            }
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count != 0){
        cout<<str[i]<<" used number of time"<<count<<endl;
        }
    }
    return 0;
}
