#include <iostream>
using namespace std;
int main() {
    int Alex;

   cout << "Ingrese un valor: ";
   cin >>Alex;

    if (Alex <= 10) {
        std::cout << "<=10 = Es menor a 10" << std::endl;
    } else if (Alex <= 20) {
        std::cout << "<=20 = Es menor a 20" << std::endl;
    } else if (Alex <= 30) {
        std::cout << "<=30 = Es menor a 30" << std::endl;
    } else {
        std::cout << "31 en adelante = es mayor a 30" << std::endl;
    }

    return 0;
}
