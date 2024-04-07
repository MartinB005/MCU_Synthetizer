/*
 * songs.h
 *
 *  Created on: Apr 7, 2024
 *      Author: martin-belej
 */

#ifndef INC_SONGS_H_
#define INC_SONGS_H_
#include "notes.h"

struct Note faded[] = { { NOTE_FS5, 0, 0.5 }, { NOTE_FS5, 0.5, 0.5 }, {
NOTE_DS5, 1, 0.5 }, { NOTE_FS5, 1.5, 0.5 }, { NOTE_DS5, 2, 0.5 }, {
NOTE_FS5, 2.5, 0.5 }, { NOTE_GS5, 3, 0.5 }, { NOTE_AS5, 3.5, 1 }, {
NOTE_FS5, 4.5, 0.5 }, { NOTE_FS5, 5, 0.5 }, { NOTE_CS5, 5.5, 0.75 }, {
NOTE_AS5, 6.25, 3.25 }, { NOTE_FS5, 10, 0.5 }, { NOTE_FS5, 10.5, 0.5 }, {
		NOTE_FS5, 11, 0.5 }, { NOTE_E5, 11.5, 1.5 }, { NOTE_E5, 13, 0.5 }, {
NOTE_E5, 13.5, 0.5 }, { NOTE_DS5, 14, 0.5 }, { NOTE_FS5, 14.5, 1 }, { NOTE_FS5,
		16, 0.5 }, { NOTE_FS5, 16.5, 0.5 }, {
NOTE_DS5, 17, 0.5 }, { NOTE_FS5, 17.5, 0.5 }, { NOTE_DS5, 18, 0.5 }, { NOTE_FS5,
		18.5, 0.5 }, { NOTE_GS5, 19, 0.5 }, {
NOTE_AS5, 19.5, 1 }, { NOTE_FS5, 20.5, 0.5 }, { NOTE_FS5, 21, 0.5 }, { NOTE_CS5,
		21.5, 0.75 }, { NOTE_AS5, 22.25, 2.25 }, {
NOTE_FS5, 26, 0.5 }, { NOTE_FS5, 26.5, 0.5 }, { NOTE_GS5, 27, 2 }, { NOTE_AS5,
		30, 0.5 }, { NOTE_AS5, 30.5, 0.5 }, {
NOTE_AS5, 31, 0.5 } };


struct Note poker_face[] = {{NOTE_GS5, 0, 0.5}, {NOTE_GS5, 0.5, 0.5}, {NOTE_GS4, 1, 0.5}, {NOTE_GS4, 1.5, 0.5}, {NOTE_DS5, 2, 0.5}, {NOTE_DS5, 2.5, 0.5}, {NOTE_GS4, 3, 0.5}, {NOTE_GS4, 3.5, 0.5}, {NOTE_GS5, 4, 0.5}, {NOTE_GS5, 4.5, 0.5}, {NOTE_E5, 5, 0.5}, {NOTE_B4, 5.5, 0.5}, {NOTE_FS5, 6, 0.5}, {NOTE_FS5, 6.5, 0.5}, {NOTE_FS4, 7, 0.5}, {NOTE_FS4, 7.5, 0.5}, {NOTE_GS5, 8, 0.5}, {NOTE_GS5, 8.5, 0.5}, {NOTE_GS4, 9, 0.5}, {NOTE_GS4, 9.5, 0.5}, {NOTE_DS5, 10, 0.5}, {NOTE_DS5, 10.5, 0.5}, {NOTE_GS4, 11, 0.5}, {NOTE_GS4, 11.5, 0.5}, {NOTE_GS5, 12, 0.5}, {NOTE_GS5, 12.5, 0.5}, {NOTE_E5, 13, 0.5}, {NOTE_B4, 13.5, 0.5}, {NOTE_FS5, 14, 0.5}, {NOTE_FS5, 14.5, 0.5}, {NOTE_FS4, 15, 0.5}, {NOTE_FS4, 15.5, 0.5}, {NOTE_B5, 16, 0.5}, {NOTE_B5, 16.5, 0.5}, {NOTE_B5, 17, 0.5}, {NOTE_B5, 17.5, 0.5}, {NOTE_B5, 18, 0.5}, {NOTE_B5, 18.5, 0.5}, {NOTE_B5, 19, 0.5}, {NOTE_B5, 19.5, 0.5}, {NOTE_B5, 20, 0.5}, {NOTE_B5, 20.5, 0.5}, {NOTE_B5, 21, 0.5}, {NOTE_B5, 21.5, 0.5}, {NOTE_CS5, 22, 0.5}, {NOTE_B5, 22.5, 0.25}, {NOTE_CS5, 23, 0.5}, {NOTE_B5, 23.5, 0.25}, {NOTE_DS6, 24, 0.5}, {NOTE_DS6, 24.5, 0.5}, {NOTE_DS6, 25, 0.5}, {NOTE_DS6, 25.5, 0.5}, {NOTE_DS6, 26, 0.5}, {NOTE_DS6, 26.5, 0.5}, {NOTE_DS6, 27, 0.5}, {NOTE_DS6, 27.5, 0.5}, {NOTE_DS6, 28, 0.5}, {NOTE_DS6, 28.5, 0.5}, {NOTE_DS6, 29, 0.5}, {NOTE_DS6, 29.5, 0.5}, {NOTE_E6, 30, 0.5}, {NOTE_DS6, 30.5, 0.25}, {NOTE_E6, 31, 0.5}, {NOTE_DS6, 31.5, 0.25}, {NOTE_B5, 32, 0.5}, {NOTE_B5, 32.5, 0.5}, {NOTE_B5, 33, 0.5}, {NOTE_B5, 33.5, 0.5}, {NOTE_B5, 34, 0.5}, {NOTE_B5, 34.5, 0.5}, {NOTE_B5, 35, 0.5}, {NOTE_B5, 35.5, 0.5}, {NOTE_B5, 36, 0.5}, {NOTE_B5, 36.5, 0.5}, {NOTE_B5, 37, 0.5}, {NOTE_B5, 37.5, 0.5}, {NOTE_CS5, 38, 0.5}, {NOTE_B5, 38.5, 0.25}, {NOTE_CS5, 39, 0.5}, {NOTE_B5, 39.5, 0.25}, {NOTE_DS6, 40, 0.5}, {NOTE_DS6, 40.5, 0.5}, {NOTE_DS6, 41, 0.5}, {NOTE_DS6, 41.5, 0.5}, {NOTE_DS6, 42, 0.5}, {NOTE_DS6, 42.5, 0.5}, {NOTE_DS6, 43, 0.5}, {NOTE_DS6, 43.5, 0.5}, {NOTE_DS6, 44, 0.5}, {NOTE_DS6, 44.5, 0.5}, {NOTE_DS6, 45, 0.5}, {NOTE_DS6, 45.5, 0.5}, {NOTE_E6, 46, 0.5}, {NOTE_DS6, 46.5, 0.25}, {NOTE_E6, 47, 0.5}, {NOTE_DS6, 47.5, 0.25}};

