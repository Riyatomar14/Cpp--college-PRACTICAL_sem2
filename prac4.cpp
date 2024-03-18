/* sring operations */

#include<iostream>
#include<cstring>


//string operations: Note that one could also use the string standard library which provides a lot of methods to modify strings.
class String{
	public:
		char* str; //string literal
		int len;

	String(char* str){
		this->str = str;
		len = strlen(str);
	}
	void showAddress(){
		int i;
		for(i=0;i<len;i++){
			std::cout<<str[i]<<" : "<<static_cast<void*>(&str[i])<<std::endl; 
		}
		return;
	}
	void concat(char* str2){

		int len2 = strlen(str2);

		char* temp = new char[len + len2 + 1]; 
		//first concatenate and then assign.
		strcpy(temp, this->str);
        strcat(temp, str2);

        this->str = temp;

        len += len2;

		std::cout<<"\n"<<this->str<<std::endl;
		return;
	}

	void reverse(){

		int i,j;

		for(i = 0,j= len-1;i<=j;i++,j--){
			char c = str[i];
			str[i] = str[j];

			str[j] = c;

			//notice the format of the for loop, we use comma for the same token, and to separate two, we use ";"
		}

	}

	void lower2upper(){
		for(int i =0;i<len;i++){

			char c = str[i];
			int ascii_val = int(c);

			if (ascii_val >=97 && ascii_val <=122){
				str[i] = (char)(ascii_val - 32);
			}
		}
	}

	int getLength(){
		//using pointers
		int length = 0;
		while(*str != '\0'){
			str++; //next character.
			length++;
		}
		//also check if it is equal to the length that we got through strlen
		if(length != len){
			std::cout<<"error"<<std::endl;
			return -1;
		}
		return length;


	}

	void printStr(){
		std::cout<<str<<std::endl;
	}

	// static void compare_two_strings(String str1, String str2){
	// 	str1.showAddress();
	// 	str2.showAddress();
	// }




};

int main(){

	String *str = new String((char*)("hellobruh!haha")); //typecasting because: ISO C++ forbids converting a string constant to 'char*'
	str->showAddress();

	str->concat((char*)". How's it going?");

	str->reverse();
	std::cout<<"\nreversed string: "<<std::endl;
	str->printStr();

	str->lower2upper();
	std::cout<<"\nlower to upper"<<std::endl;
	str->printStr();

	std::cout<<"Length: "<<str->getLength()<<std::endl;

	String str2((char*)("Welcome to C++"));

	// String::compare_two_strings(*str,str2);

	return 0;
}
