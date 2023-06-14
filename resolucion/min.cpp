#include <iostream>
#include "resol.h"
#include "base.h"



int main() {
	commission e1("juan", 1.1, 0.7);
	basecommissionEmployee e2("roberto", 1.1, 0.5, 1000);
	commission* ptr1 = new commission("rocio", 1000, 0.7);
	basecommissionEmployee* ptr1 = new basecommissionEmployee("richel", 500, 0.1);

	for (commission* p : vec){
		cout << p→toString() << endl;
}
}