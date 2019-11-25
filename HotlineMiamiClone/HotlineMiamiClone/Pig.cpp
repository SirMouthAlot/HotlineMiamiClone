#include "Pig.h"

Pig::Pig()
{
}

Pig::Pig(float health)
{
	SetHealth(health);
}

float Pig::GetHealth() const
{
	return m_health;
}

void Pig::SetHealth(float health)
{
	m_health = health;
}
