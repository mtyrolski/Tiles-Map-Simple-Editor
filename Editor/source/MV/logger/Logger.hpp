#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <chrono>
#include <ctime>

#include "MV/config/Config.hpp"

namespace mv
{
	class Logger
	{
		/* ===Objects=== */
	public:
		enum class STREAM
		{
			CONSOLE,
			FILE,
			BOTH
		};

		enum class TYPE
		{
			INFO,
			SUGGESTION,
			WARNING,
			ERROR
		};
	protected:
	private:
		/* ===Methods=== */
	public:
		static void Log( const std::string&, const Logger::STREAM& = Logger::STREAM::CONSOLE, const Logger::TYPE& = Logger::TYPE::ERROR );
	protected:
	private:

		static void sendMessage( const std::string& message, Logger::STREAM stream, std::string &prefix );

		static void consoleMessage( const std::string&message, std::string &prefix, std::time_t& time );

		static void fileMessage( const std::string&, std::string &prefix, std::time_t& time );

		static void setPrefix( Logger::TYPE type, std::string &prefix );
	};
}
