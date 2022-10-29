#include <iostream>
using namespace std;

int main(){
	string crc;
	string decoded;

cout << "\nEnter the message: ";
getline (cin, decoded);
cout << "\nEnter the divisor: ";
getline (cin, crc);

for(int i = 0; i <= decoded.length() - crc.length(); ){
    for(int j = 0; j < crc.length(); j++)
        decoded[i+j] = decoded[i+j] == crc[j] ? '0':'1';
        for(; i < decoded.length() && decoded[i] != '1'; i++);
}
for (char i : decoded.substr(decoded.length() - crc.length() ) )
	if(i != '0'){
	cout << "\nStatus: Error in communication ....";
	return 0;
}
cout << "\nStatus: No error!";
return 0;
}

