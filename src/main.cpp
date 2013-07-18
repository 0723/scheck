#include <iostream>
#include <string>
#include "dictionary.h"
using namespace std;

int main(){
	cout << "scheck verion 0.1" << endl;
	Dictionary d( "mydict.dat" );
	string word = "dog";
	if ( d.Check( word ) ) {
		cout << word << " is ok\n";
	} else {
		cout << word << " is misspelt \n";
	}
}
