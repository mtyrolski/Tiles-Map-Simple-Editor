#include "TypesManager.hpp"

namespace mv
{
	TypesManager* TypesManager::instance = nullptr;

	TypesManager & TypesManager::getInstance()
	{
		if (instance == nullptr)
			Logger::Log(constants::error::singleton::SINGLETON_NOT_INITED, Logger::STREAM::BOTH, Logger::TYPE::ERROR);

		return *instance;
	}

	void TypesManager::createInstance()
	{
		if (instance == nullptr)
			instance = new TypesManager();
	}

	void TypesManager::init()
	{
		auto cellAtlas = textureAtlasCache.get( "data/textures/cellAtlas.png" );
		ammountOfTiles = cellAtlas->getSize().x / cellAtlas->getSize().y;

		auto mobAtlas = textureAtlasCache.get( "data/textures/mobAtlas.png" );
		ammountOfMobs = mobAtlas->getSize().x / mobAtlas->getSize().y;
	}

	int TypesManager::getAmmountOfTypes()
	{
		return ammountOfTiles;
	}

	bool TypesManager::isTypeExist(int number)
	{
		return number >= 0 && number < ammountOfTiles;
	}

	mv::Cache<sf::Texture>& TypesManager::getAtlasCache()
	{
		return textureAtlasCache;
	}

	TypesManager::TypesManager()
	{
		init();
	}


}
