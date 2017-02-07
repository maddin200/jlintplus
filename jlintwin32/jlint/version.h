#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "07";
	static const char MONTH[] = "02";
	static const char YEAR[] = "2017";
	static const char UBUNTU_VERSION_STYLE[] =  "17.02";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 3;
	static const long MINOR  = 1;
	static const long BUILD  = 4;
	static const long REVISION  = 2;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 27;
	#define RC_FILEVERSION 3,1,4,2
	#define RC_FILEVERSION_STRING "3, 1, 4, 2\0"
	static const char FULLVERSION_STRING [] = "3.1.4.2";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 0;
	

}
#endif //VERSION_H
