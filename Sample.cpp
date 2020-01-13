#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main(){
	
	string str1("the quick ");
	string str2("brown fox...");
	string str3(str2);
	
	cout << str3 << endl;
	cout << str1 << endl;
	cout << str1.at(5) << endl;
	cout << str1.substr(4, 5) << endl;
	str3 = str1;
	cout << str3 << endl;
	str3 += str2;
	cout << str3 << endl;
	cout << str3.empty() << endl;
	cout << str1 + str2 << endl;
	str3 = str1;
	cout << str3.insert(4, str2) << endl;
	str3 = str1 + str2.substr(0, 9) + " jumps over the lazy dog";
	cout << str3.find("the") << endl;
	cout << str3 << endl;
	cout << str3.find_first_of("the", 4) << endl;
	cout << str3.find_first_not_of(str1, 0);
	
	return 0;
}
