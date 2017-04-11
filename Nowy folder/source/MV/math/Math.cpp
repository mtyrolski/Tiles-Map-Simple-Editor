#include "Math.hpp"


namespace mv
{
	sf::Vector2i Math::convertToUnitPosition(sf::Vector2f pixelPosition)
	{
		pixelPosition.x /= MapManager::getInstance().getCellDimensions().x;
		pixelPosition.y /= MapManager::getInstance().getCellDimensions().y;

		return sf::Vector2i(pixelPosition.x,pixelPosition.y);
	}

	sf::Vector2i Math::convertToUnitPosition(float x, float y)
	{
		return convertToUnitPosition(sf::Vector2f(x,y));
	}
}
