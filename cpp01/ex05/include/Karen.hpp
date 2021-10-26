#ifndef _KAREN_HPP_
#define _KAREN_HPP_

#include <string>
#include <iostream>

// enum func_code
// {
// 	eDebug,
// 	eInfo,
// 	eWarning,
// 	eError
// };

class Karen
{
	public:
			Karen();
			~Karen();
			void complain( std::string level );

	private:
			void debug( void );
			void info( void );
			void warning( void );
			void error( void );
};

#endif //_KAREN_HPP_