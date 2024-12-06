#include <iostream>
#include <vector>

template <typename T>
class Coda {
private:
    std::vector<T> coda;  // Vettore elementi della coda

public:
    // aggiunge un elemento alla fine della coda (enqueue)
    void enqueue(T elem) {
        coda.push_back(elem); 
        std::cout << elem << " aggiunto alla coda." << std::endl;
    }

    // rimuove un elemento dalla testa della coda (dequeue)
    void dequeue() {
        if (!isEmpty()) {
            T valore = coda.front();  
            coda.erase(coda.begin()); 
            std::cout << valore << " rimosso dalla coda." << std::endl;
        } else {
            std::cout << "La coda è vuota. Impossibile rimuovere un elemento." << std::endl;
        }
    }

    // ottenere l'elemento in testa 
    T front() {
        if (!isEmpty()) {
            return coda.front();  
            
            std::cout << "La coda è vuota." << std::endl;
            return T();  //valore di default
        }
    }

    // verifica se vuota
    bool isEmpty() {
        return coda.empty();  // true se vuoto
    }

    // verifica il size della coda
    int size() {
        return coda.size();  // n elementi nella coda
    }
};
