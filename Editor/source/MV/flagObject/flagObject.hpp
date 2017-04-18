#pragma once

#include "SFML/Graphics/Texture.hpp"
#include "SFML/Graphics/Sprite.hpp"
#include "SFML/Graphics/RenderTarget.hpp"
#include "SFML/Graphics/RenderStates.hpp"
#include "SFML/Graphics/Drawable.hpp"

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
		/* ===Methods=== */
	public:
		void updatePosition( const sf::Vector2f& position );
		void updateType( int state );
		void updateTexture( sf::Texture& texture, TYPE type );

		TYPE getType()
		{
			return type;
		}

	protected:
	private:

		virtual void draw( sf::RenderTarget& target, sf::RenderStates states ) const;
	};
}