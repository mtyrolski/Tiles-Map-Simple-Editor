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
		ammountOfTiles = textureAtlasCache.get("data/textures/cellAtlas.png").getSize().x / Loader::getInstance().cellDimensions.x;
	}

	int TypesManager::getAmmountOfTypes()
	{
		return ammountOfTiles;
	}

	bool TypesManager::isTypeExist(int number)
	{
		return number >= 0 && number < ammountOfTiles;
	}

	TypesManager::TypesManager()
	{
		init();
	}


}
