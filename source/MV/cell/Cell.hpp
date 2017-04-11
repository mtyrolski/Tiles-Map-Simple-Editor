#pragma once

#include <ctime>

#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

#include "MV/logger/Logger.hpp"
#include "MV/config/Config.hpp"
#include "MV/typesManager/TypesManager.hpp"

namespace mv
{
	class Cell : public sf::Drawable
	{
		/* ===Objects=== */
	public:
	protected:
	private:
		//Shape of cell
		sf::Sprite object;

		//State of cell
		int state;

		//State of cell in next cycle
		int nextState;

		//Position in unit system
		const sf::Vector2i unitPosition;

		float lastClickTime;

		/* ===Methods=== */
	public:

		Cell(sf::Vector2i& uPos, sf::Vector2f& cellDimensions, const std::string& stateName);
		Cell(sf::Vector2i& uPos, sf::Vector2f& cellDimensions, int stateNumber);

		//Change state for given shift
		void changeState(int shift);

		//Returns number of state
		int getState() const;

		//Change cell's state to given number
		//returns false if state hasn't been changed
		//returns true if state has been changed
		bool setState(uint8_t stateNumber);

		//Updates cell state to next state
		void update();;

		//return position in unit system
		const sf::Vector2i& getUnitPosition();

	protected:
	private:
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

		void setBasicParameters(int stateNumber, sf::Vector2f& cellDimensions, sf::Vector2i& uPos);
		void setBasicParameters(const std::string& name, sf::Vector2f& cellDimensions, sf::Vector2i& uPos);

		void setVisualSettings(sf::Vector2f& cellDimensions, sf::Vector2i& uPos);
	};
}
