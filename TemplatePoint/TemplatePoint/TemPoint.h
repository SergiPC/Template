#ifndef __TEMPOINT_H__
#define __TEMPOINT_H__

template<class TYPE>
class TemPoint
{
public:
	TYPE x, y;

public:
	TemPoint& create(const TYPE& x, const TYPE y)
	{
		TYPE x = x;
		TYPE y = y;
	}

	TemPoint operator- (const TemPoint& p) const
	{
		TemPoint tmp;
		tmp.x = x - p.x;
		tmp.y = y - p.y;
		return(tmp);
	}

	TemPoint operator+ (const TemPoint& p) const
	{
		TemPoint tmp;
		tmp.x = x + p.x;
		tmp.y = y + p.y;
		return(tmp);
	}

	TemPoint& operator+= (const TemPoint& p)
	{
		x += p.x;
		y += p.y;
		return(*this);
	}

	TemPoint& operator-= (const TemPoint& p)
	{
		x -= p.x;
		y -= p.y;
		return(*this);
	}

	bool operator== (const TemPoint& p) const
	{
		return(x == p.x && y == p.y);
	}

	bool operator!= (const TemPoint& p) const
	{
		return(x != p.x || y != p.y);
	}

	bool isZero()
	{
		return(x == 0.0f && y == 0.0f);
	}

	void setZero()
	{
		x = y = 0.0f;
	}

	TYPE distanceTo(TemPoint p)
	{
		TYPE dx = p.x - x, dy = p.y - y;
		return(sqrt(dx*dx + dy*dy));
	}
};
#endif