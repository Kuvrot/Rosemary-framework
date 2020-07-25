#include "AudioSource.h"

void rm::AudioSource::PlayNote(std::string note , int duration) {

	if (note == "C3")
		Beep(130.81, duration);
	if (note == "C#3")
		Beep(138.59, duration);
	if (note == "D3")
		Beep(146.83, duration);
	if (note == "D#3")
		Beep(155.56, duration);
	if (note == "E3")
		Beep(164.81, duration);
	if (note == "F3")
		Beep(174.61, duration);
	if (note == "F#3")
		Beep(185.00, duration);
	if (note == "G3")
		Beep(196.00, duration);
	if (note == "G#3")
		Beep(207.65, duration);
	if (note == "A3")
		Beep(220.00, duration);
	if (note == "A#3")
		Beep(233.08, duration); 
	if (note == "B3")
		Beep(246.94, duration); 
	if (note == "C4")
		Beep(261.63, duration);
	if (note == "C#4")
		Beep(277.18, duration);
	if (note == "D4")
		Beep(293.66, duration);
	if (note == "D#4")
		Beep(311, duration);
	if (note == "E4")
		Beep(329.63, duration);
	if (note == "F4")
		Beep(349.23, duration);
	if (note == "F#4")
		Beep(369.99, duration);
	if (note == "G4")
		Beep(392.00, duration);
	if (note == "G#4")
		Beep(415.30, duration);
	if (note == "A4")
		Beep(440, duration);
	if (note == "A#4")
		Beep(466.16, duration);
	if (note == "B4")
		Beep(493.88, duration);
	if (note == "C5")
		Beep(523.25, duration);

}

void rm::AudioSource::PlayAlertSound() {

	printf("/a");

}