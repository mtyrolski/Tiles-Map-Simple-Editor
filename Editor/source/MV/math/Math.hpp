#pragma once

#include "SFML/System/Vector2.hpp"

#include "MV/mapManager/MapManager.hpp"

namespace mv
{
	class Math
	{
		/* ===Objects=== */
	public:
	protected:
	private:
		/* ===Methods=== */
	public:
		static sf::Vector2i convertToUnitPosition(sf::Vector2f pixelPosition);
		static sf::Vector2i convertToUnitPosition(float x, float y);
	protected:
	private:
	};
}