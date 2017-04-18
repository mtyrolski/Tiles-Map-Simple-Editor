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
		auto cellAtlasTexture = atlasCache.get( "data/textures/cellAtlas.png" );
		ammountOfTiles = cellAtlasTexture->getSize().x / cellAtlasTexture->getSize().y;
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
		return atlasCache;
	}

	TypesManager::TypesManager()
	{
		init();
	}


}
