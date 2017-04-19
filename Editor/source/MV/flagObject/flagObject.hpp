#pragma once

#include <ctime>

#include "SFML/Graphics/Texture.hpp"
#include "SFML/Graphics/Sprite.hpp"
#include "SFML/Graphics/RenderTarget.hpp"
#include "SFML/Graphics/RenderStates.hpp"
#include "SFML/Graphics/Drawable.hpp"

#include "MV/InputManager/InputManager.hpp"
#include "MV/logger/Logger.hpp"

namespace mv
{
	class FlagObject : public sf::Drawable
	{
		/* ===Objects=== */
	public:

		enum class TYPE
		{
			CELL,
			ORDINARY
		};

	protected:
	private:
		sf::Sprite object;
		TYPE type;
		InputManager inputManager;
		bool visible;
		static FlagObject *instance;
		float lastClick;

		/* ===Methods=== */
	public:

		static FlagObject& getInstance();
		static void createInstance();

		void updatePosition( const sf::Vector2f& position );
		void updateType( int state );
		void updateTexture( sf::Texture& texture, TYPE type );

		TYPE getType()
		{
			return type;
		}

		void changeVisible();

	protected:
	private:

		FlagObject();
		FlagObject( FlagObject const& copy ) = delete;            // Not Implemented
		FlagObject& operator=( FlagObject const& copy ) = delete; // Not Implemented

		virtual void draw( sf::RenderTarget& target, sf::RenderStates states ) const;
	};
}