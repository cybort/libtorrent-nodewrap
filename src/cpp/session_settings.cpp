// include C
#include <libtorrent/session_settings.hpp>
#include <iostream>

#if defined(WIN32) || defined(_WIN32)
	#define EXPORT __declspec(dllexport)
#else
	#define EXPORT
#endif

using namespace libtorrent;

extern "C" {
	EXPORT void set_ban_web_seeds(session_settings *setting, bool isBan ) {
    	setting->ban_web_seeds = isBan;
	}

	EXPORT bool get_ban_web_seeds(session_settings *setting) {
    	return setting->ban_web_seeds;
	}
}