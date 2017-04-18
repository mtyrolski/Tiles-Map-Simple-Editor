#include "flagObject.hpp"

namespace mv
{

	void FlagObject::updatePosition( const sf::Vector2f& position )
	{
		object.setPosition( position );
	}

	void FlagObject::updateType( int state )
	{
		object.setTextureRect( sf::IntRect(state*object.getGlobalBounds().width,0,object.getGlobalBounds().width,object.getGlobalBounds().height) );
	}

	void FlagObject::updateTexture( sf::Texture & texture, TYPE objectType )
	{
		object.setTexture( texture );
		object.setTextureRect( sf::IntRect( 0,0,texture.getSize().y,texture.getSize().y ) );
		type = objectType;
		object.setOrigin( object.getGlobalBounds().width / 2.f, object.getGlobalBounds().height / 2.f );
	}

	void FlagObject::draw( sf::RenderTarget & target, sf::RenderStates states ) const
	{
		target.draw( object, states );
	}
}
	


