#ifndef _I_GAME_ENTITY_HPP_
# define _I_GAME_ENTITY_HPP_

class I_GameEntity
{
protected:
	int 	x, y;
	char	direction,
			symbol;
public:
							I_GameEntity() {}
	virtual					~I_GameEntity() {}
	virtual char			action() =0;
	virtual bool			collide(char c) =0;
};

#endif
