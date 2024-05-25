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

	// TODO: Find rotors I - V letter configs, or create random ones

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
	//
	// Reflector is placed after the last rotor and returns the current back through them after scrambling it (basically functions as another rotor that redirects current back through all of the rotors in reverse order).
	rotors(plugboard());
}