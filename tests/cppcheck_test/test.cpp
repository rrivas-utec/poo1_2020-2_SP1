#include "source/SP1.h"
#include "source/redirect_io.h"

int main() {
    try {
        redirect_io rio;
        ejercicio_1();
        ejercicio_2();
    }
    catch (const exception &e) {
        cout << "ERROR: " << e.what();
    }
    return 0;
}
