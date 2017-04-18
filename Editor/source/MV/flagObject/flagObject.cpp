#include "flagObject.hpp"

namespace mv
{
	void FlagObject::updatePosition( const sf::Vector2f& position )
	{
		object.setPosition( position );
	}

	void FlagObject::updateType( int state )
	{
		object.setTextureRect( {state*object.getGlobalBounds().width,0,object.getGlobalBounds().width,object.getGlobalBounds().height} );
	}

	void FlagObject::updateTexture( sf::Texture & texture, TYPE objectType )
	{
		object.setTexture( texture );
		object.setTextureRect( { 0,0,texture.getSize().y,texture.getSize().y } );
		type = objectType;
	}

	void FlagObject::draw( sf::RenderTarget & target, sf::RenderStates states ) const
	{
		target.draw( object, states );
	}
}
	


