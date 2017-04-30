#pragma once

#include "MV/logger/Logger.hpp"
#include "MV/resourceCache/Cache.hpp"
#include "MV/loader/Loader.hpp"

namespace mv
{
	class TypesManager
	{
		/* ===Objects=== */
	public:
	protected:
	private:
		static TypesManager *instance;

		int ammountOfTiles;
		int ammountOfMobs;

		mv::Cache<sf::Texture> atlasCache;

		/* ===Methods=== */
	public:
		//Inits the program

		static TypesManager& getInstance();
		static void createInstance();

		void init();

		int getAmmountOfTypes();

		bool isTypeExist( int number );

		mv::Cache<sf::Texture>& getAtlasCache();
	protected:
	private:
		TypesManager();
		TypesManager( TypesManager const& copy ) = delete;            // Not Implemented
		TypesManager& operator=( TypesManager const& copy ) = delete; // Not Implemented
	};
}