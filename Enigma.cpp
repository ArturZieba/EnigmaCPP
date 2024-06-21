#include "Enigma.h"
#include <iostream> // For std::cout and std::cin
#include <string> // For std::string

// Function simulating plugboard behavior
std::string plugboard()
{
	std::string input;

	std::cout << "Type in a string: ";
	std::cin >> input;

	return input;
}

// Function simulating rotors behavior
void rotors(std::string input)
{

	std::cout << "Typed in: " << input << '\n';

	// Wehrmacht and Luftwaffe Enigma I cipher rotors wiring:
	// ETW - Eintrittswalze -> Entry wheel
	// Notch -> Letter at which a notch is placed. Reaching the noch causes a pawl to be engaged causing the next rotor (to the left) to move a single step
	
	/*	01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 Notch
	ETW	 A	B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z     
	I	 E  K  M  F  L  G  D  Q  V  Z  N  T  O  W  Y  H  X  U  S  P  A  I  B  R  C  J     Y
	II	 A  J  D  K  S  I  R  U  X  B  L  H  W  T  M  C  Q  G  Z  N  P  Y  F  V  O  E     M
	III	 B  D  F  H  J  L  C  P  R  T  X  V  Z  N  Y  E  I  W  G  A  K  M  U  S  Q  O     D
	IV	 E  S  O  V  P  Z  J  A  Y  Q  U  I  R  H  X  L  N  F  T  G  K  D  C  M  W  B     R
	V	 V  Z  B  R  G  I  T  Y  U  P  S  D  N  H  L  X  A  W  M  J  Q  O  F  E  C  K     H
	*/
	return;
}

int main()
{
	// Circuit is as follows: Battery > Key Switch > Plugboard > Rotors (1 > 2 > 3) > Reflector > Rotors (3 > 2 > 1) > Plugboard > Key Switch > Light (highlights on a panel above the keyboard which letter was the key changed to) > Battery
	// Simulation of the circuit is: Input Character > Plugboard (if the character used is plugged) > Rotor (1 > 2 > 3) > Reflector > Rotors (3 > 2 > 1) > Plugboard (if the character used is plugged) > Output Character
	// 
	// Allowed 26 characters, A - Z, no whitespaces or numerals.
	//
	// Plugboard can be set to change key stroke outputs of one letter to be another letter and vice versa, as long as these letters are not plugged in elsewhere yet. 
	// For example plugging A to L will cause pressing A to return L and pressing L to return A, however A and L will not be able to be plugged into anymore, so these letters cannot be used with other letters. 
	// There are 10 pairs of plugs, so up to 20 letters cab be redirected in this way.
	// 
	// Rotors refers to a set of three rotors that are numbered 1 - 26 all. 
	// There are predefined I - V rotors (VI - VIII for navy with different notches) with differently scrambled letters.
	// Reaching a notch on a rotor causes the rotor next to it (the one to the left) to move a single step.
	//
	// Reflector is placed after the last rotor and returns the current back through them after scrambling it (basically functions as another rotor that redirects current back through all of the rotors in reverse order).
	rotors(plugboard());
}