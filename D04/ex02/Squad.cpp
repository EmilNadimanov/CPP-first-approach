#include "Squad.hpp"

				Squad::Squad()
{
	this->count = 0;
	crew = new ISpaceMarine*[1];
	crew[0] = NULL;
}

				Squad::Squad(Squad const& obj)
{
	delete[] crew;
	crew = new ISpaceMarine*[obj.getCount()];
	for (int i = 0; i < obj.getCount(); i++)
		crew[i] = obj.crew[i];
}

void			Squad::operator=(Squad const& obj)
{
	delete[] crew;
	crew = new ISpaceMarine*[obj.getCount()];
	for (int i = 0; i < obj.getCount(); i++)
		crew[i] = obj.crew[i];
}

				Squad::~Squad()
{
	for (int i = 0; i < this->count; i++)
	{
		delete crew[i];
	}
}

int				Squad::getCount() const
{
	return this->count;
}

ISpaceMarine*	Squad::getUnit(int num) const
{
	return crew[num];
}

int				Squad::push(ISpaceMarine* dude)
{
	if (!dude)
		return this->count;
	for (int i = 0; i < this->count; i++)
		if (crew[i] == dude)
			return this->count;
	ISpaceMarine **tmpcrew = new ISpaceMarine*[this->count + 1];
	for (int i = 0; i < this->count; i++)
	{
		tmpcrew[i] = crew[i];
		crew[i] = NULL;
	}
	delete[] crew;
	crew = new ISpaceMarine*[this->count + 1];
	for (int i = 0; i < this->count + 1; i++)
	{
		crew[i] = tmpcrew[i];
		tmpcrew[i] = NULL;
	}
	crew[this->count] = dude;
	delete[] tmpcrew;
	return ++this->count;
}
