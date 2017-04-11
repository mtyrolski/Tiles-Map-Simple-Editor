#include "TypesManager.hpp"

namespace mv
{
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

}
