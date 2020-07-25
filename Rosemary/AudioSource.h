#pragma once
#include <windows.h>
#include <stdio.h>
#include <string>

namespace rm {

	 class AudioSource {

	public:
		void PlayNote(std::string note, int duration);
		void PlayAlertSound(); 
	};


}
