#include "Initializator.hpp"


namespace mv
{
	Initializator* Initializator::instance;

	void Initializator::init()
	{
		loadPropeties();
		initObjects();	
	}

	Initializator & Initializator::getInstance()
	{
		if (instance == nullptr)
			Logger::Log(constants::error::singleton::SINGLETON_NOT_INITED, Logger::STREAM::BOTH, Logger::TYPE::ERROR);
		
		return *instance;
	}

	void Initializator::createInstance()
	{
		if (instance == nullptr)
			instance = new Initializator();
	}
	void Initializator::initObjects()
	{
		mv::MapManager::createInstance(mv::Loader::getInstance().UnitMapSize, mv::Loader::getInstance().cellDimensions);
		mv::MapManager::getInstance().constructWholeWorld(mv::constants::defaults::EMPTY);

		mv::Scene::createInstance(mv::Loader::getInstance().title, sf::Vector2f(mv::Loader::getInstance().UnitMapSize.x*mv::Loader::getInstance().cellDimensions.x, mv::Loader::getInstance().UnitMapSize.y*mv::Loader::getInstance().cellDimensions.y));

		mv::EventControl::createInstance(&mv::Scene::getInstance());

		mv::StatementSystem::createInstance();

		mv::Mouse::createInstance();
	}

	void Initializator::loadPropeties()
	{
		mv::Loader::createInstance();
		mv::Loader::getInstance().loadData();
	}
}

