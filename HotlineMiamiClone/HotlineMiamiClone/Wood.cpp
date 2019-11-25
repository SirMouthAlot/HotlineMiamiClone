#include "Wood.h"

Wood::Wood()
{
}

Wood::Wood(float health)
{
	SetHealth(health);
}

float Wood::GetHealth() const
{
	return m_health;
}

void Wood::SetHealth(float health)
{
	m_health = health;
}
