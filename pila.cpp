#include <iostream>
#include <vector>

template <typename T>
class Pila {
private:
    std::vector<T> pila;  // Vettore che memorizza gli elementi della pila

public:
    //aggiunge un elemento alla pila (push)
    void push(T elem) {
        pila.push_back(elem);  // Aggiunge l'elemento alla fine del vettore (cima della pila)
        std::cout << elem << " aggiunto alla pila." << std::endl;
    }

    //rimuovere un elemento dalla pila (pop)
    void pop() {
        if (!isEmpty()) {
            T valore = pila.back();  
            pila.pop_back();         
            std::cout << valore << " rimosso dalla pila." << std::endl;
        } else {
            std::cout << "La pila è vuota. Non è piu possibile rimuovere un elemento." << std::endl;
        }
    }

    // ottenere l'elemento in cima 
    T top() {
        if (!isEmpty()) {
            return pila.back();  
        } else {
            std::cout << "La pila è vuota." << std::endl;
            return T();  // valore di default
        }
    }

    // verifica pila vuota
    bool isEmpty() {
        return pila.empty();  // true se vuoto
    }

    // verifica size della pila
    int size() {
        return pila.size();  // n elementi pila
    }
  