struct Note pirates[] = {
	    {NOTE_E4, 0, 0.125},
	    {NOTE_G4, 0.125, 0.125},
	    {NOTE_A4, 0.25, 0.25},
	    {NOTE_A4, 0.5, 0.125},
	    {0, 0.625, 0.125},

	    {NOTE_A4, 0.75, 0.125},
	    {NOTE_B4, 0.875, 0.125},
	    {NOTE_C5, 1, 0.25},
	    {NOTE_C5, 1.25, 0.125},
	    {0, 1.375, 0.125},

	    {NOTE_C5, 1.5, 0.125},
	    {NOTE_D5, 1.625, 0.125},
	    {NOTE_B4, 1.75, 0.25},
	    {NOTE_B4, 2, 0.125},
	    {0, 2.125, 0.125},

	    {NOTE_A4, 2.25, 0.125},
	    {NOTE_G4, 2.375, 0.125},
	    {NOTE_A4, 2.5, 0.25},
	    {0, 2.75, 0.125},

	    {NOTE_E4, 2.875, 0.125},
	    {NOTE_G4, 3, 0.125},
	    {NOTE_A4, 3.125, 0.25},
	    {NOTE_A4, 3.375, 0.125},
	    {0, 3.5, 0.125},

	    {NOTE_A4, 3.625, 0.125},
	    {NOTE_B4, 3.75, 0.125},
	    {NOTE_C5, 3.875, 0.25},
	    {NOTE_C5, 4.125, 0.125},
	    {0, 4.25, 0.125},

	    {NOTE_C5, 4.375, 0.125},
	    {NOTE_D5, 4.5, 0.125},
	    {NOTE_B4, 4.625, 0.25},
	    {NOTE_B4, 4.875, 0.125},
	    {0, 5, 0.125},

	    {NOTE_A4, 5.125, 0.125},
	    {NOTE_G4, 5.25, 0.125},
	    {NOTE_A4, 5.375, 0.25},
	    {0, 5.625, 0.125},

	    {NOTE_E4, 5.75, 0.125},
	    {NOTE_G4, 5.875, 0.125},
	    {NOTE_A4, 6, 0.25},
	    {NOTE_A4, 6.25, 0.125},
	    {0, 6.375, 0.125},

	    {NOTE_A4, 6.5, 0.125},
	    {NOTE_B4, 6.625, 0.125},
	    {NOTE_C5, 6.75, 0.25},
	    {NOTE_C5, 7, 0.125},
	    {0, 7.125, 0.125},

	    {NOTE_C5, 7.25, 0.125},
	    {NOTE_D5, 7.375, 0.125},
	    {NOTE_B4, 7.5, 0.25},
	    {NOTE_B4, 7.75, 0.125},
	    {0, 7.875, 0.125},

	    {NOTE_A4, 8, 0.125},
	    {NOTE_G4, 8.125, 0.125},
	    {NOTE_A4, 8.25, 0.25},
	    {NOTE_A4, 8.5, 0.125},
	    {0, 8.625, 0.125},

