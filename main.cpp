#include <iostream>

const int N_ELEMENTS = 100; 

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa\n"; 
    for (int i = 0;i < N_ELEMENTS;i++) 
    {
        b[i] = (i+1) * 2; , 
    }
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        std::cout << "Ertek:"<<b[i]<<"\n";
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag=0; 
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];// hiányzó ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "P.S.:Buddy from paris"
    return 0;
}
