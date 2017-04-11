#include "Generator.hpp"

Generator::Generator(char rotateMode)
{
	generatorMode = rotateMode == '1' ? MODE::ROTATE : MODE::SIMPLE;
}

void Generator::generate(const std::string & path)
{
	switch (generatorMode)
	{
		case MODE::ROTATE:
		{
			generateWithRotation(path);
			break;
		}

		case MODE::SIMPLE:
		{
			generateWithoutRotation(path);
			break;
		}
	}
}

void Generator::generateWithRotation(const std::string & path)
{
	
}

void Generator::generateWithoutRotation(const std::string & path)
{
	std::ofstream output(path);

	for (auto&var : *mv::MapManager::getInstance().getCellStorage())
	{
		output << var.getState() << " ";

		if (var.getUnitPosition().x == mv::MapManager::getInstance().getUnitWorldSize().x - 1)
			output << std::endl;
	}
}
