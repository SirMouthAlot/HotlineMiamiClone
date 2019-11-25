#pragma once

class Wood
{
public:
	Wood();
	Wood(float health);

	float GetHealth() const;
	void SetHealth(float health);
private:
	float m_health = 1.f;
};