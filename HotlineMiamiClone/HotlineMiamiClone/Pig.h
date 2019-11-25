#pragma once

class Pig
{
public:
	Pig();
	Pig(float health);

	float GetHealth() const;
	void SetHealth(float health);

private:
	float m_health = 1.f;
};