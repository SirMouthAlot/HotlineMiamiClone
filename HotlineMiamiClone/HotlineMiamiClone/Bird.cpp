#include "Bird.h"

Bird::Bird()
{
}

Bird::Bird(float health)
{
	SetHealth(health);
}

float Bird::GetHealth() const
{
	return m_health;
}

void Bird::SetHealth(float health)
{
	m_health = health;
}