	    {NOTE_E4, 8.75, 0.125},
	    {NOTE_G4, 8.875, 0.125},
	    {NOTE_A4, 9, 0.25},
	    {NOTE_A4, 9.25, 0.125},
	    {0, 9.375, 0.125},

	    {NOTE_A4, 9.5, 0.125},
	    {NOTE_B4, 9.625, 0.125},
	    {NOTE_C5, 9.75, 0.25},
	    {NOTE_C5, 10, 0.125},
	    {0, 10.125, 0.125},

	    {NOTE_C5, 10.25, 0.125},
	    {NOTE_D5, 10.375, 0.125},
	    {NOTE_B4, 10.5, 0.25},
	    {NOTE_B4, 10.75, 0.125},
	    {0, 10.875, 0.125},

	    {NOTE_A4, 11, 0.125},
	    {NOTE_G4, 11.125, 0.125},
	    {NOTE_A4, 11.25, 0.25},
	    {NOTE_A4, 11.5, 0.125},
	    {0, 11.625, 0.125},

	    {NOTE_E4, 11.75, 0.125},
	    {NOTE_G4, 11.875, 0.125},
	    {NOTE_A4, 12, 0.25},
	    {NOTE_A4, 12.25, 0.125},
	    {0, 12.375, 0.125},

	    {NOTE_A4, 12.5, 0.125},
	    {NOTE_B4, 12.625, 0.125},
	    {NOTE_C5, 12.75, 0.25},
	    {NOTE_C5, 13, 0.125},
	    {0, 13.125, 0.125},

	    {NOTE_C5, 13.25, 0.125},
	    {NOTE_D5, 13.375, 0.125},
	    {NOTE_B4, 13.5, 0.25},
	    {NOTE_B4, 13.75, 0.125},
	    {0, 13.875, 0.125},

	    {NOTE_A4, 14, 0.125},
	    {NOTE_G4, 14.125, 0.125},
	    {NOTE_A4, 14.25, 0.25},
	    {NOTE_A4, 14.5, 0.125},
	    {0, 14.625, 0.125},

	    {NOTE_E4, 14.75, 0.125},
	    {NOTE_G4, 14.875, 0.125},
	    {NOTE_A4, 15, 0.25},
	    {NOTE_A4, 15.25, 0.125},
	    {0, 15.375, 0.125},

	    {NOTE_A4, 15.5, 0.125},
	    {NOTE_B4, 15.625, 0.125},
	    {NOTE_C5, 15.75, 0.25},
	    {NOTE_C5, 16, 0.125},
	    {0, 16.125, 0.125},

	    {NOTE_C5, 16.25, 0.125},
	    {NOTE_D5, 16.375, 0.125},
	    {NOTE_B4, 16.5, 0.25},
	    {NOTE_B4, 16.75, 0.125},
	    {0, 16.875, 0.125},

	    {NOTE_A4, 17, 0.125},
	    {NOTE_G4, 17.125, 0.125},
	    {NOTE_A4, 17.25, 0.25},
	    {NOTE_A4, 17.5, 0.125},
	    {0, 17.625, 0.125},

	    {NOTE_E4, 17.75, 0.125},
	    {NOTE_G4, 17.875, 0.125},
	    {NOTE_A4, 18, 0.25},
	    {NOTE_A4, 18.25, 0.125},
	    {0, 18.375, 0.125},

	    {NOTE_A4, 18.5, 0.125},
	    {NOTE_B4, 18.625, 0.125},
	    {NOTE_C5, 18.75, 0.25},
	    {NOTE_C5, 19, 0.125},
	    {0, 19.125, 0.125},

	    {NOTE_C5, 19.25, 0.125},
	    {NOTE_D5, 19.375, 0.125},
	    {NOTE_B4, 19.5, 0.25},
	    {NOTE_B4, 19.75, 0.125},
	    {0, 19.875, 0.125},

	    {NOTE_A4, 20, 0.125},
	    {NOTE_G4, 20.125, 0.125},
	    {NOTE_A4, 20.25, 0.25},
	    {NOTE_A4, 20.5, 0.125},
	    {0, 20.625, 0.125}
};



void play_poker_face() {
	play(poker_face, sizeof(poker_face), 119);
}

void play_faded() {
	play(faded, sizeof(faded), 90);
}

void play_pirates_carribbean() {
	play(pirates, sizeof(pirates), 50);
}

void play(struct Note* notes, size_t size, int bpm) {
		int millisBeginning = HAL_GetTick();
		for (unsigned int i = 0; i < size / sizeof(notes[0]); i++)
		{
			int beat_length = 60.0 / bpm * 1000;

			int delayMillis = beat_length * notes[i].time - (HAL_GetTick() - millisBeginning);

			if (delayMillis > 0) HAL_Delay(delayMillis);
			HAL_Delay(10);

			int noteDuration = beat_length * notes[i].duration - 10;

			   play_note(notes[i].frequency, noteDuration);
}
}


#endif /* INC_SONGS_H_ */
