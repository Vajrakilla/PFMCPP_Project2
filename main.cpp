#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
                                                                                1) int
                                                                                2) char 
                                                                                3) bool
                                                                                4) float
                                                                                5) double
                                                                                6) void
      2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int sampleRate = 48000; // Hz
    int bitDepth = 16; //bits
    int fftWindowSize = 1024;

    bool isOutputtingSound = false;
    bool isGateOpen = true;
    bool isCircuitBiased = true;

    float songLength = 4.15f; // in minutes
    float amplitude = 25.52f; // in DB
    float wetDry = 55.75f; // in %

    char mix = 'm';
    char volume = 'v';
    char pan = 'p';

    double sidebandHarmonic = 8.61;
    double circumference = 8.822885; // in inches
    double cuttoffFrequency = 885.65656; // in Hz
    
    ignoreUnused(
        number, 
        sampleRate, 
        bitDepth, 
        fftWindowSize,
        isOutputtingSound, 
        isGateOpen, 
        isCircuitBiased,
        songLength, 
        amplitude, 
        wetDry,
        mix, 
        volume, 
        pan,
        sidebandHarmonic, 
        circumference, 
        cuttoffFrequency
    ); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
double changeAmplitude(double currentAmplitudePercent = 12.87, double newAmplitudePercent = 88.97)
{
    ignoreUnused(currentAmplitudePercent, newAmplitudePercent);
    return{};
}

/*
 2)
 */
int numberOfAvailableInputs(bool isInputActive, int numKnownInputs = 5, int numberOfInputsInUse = 3)
{
    ignoreUnused(isInputActive, numKnownInputs, numberOfInputsInUse);
    return{};
}
/*
 3)
 */
void initilizeSynth(int oscillator1State = 0, int oscillator2State = 0, int filterState = 1, int initOutputVolumePercent = 50)
{
    ignoreUnused(oscillator1State, oscillator2State, filterState, initOutputVolumePercent);
}
/*
 4)
 */
float fftPeakDetector(int fftWindowSize = 1024, int sampleRate = 48000)
{
    ignoreUnused(fftWindowSize, sampleRate);
    return{};
}
/*
 5)
 */
bool effectSelection (int effectType = 1, float dryWetPercent = 50.f, char filterType = 'a', char driveType = 'c', bool audioBus = false)
{
    ignoreUnused(effectType, dryWetPercent, filterType, driveType, audioBus);
    return{};
}
/*
 6)
 */
char distortionType(int pedalEmulationType = 3, bool cabinet = false, int cabinetType = 1)
{
    ignoreUnused(pedalEmulationType, cabinet, cabinetType);
    return{};
}
/*
 7)
 */
int findNumberOfAvaliableAudioInputs()
{
    return{};
}
/*
 8)
 */
int selectAudioOutput(char channel = 'd', bool multipleOuts = false, bool outputType = false) // false output type indicates non-audio (i.e. digital)... If thats a thing
{
    ignoreUnused(channel, multipleOuts, outputType);
    return{};
}
/*
 9)
 */
double circumference(float radiusInInches = 8.75f)
{
    ignoreUnused(radiusInInches);
    return{};
}
/*
 10)
 */
void playSong(char songChoice = 'a', int instrumentChoice = 5, int numAccompanimentInstruments = 20)
{
    ignoreUnused(songChoice, instrumentChoice, numAccompanimentInstruments);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1) 
    auto newAmplitude = changeAmplitude(0, 99.9);
    //2)
    auto showAvailableInputs = numberOfAvailableInputs(true, 1, 2);
    //3)
    initilizeSynth(1,5,4,34);
    //4)
    auto peakDetect = fftPeakDetector(500, 24000);
    //5)
    auto effectType = effectSelection(5, 5.3f, 'd', 'z', false);
    //6)
    auto distortion = distortionType(5, true, 2);
    //7)
    auto numAudioIns = findNumberOfAvaliableAudioInputs();
    //8)
    auto audioOutTo = selectAudioOutput('a', true, true);
    //9)
    auto getCircumference = circumference(.1123f);
    //10)
    playSong('j', 4, 15);
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
