#pragma once

class Bird
{
public:
	Bird();
	Bird(float health);

	float GetHealth() const;
	void SetHealth(float health);

private:
	float m_health = 1.f;
};