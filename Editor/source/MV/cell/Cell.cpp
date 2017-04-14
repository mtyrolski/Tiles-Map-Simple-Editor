#include "Cell.hpp"
namespace mv
{
	void Cell::draw(sf::RenderTarget & target, sf::RenderStates states) const
	{
		target.draw(*dynamic_cast<sf::Sprite*>(object), states);
	}

	void Cell::setBasicParameters(int stateNumber, sf::Vector2f & cellDimensions, sf::Vector2i & uPos)
	{
		dynamic_cast<sf::Sprite*>(object)->setTexture(mv::TypesManager::getInstance().textureAtlasCache.get("data/textures/cellAtlas.png"));

		if (!TypesManager::getInstance().isTypeExist(stateNumber))
		{
			Logger::Log(constants::error::stateSystem::STATE_DOES_NOT_EXIST, Logger::STREAM::BOTH, Logger::TYPE::ERROR);
			state = constants::defaults::DEFAULT_STATE_NUMBER;
		}
		else
		{
			state = stateNumber;
			dynamic_cast<sf::Sprite*>(object)->setTextureRect(sf::IntRect(stateNumber*cellDimensions.x, 0, cellDimensions.x, cellDimensions.y));
		}
		dynamic_cast<sf::Sprite*>(object)->setPosition(unitPosition.x*cellDimensions.x, unitPosition.y*cellDimensions.y);
		dynamic_cast<sf::Sprite*>(object)->setOrigin( dynamic_cast<sf::Sprite*>(object)->getGlobalBounds().width / 2, dynamic_cast<sf::Sprite*>(object)->getGlobalBounds().height / 2);
	}

	void Cell::setVisualSettings(sf::Vector2f & cellDimensions, sf::Vector2i & uPos)
	{
		dynamic_cast<sf::Sprite*>(object)->setPosition(uPos.x*cellDimensions.x, uPos.y*cellDimensions.y);
	}

	Cell::Cell(sf::Vector2i & uPos, sf::Vector2f & cellDimensions, int stateNumber)
		:unitPosition(uPos),lastActionTime(clock()), nextState(stateNumber)
	{
		object = new sf::Sprite();
		setBasicParameters(stateNumber,cellDimensions,uPos);
	}

	void Cell::changeState(int shift)
	{
		if ((clock() - lastActionTime) / CLOCKS_PER_SEC > constants::mouse::FREQUENCY)
		{
			nextState = state + shift;

			if (nextState < 0)
				nextState = TypesManager::getInstance().getAmmountOfTypes() - 1;
			else
				nextState %= TypesManager::getInstance().getAmmountOfTypes();

			lastActionTime = clock();
		}
	}

	int Cell::getState() const
	{
		return state;
	}


	bool Cell::setState(uint8_t stateNumber)
	{
		if (TypesManager::getInstance().isTypeExist(stateNumber))
		{
			nextState = stateNumber;
			auto cellDimensions = Loader::getInstance().cellDimensions;
			dynamic_cast<sf::Sprite*>(object)->setTextureRect(sf::IntRect(stateNumber*cellDimensions.x, 0, cellDimensions.x, cellDimensions.y));

			return true;
		}
		else Logger::Log(constants::error::stateSystem::NUMBER_HAS_NOT_FOUND,Logger::STREAM::BOTH,Logger::TYPE::ERROR);

		return false;
	}

	void Cell::update()
	{
		state = nextState;

		auto cellDimensions = Loader::getInstance().cellDimensions;
		dynamic_cast<sf::Sprite*>(object)->setTextureRect(sf::IntRect(state*cellDimensions.x, 0, cellDimensions.x, cellDimensions.y));
	}

	const sf::Vector2i & Cell::getUnitPosition()
	{
		return unitPosition;
	}

	void Cell::rotate()
	{
		if ((clock() - lastActionTime) / CLOCKS_PER_SEC > constants::mouse::FREQUENCY)
		{
			dynamic_cast<sf::Sprite*>(object)->rotate(mv::constants::cell::STRAIGHT_ANGLE);
			lastActionTime = clock();
		}
	}

	int Cell::getRotationState()
	{
		return dynamic_cast<sf::Sprite*>(object)->getRotation() / 90;
	}
}