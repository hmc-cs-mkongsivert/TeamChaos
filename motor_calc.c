#define CNATURAL 261.626
#define CSHARP 277.183
#define DNATURAL 293.665
#define DSHARP 311.127
#define ENATURAL 329.628
#define FNATURAL 349.228
#define FSHARP 369.994
#define GNATURAL 391.995
#define GSHARP 415.305
#define ANATURAL 440
#define ASHARP 466.164
#define BNATURAL 493.883 

// takes in input frequency

// somehow takes in desired frequency
struct Pitch
{
	char pitchClass[2];
	size_t octave;
};

float enharmonic(char[2] pClass)
{
	if (pClass == "CN")
	{
		return CNATURAL;
	}
	else if (pClass == "CS" || pClass == "DF")
	{
		return CSHARP;
	}
	else if (pClass == "DN")
	{
		return DNATURAL;
	}
	else if (pClass == "DS" || pClass == "EF")
	{
		return DSHARP;
	}
	else if (pClass == "EN")
	{
		return ENATURAL;
	}
	else if (pClass == "FN")
	{
		return FNATURAL;
	}
	else if (pClass == "FS" || pClass == "GF")
	{
		return FSHARP;
	}
	else if (pClass == "GN")
	{
		return GNATURAL;
	}
	else if (pClass == "GS" || pClass = "AF")
	{
		return GSHARP;
	}
	else if (pClass == "AN")
	{
		return ANATURAL;
	}
	else if (pClass == "AS" || pClass == "BF")
	{
		return ASHARP;
	}
	else if (pClass == "BN")
	{
		return BNATURAL;
	}
	else
	{
		return null;
	}
}

float desiredFreq(Pitch pitch)
{
	middleFreq = enharmonic(pitch.pitchClass);
	octMult = pitch.octave - 4;
	return middleFreq * 2^octMult;
}
// outputs rotation angle
// gives instructions to turn motor