#include <iostream>

constexpr int N_ELEMENTS = 100; 

int main()
{
    int *b = new int[NELEMENTS];// hiábs konstans név
    std::cout << '1-100 ertekek duplazasa' // nincs ;, ' ' helyett " ", végén legyen új sor "\n".
    for (int i = 0;) // for ciklus paraméterei hibásak
    {
        b[i] = i * 2; // 0-99-ig számol és nem 1-100-ig, 
    }
    for (int i = 0; i; i++) // nem i-ig kell számolni hanem N_ELEMENTS-ig
    {
        std::cout << "Ertek:"//"\n" hozzáadása a jobb átláthatóság miatt, nem kapunk értéket.
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // int helyett double, kezdőérék megadása
    for (int i = 0; i < N_ELEMENTS, i++)// rossz elválasztás
    {
        atlag += b[i]// hiányzó ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
