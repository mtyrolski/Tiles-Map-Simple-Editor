#pragma once

#include <fstream>

#include "MV/loader/Loader.hpp"
#include "MV/mapManager/MapManager.hpp"

class Generator
{
public:
protected:
private:
	enum class MODE
	{
		SIMPLE,
		ROTATE
	};

	MODE generatorMode;
	/* ===Methods=== */
public:
	Generator(char rotateMode);

	void generate(const std::string& path);
protected:
private:
	void generateWithRotation(const std::string & path);
	void generateWithoutRotation(const std::string & path);
};