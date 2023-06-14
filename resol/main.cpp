#include <iostream>
#include "resol.h"
#include "base.h"
#include <vector>



int main() {
	CommissionEmployee e1("juan", 1.1, 0.7);
	BasePlusCommissionEmployee e2("roberto", 1.1, 0.5, 1000);
	CommissionEmployee* ptr1 = new CommissionEmployee("rocio", 1000, 0.7);
	BasePlusCommissionEmployee* ptr2 = new BasePlusCommissionEmployee("richel", 500, 0.1);
    
    std::vector <CommissionEmployee*> rec;
    rec.push_back(&e1);
    rec.push_back(&e2);
    rec.push_back(ptr1);
    rec.push_back(ptr2);
    delete ptr1;
    delete ptr2;
	for (CommissionEmployee *p:rec){
		std::cout << p->toString() << std::endl;
}

}