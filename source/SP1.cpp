#include "SP1.h"
#include <iomanip>

void ejercicio_1() {
    // define and init variables
    float quantity = 0;
    float price = 0;
    float total = 0;
    // input
    cin >> quantity >> price;
    // evaluate
    total = quantity * price;
    if (quantity > 1000)
        total *= 0.6f;
    else if (quantity > 250)
        total *= 0.8f;
    else if (quantity > 100)
        total *= 0.9f;
    // show result
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    cout << "El pago por la compra es: " << total << " Soles";
}

void ejercicio_2() {
    // define and init variables
    float a = 0;
    float b = 0;
    float c = 0;
    // input
    cin >> a >> b >> c;
    // validate and output
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            cout << "El Triangulo valido es equilatero";
        else if (a == b || b == c || a == c)
            cout << "El triangulo valido es isosceles";
        else
            cout << "El triangulo valido es escalar";
    }
    else
        cout << "No es triangulo valido";
}
