#pragma once

class Glass
{
public:
	Glass();
	Glass(float health);

	float GetHealth() const;
	void SetHealth(float health);
private:
	float m_health = 1.f;
};