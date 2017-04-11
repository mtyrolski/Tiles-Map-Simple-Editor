#pragma once

#include "MV/logger/Logger.hpp"
#include "MV/resourceCache/Cache.hpp"

namespace mv
{
	class TypesManager
	{
		/* ===Objects=== */
	public:
		mv::Cache<sf::Texture> textureAtlasCache;
	protected:
	private:
		static TypesManager *instance;
		/* ===Methods=== */
	public:
		//Inits the program

		static TypesManager& getInstance();
		static void createInstance();
	protected:
	private:
		TypesManager() = default;
		TypesManager(TypesManager const& copy) = delete;            // Not Implemented
		TypesManager& operator=(TypesManager const& copy) = delete; // Not Implemented
	};
}