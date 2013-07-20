#include <iostream>
#include <string>
#include "dictionary.h"
#include "parser.h"

using namespace std;

int main(){
	try {
		cout << "scheck verion 0.1" << endl;
		Dictionary d( "data/mydict.dat" );

		ifstream sub( "data/sub1.txt" );
		if ( ! sub.is_open() ) {
			throw ScheckError( "cannot open data/sub1.txt" );
		}

		Parser p( sub );

		string word;
		while( ( word = p.NextWord() ) != "") {
			if( d.Check( word ) ) {
				cout << word << " is OK\n";
			} else {
				cout << word << " is misspelt at line " << p.LineNo() << "\n";
			}
		}
	} catch( const ScheckError & e ) {
		cerr << "Error: " << e.what() << endl;
		return 1;
	}
}
