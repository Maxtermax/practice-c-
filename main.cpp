#include <iostream>
#include "engine.h"

using namespace std;
int main() {
	int list[] = {5,2,3,4,5,6,19};
	Engine engine;
	// engine.push(list,9);
	// cout << list << endl;
	//cout <<  engine.get_last(sizeof(list),list) << endl;
	int z = engine.return_value();
	cout << z << endl;
	return 0;
}

