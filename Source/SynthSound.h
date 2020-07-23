/*
  ==============================================================================

    SynthSound.h
    Created: 23 Jul 2020 3:31:51pm
    Author:  Babó Péter

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class SynthSound : public SynthesiserSound
{
public:
    bool appliesToNote (int /*midiNoteNumber*/)
    {
        return true;
    }
    bool appliesToChannel (int /*midiChannel*/)
    {
        return true;
    }
}
