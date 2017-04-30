#pragma once

#include <fstream>
#include <string>

#include <SFML/System/Vector2.hpp>

#include "MV/config/Config.hpp"
#include "MV/logger/Logger.hpp"

namespace mv
{
	class Loader final
	{
		/* ===Objects=== */
	public:
		//title of the window
		std::string title;

		//dimensions of single cell
		sf::Vector2f cellDimensions;

		sf::Vector2i UnitMapSize;

		char rotateMode;

	protected:
	private:
		static Loader* instance;

		/* ===Methods=== */
	public:
		static Loader& getInstance();
		static void createInstance();

		//Loads data from file
		//title
		//dimensions
		void loadData();
	protected:
	private:
		Loader() = default;
		Loader( Loader const& copy ) = delete;            // Not Implemented
		Loader& operator=( Loader const& copy ) = delete; // Not Implemented
	};
}
