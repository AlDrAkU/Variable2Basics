#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>
/* Razvan Bouros - 1DAE06

1.http://en.cppreference.com/w/cpp/string/basic_string/stol
2. string to number google

*/
void Typecasting();
int randomLetter();
void floatValues();
void prefixPostfix();
void concatenation();
void toStringConversion();
void stringToNumber();
void randomNumberGen();
void StringToNumber();
void Range();
void main() {
	
	/*randomNumberGen();
	Typecasting();
	std::cout << std::endl;
	floatValues();
	std::cout << std::endl;
	prefixPostfix();
	std::cout << std::endl;
	concatenation();
	std::cout << std::endl;
	toStringConversion();
	std::cout << std::endl;*/
	/*StringToNumber();*/
	Range();
	system("pause");

}
void randomNumberGen() {

	const int randomNumber = rand() % 51;
	std::cout << "Random Number generated : " << randomNumber << std::endl;
	const int randomNumber2 = rand() % 71 + 10;
	std::cout << "Random Number generated : " << randomNumber2 << std::endl;
	const int randomNumber3 = rand() % 21 - 20;
	std::cout << "Random Number generated : " << randomNumber3 << std::endl;
	const int randomNumber4 = rand() % 5 - 2;
	std::cout << "Random Number generated : " << randomNumber4 << std::endl;


	float randomNumber5 = float(rand() % 501 - 1000);
	randomNumber5 = (randomNumber5 / 100.0f);

	std::cout << "Random Number generated : " << randomNumber5 << std::endl;

	float randomNumber6 = float(rand() % 501 - 501);
	randomNumber6 = (randomNumber6 / 100.0f);
	std::cout << "Random Number generated : " << randomNumber6 << std::endl;
	std::cout << std::endl;







}
void Typecasting() {
	std::cout << "Type a letter : ";
	char inputChar{};
	//std::cin >> inputChar;
	inputChar = char(randomLetter());
	std::cout << "Letter " << (inputChar) << ", ASCII value " << int(inputChar) << std::endl;
	
	}
int randomLetter() {

	const int randomLetterGenerated = rand() % 26 +97;
	return randomLetterGenerated;
	
}
void FloatValues() {
	float nr1{5.44f};
	float nr2{5.45f};
	float nr3{5.51f};
	
	std::cout << nr1 << ", rounded: " << round(nr1) << ". int cast: " << int(nr1) << std::endl;
	std::cout << nr1 << ", rounded: " << round(nr2) << ". int cast: " << int(nr2) << std::endl;
	std::cout << nr1 << ", rounded: " << round(nr3) << ". int cast: " << int(nr3) << std::endl;
	

}
void PrefixPostfix() {

	int i{ 10 };
	int j{++i};
	std::cout << "i: " << i << ", j: " << j << std::endl;

	int k{ 10 };
	int l{ k++ };
	std::cout << "k: " << k << ", l: " << l << std::endl;
	
	

	}
void Concatenation() {

	std::string firstWord;
	std::string secondWord;
	std::string thirdWord;
	std::string fourthWord;
	std::string fifthWord;
	char charCharizard{'d'};
	
	std::cout << "Please type a word: " << std::endl;
	std::cin >> firstWord;
	std::cout << "Please type another word: " << std::endl;
	std::cin >> secondWord;

	std::string concatenationWord = firstWord + secondWord;
	std::cout << concatenationWord <<std::endl;
	
	std::cout << std::endl;

	
	
	std::cout << "Please type a third word: " << std::endl;
	std::cin >> thirdWord;

	std::string concatenatieWordMetLiteral = "the " + thirdWord;
	std::cout << concatenatieWordMetLiteral << std::endl;
	std::cout << std::endl;

	std::cout << "Please type a fourth word: " << std::endl;
	std::cin >> fourthWord;


	std::string concatenatieWordMetCharVariable = charCharizard + fourthWord;
	std::cout << concatenatieWordMetCharVariable << std::endl;
	std::cout << std::endl;

	std::cout << "Please type a fifth word: " << std::endl;
	std::cin >> fifthWord;

	std::string concatenatieWordMetLiteralChar = 'H' + fifthWord;
	std::cout << concatenatieWordMetLiteral << std::endl;
	std::cout << std::endl;


}
void ToStringConversion() {
	std::string numbersLog;
	int enteredNr{};

	std::cout << "Please write a number :" << std::endl;
	std::cin >> enteredNr;
	numbersLog = numbersLog + std::to_string(enteredNr) + " ";
	std::cout << "Please write a number :" << std::endl;
	std::cin >> enteredNr;
	numbersLog = numbersLog + std::to_string(enteredNr) + " ";
	std::cout << "Please write a number :" << std::endl;
	std::cin >> enteredNr;
	numbersLog = numbersLog + std::to_string(enteredNr) + " ";
	std::cout << "these are the written numbers : " + numbersLog << std::endl;


}
void StringToNumber() {
	std::string str1{ "42" };
	std::string str2{ "17.14" };
	
	int dasInt1 = std::stoi(str1);
	float dasFloat1 = float(std::stoi(str2));

	std::cout << "One string contains : " << str1 << std::endl;
	std::cout << "The other contains : " << str2 << std::endl;
	

	std::string concatenatieStringNumbers = str1 + str2;
	std::cout <<"Adding strings : "<< concatenatieStringNumbers << std::endl;
	std::cout << std::endl;

	std::cout << "Adding numbers : " << dasInt1 + dasFloat1 << std::endl;
	std::cout << std::endl;

}
void Range() {

	signed char signCharNr1{-128};
	signed char signCharNr2{127};
	signed char signCharResult{};
	unsigned char unCharNr1{0};
	unsigned char unCharNr2{255};
	unsigned char unCharResult{};
	

	signCharResult = signCharNr1 + 1;
	std::cout << "Adding one to signed char : " << signCharResult << std::endl;
	
	signCharResult = signCharNr1 - 1;
	std::cout << "Subtracting one to signed char : " << signCharResult << std::endl;

	signCharResult = signCharNr2 + 1;
	std::cout << "Adding one to signed char : " << signCharResult << std::endl;
	signCharResult = signCharNr2 - 1;
	std::cout << "Subtracting one to signed char : "<< signCharResult << std::endl;

	std::cout << "Adding one to unsigned char : " << char(unCharNr1 + 1) << std::endl;
	std::cout << "Subtracting one to unsigned char : " << char(unCharNr1 - 1) << std::endl;

	std::cout << "Adding one to unsigned char : " << char(unCharNr2 + 1) << std::endl;
	std::cout << "Subtracting one to unsigned char : " << char(unCharNr2 - 1) << std::endl;


}