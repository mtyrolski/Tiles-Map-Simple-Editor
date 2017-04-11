#include "Cell.hpp"

namespace mv
{
	void Cell::draw(sf::RenderTarget & target, sf::RenderStates states) const
	{
		target.draw(object, states);
	}

	void Cell::setBasicParameters(int stateNumber, sf::Vector2f & cellDimensions, sf::Vector2i & uPos)
	{
		if (!TypesManager::getInstance().isTypeExist(stateNumber))
		{
			Logger::Log(constants::error::stateSystem::STATE_DOES_NOT_EXIST, Logger::STREAM::BOTH, Logger::TYPE::ERROR);
			state = 0; //empty in future
		}
		else
		{
			state = stateNumber;
		}
	}

	/*void Cell::setBasicParameters(const std::string& name, sf::Vector2f & cellDimensions, sf::Vector2i & uPos)
	{
		if (!StateSystem::isStateExist(name))
		{
			Logger::Log(constants::error::stateSystem::STATE_DOES_NOT_EXIST, Logger::STREAM::BOTH, Logger::TYPE::ERROR);
			state = StateSystem::getNumberOfState(constants::defaults::EMPTY);
		}
		else
		{
			state = StateSystem::getNumberOfState(name);
		}
	}*/

	void Cell::setVisualSettings(sf::Vector2f & cellDimensions, sf::Vector2i & uPos)
	{
		object.setPosition(uPos.x*cellDimensions.x, uPos.y*cellDimensions.y);
	}



	/*Cell::Cell(sf::Vector2i& uPos, sf::Vector2f& cellDimensions, const std::string& stateName)
		:unitPosition(uPos), lastClickTime(clock()),nextState(0)
	{
		setBasicParameters(stateName,cellDimensions,uPos);
	}*/

	Cell::Cell(sf::Vector2i & uPos, sf::Vector2f & cellDimensions, int stateNumber)
		:unitPosition(uPos),lastClickTime(clock()), nextState(0)
	{
		setBasicParameters(stateNumber,cellDimensions,uPos);
	}

	void Cell::changeState(int shift)
	{
		nextState = state + shift;
		nextState %= TypesManager::getInstance().getAmmountOfTypes();
	}

	void Cell::changeState()
	{
		if ((clock() - lastClickTime) / CLOCKS_PER_SEC > constants::mouse::FREQUENCY)
		{
			changeState(1);
			lastClickTime = clock();
		}	
	}

	uint8_t Cell::getState() const
	{
		return state;
	}


	bool Cell::setState(uint8_t stateNumber)
	{
		if (TypesManager::getInstance().isTypeExist(stateNumber))
		{
			state = stateNumber;
			return true;
		}
		else Logger::Log(constants::error::stateSystem::NUMBER_HAS_NOT_FOUND,Logger::STREAM::BOTH,Logger::TYPE::ERROR);

		return false;
	}

	void Cell::update()
	{
		state = nextState;
	}
}