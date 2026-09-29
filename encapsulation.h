#ifndef ENCAPSULATION
#define ENCAPSULATION
#include<iostream>
#include<string>

class Human
{
public:

    void Print();

   
    std::string GetName();
    void SetName(const std::string name);

    float GetHealth();
    void SetHealth(float health);

    float GetDamage();
    void SetDamage(float damage);

private:

	std::string name;
	float health = 0.0f;
	float damage = 0.0f;

};

void SetHumanName(Human* human,const std::string name);
void SetHumanHealth(Human* human,float health);
void SetHumanDamage(Human* human,float damage);

int System(Human* human);

#endif 

