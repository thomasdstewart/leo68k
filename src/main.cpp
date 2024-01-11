/*
 *  Leo 68k Loader
 *  Copyright 2024 Thomas Stewart <thomas@stewarts.org.uk>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */


/* Ideas
 *
 * main loop
 *   on boot start 10 second interuptable timeout before starting 68k
 *   read loader console input giving interactive command prompt
 *   read 68k console and output "" prefix
 *   output any loader output with "*" prefix
 * 
 * commands to
 *   halt (raise somethign to pause cpu)
 *   switch to console, direct loaded input to 68k console
 *   reset 68k, raise and lower reset line
 *   load data from loader condole to mega storage
 *   load data to ram from mega storage
 *   set bytes of ram
 *   dump bytes of ram
 *   start 68k, halt, load ram, reset, unhalt
 *
 */

#include <Arduino.h>
#include <SerialFlash.h>

void setup() {
    Serial.begin(115200); 
    Serial.println();
    Serial.println("setup");

}

void loop() {
}

// vim: sts=4 sw=4
