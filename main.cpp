#include <iostream>
#include <"Pila.cpp">
#include <"Coda.cpp">

int main() {
    Pila pila;

    pila.push(7);
    pila.push(14);
    pila.push(21);

    std::cout << "Primo elemento della pila: " << pila.top() << std::endl;

    pila.pop();
    pila.pop();

    std::cout << "Elemento in cima dopo due pop: " << pila.top() << std::endl;

    std::cout << "La pila è vuota? " << (pila.isEmpty() ? "Sì" : "No") << std::endl;

    Coda coda;

    coda.enqueue(7);
    coda.enqueue(14);
    coda.enqueue(21);

    std::cout << "Prima elemento della coda: " << coda.front() << std::endl;

    coda.dequeue();
    coda.dequeue();

    std::cout << "Elemento in testa  dopo due dequeue: " << coda.front() << std::endl;

    std::cout << "La coda è vuota? " << (coda.isEmpty() ? "Sì" : "No") << std::endl;

    return 0;
}
