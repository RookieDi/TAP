#include "Banca.h"
#include <iostream>
#include <vector>

int main() {
     Banca banca1;
    Banca banca2;

    // Setare cod pentru banci
    banca1.setCodBanca("BC123");
    banca2.setCodBanca("BC456");

    // Creare obiecte Client
    Client client1;
    Client client2;

    // Setare detalii pentru clienti
    client1.setNume("Popescu");
    client1.setPrenume("Ion");
    client1.setAdresa("Str. Primaverii, Nr. 1");
    client1.setNrConturi(2); // Clientul 1 va avea 2 conturi

    client2.setNume("Ionescu");
    client2.setPrenume("Maria");
    client2.setAdresa("Str. Libertatii, Nr. 10");
    client2.setNrConturi(2); // Clientul 2 va avea 2 conturi

    // Creare obiecte ContBancar pentru primul client
    ContBancar contRonClient1;
    ContBancar contEuroClient1;

    // Setare detalii pentru conturile primului client
    contRonClient1.setNumarCont("RO01");
    contRonClient1.setMoneda("RON");
    contRonClient1.setSuma(1000);

    contEuroClient1.setNumarCont("EU01");
    contEuroClient1.setMoneda("EUR");
    contEuroClient1.setSuma(500);

    // Adăugare conturi pentru primul client
    std::vector<ContBancar> conturiClient1;
    conturiClient1.push_back(contRonClient1);
    conturiClient1.push_back(contEuroClient1);
    client1.setConturi(conturiClient1);

    // Creare obiecte ContBancar pentru al doilea client
    ContBancar contRonClient2;
    ContBancar contLeiClient2;

    // Setare detalii pentru conturile celui de-al doilea client
    contRonClient2.setNumarCont("RO02");
    contRonClient2.setMoneda("RON");
    contRonClient2.setSuma(2000);

    contLeiClient2.setNumarCont("RO03");
    contLeiClient2.setMoneda("RON");
    contLeiClient2.setSuma(1500);

    // Adăugare conturi pentru al doilea client
    std::vector<ContBancar> conturiClient2;
    conturiClient2.push_back(contRonClient2);
    conturiClient2.push_back(contLeiClient2);
    client2.setConturi(conturiClient2);

    // Restul operațiilor cu obiectele create pot fi efectuate aici

    return 0;
}