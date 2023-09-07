#include <iostream>

#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"

int main()
{
    setlocale(LC_ALL, "");
    Snack* bounty = new Snack("Bounty");
    std::cout << "Получили снек: " << bounty->getName() << "\n";
    Snack* snickers = new Snack("Snickers");
    std::cout << "Получили снек: " << snickers->getName() << "\n";
    SnackSlot* slot = new SnackSlot(3); /*количество батончиков, которые помещаются в слот*/
    slot->addSnack(bounty); //Добавляем батончик в слот  
    slot->addSnack(snickers);
    slot->show();
    std::cout << "Введите количество слотов в вендинговом аппарате:" << "\n";
    size_t slotCount;       
    std::cin >> slotCount;  //задаем количество слотов в машине
    VendingMachine* machine = new VendingMachine(slotCount);  /*Количество слотов для снеков*/
    machine->addSlot(slot); // Помещаем слот обратно в аппарат
    std::cout << "Свободных слотов в вендинговом аппарате: " << machine->getEmptySlotsCount() << std:: endl; // Должно выводить количество пустых слотов для снеков
    machine->show();
    delete machine;
    delete slot;
    delete snickers;
    delete bounty;
}


