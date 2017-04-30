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
		:visibleFlag( true ), lastClickTimePoint( clock() )
	{
		inputManager.addKeyToCheck( sf::Keyboard::V, []() { mv::FlagObject::getInstance().changeVisible(); } );
	}

	void FlagObject::updatePosition( const sf::Vector2f& position )
	{
		object.setPosition( position );
	}

	void FlagObject::updateType( int state )
	{
		object.setTextureRect( sf::IntRect( state*object.getGlobalBounds().width, 0, object.getGlobalBounds().width, object.getGlobalBounds().height ) );
	}

	void FlagObject::updateTexture( sf::Texture & texture )
	{
		object.setTexture( texture );
		object.setTextureRect( sf::IntRect( 0, 0, texture.getSize().y, texture.getSize().y ) );
		object.setOrigin( object.getGlobalBounds().width / 2.f, object.getGlobalBounds().height / 2.f );
	}

	void FlagObject::changeVisible()
	{
		if ( (clock() - lastClickTimePoint) / CLOCKS_PER_SEC > constants::mouse::FREQUENCY )
		{
			visibleFlag = !visibleFlag;
			lastClickTimePoint = clock();
		}
	}

	void FlagObject::draw( sf::RenderTarget & target, sf::RenderStates states ) const
	{
		if ( visibleFlag )
		{
			target.draw( object, states );
		}

	}
}



