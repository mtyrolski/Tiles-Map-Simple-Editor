#include "flagObject.hpp"

namespace mv
{
	FlagObject* FlagObject::instance;

	FlagObject & FlagObject::getInstance()
	{
		if ( instance == nullptr )
			Logger::Log( constants::error::singleton::SINGLETON_NOT_INITED, Logger::STREAM::BOTH, Logger::TYPE::ERROR );

		return *instance;
	}

	void FlagObject::createInstance()
	{
		if ( instance == nullptr )
			instance = new FlagObject();
	}

	FlagObject::FlagObject()
		:visible(true),lastClick(clock())
	{
		inputManager.addKeyToCheck( sf::Keyboard::V, []() { mv::FlagObject::getInstance().changeVisible(); } );
	}

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

	void FlagObject::changeVisible()
	{
		if ( (clock() - lastClick) / CLOCKS_PER_SEC > constants::mouse::FREQUENCY )
		{
			visible = !visible;
			lastClick = clock();
		}
	}

	void FlagObject::draw( sf::RenderTarget & target, sf::RenderStates states ) const
	{
		if ( visible )
		{
			target.draw( object, states );
		}
			
	}
}
	


