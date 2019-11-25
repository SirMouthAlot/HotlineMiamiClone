#include "Glass.h"

Glass::Glass()
{
}

Glass::Glass(float health)
{
	SetHealth(health);
}

float Glass::GetHealth() const
{
	return m_health;
}

void Glass::SetHealth(float health)
{
	m_health = health;
}
