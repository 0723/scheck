#include <iostream>
#include <string>
#include "dictionary.h"
using namespace std;

int main(){
	try {
		cout << "scheck verion 0.1" << endl;
		Dictionary d( "data/mydict.sdat" );
		string word = "dog";
		while( getline( cin, word) ){

			if ( d.Check( word ) ) {
				cout << word << " is ok\n";
			} else {
				cout << word << " is misspelt \n";
			}
		}

	} catch( const ScheckError & e ) {
		cerr << "Error: " << e.what() << endl;
		return 1;
	}
}
