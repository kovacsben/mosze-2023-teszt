#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //el van írva
    std::cout << '1-100 ertekek duplazasa' // ; hiányzik , rossz aposztróf " ez kell
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // nem i ig megy a for ciuklus
    {
        std::cout << "Ertek:" // ; hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ; kell
    {
        atlag += b[i] // ; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
