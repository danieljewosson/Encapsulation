#include <iostream>
#include <string>
#include "encapsulation.h"

void Human::Print()
{
    std::cout << "Name: " << name << '\n';
    std::cout << "Health: " << health << '\n';
    std::cout << "Damage: " << damage << '\n';
}

std::string Human::GetName()
{
    return name;
}

void Human::SetName(const std::string name)
{
    this->name = name;
}

float Human::GetHealth()
{
    return health;
}

void Human::SetHealth(float health)
{
    this->health = health;
}


float Human::GetDamage()
{
    return damage;
}

void Human::SetDamage(float damage)
{
    this->damage = damage;
}

void SetHumanName(Human* human,const std::string name)
{
    human->SetName(name);
}

void SetHumanHealth(Human* human,float health)
{
    human->SetHealth(health);
}

void SetHumanDamage(Human* human,float damage)
{
    human->SetDamage(damage);
}

int System(Human* human)
{
    int choice;

    do
    {
        std::cout << "Select an option:\n" << std::endl;

        std::cout << "1 - Set name" << std::endl;
        std::cout << "2 - Set health" << std::endl;
        std::cout << "3 - Set damage" << std::endl;

        std::cout << "4 - Show all parameters" << std::endl;
        std::cout << "5 - Exit\n" << std::endl;

        std::cout << "Choose an option: ";

        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            std::string name;

            std::cout << "Enter name: ";
            std::cin >> name;

            SetHumanName(human,name);
            break;
        }

        case 2:
        {
            float health;

            std::cout << "Enter health: ";
            std::cin >> health;

            SetHumanHealth(human,health);
            break;
        }

        case 3:
        {
            float damage;

            std::cout << "Enter damage: ";
            std::cin >> damage;

            SetHumanDamage(human,damage);
            break;
        }

        case 4:
            human->Print();
            break;

        case 5:
            std::cout << "Bye bye" << std::endl;
            break;

        default:
            std::cout << "Invalid choice.Please try again." << std::endl;
            break;
        }

    } while (choice != 5);

    return 0;
}
