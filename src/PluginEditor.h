/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "myLookAndFeel.h"

//==============================================================================
/**
*/
class WaveNetVaAudioProcessorEditor  : public AudioProcessorEditor,
                                       private Button::Listener,
                                       private Slider::Listener
                                
{
public:
    WaveNetVaAudioProcessorEditor (WaveNetVaAudioProcessor&);
    ~WaveNetVaAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

    void resetImages();

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    WaveNetVaAudioProcessor& processor;

    // Amp Widgets
    Slider ampPresenceKnob;
    Slider ampCleanBassKnob;
    Slider ampCleanMidKnob;
    Slider ampCleanTrebleKnob;
    Slider ampCleanGainKnob;
    Slider ampLeadBassKnob;
    Slider ampLeadMidKnob;
    Slider ampLeadTrebleKnob;
    Slider ampLeadGainKnob;
    Slider ampMasterKnob;
    ImageButton ampOnButton;
    ImageButton ampCleanLeadButton;
    ImageButton ampLED;

    
    // LookandFeels 
    myLookAndFeel ampSilverKnobLAF;

    //Image background;
    Image background_clean = ImageCache::getFromMemory(BinaryData::amp_clean_jpg, BinaryData::amp_clean_jpgSize);
    Image background_lead = ImageCache::getFromMemory(BinaryData::amp_lead_jpg, BinaryData::amp_lead_jpgSize);
    Image background_off = ImageCache::getFromMemory(BinaryData::amp_off_jpg, BinaryData::amp_off_jpgSize);
    Image background_set = ImageCache::getFromMemory(BinaryData::amp_clean_jpg, BinaryData::amp_clean_jpgSize);
    int current_background = 1;

    TextButton loadButton;
    Label modelLabel;
    juce::String fname;
    virtual void buttonClicked(Button* button) override;
    //void loadButtonClicked();
    virtual void sliderValueChanged(Slider* slider) override;
    void ampOnButtonClicked();
    void ampCleanLeadButtonClicked();

public:
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> cleanGainSliderAttach;
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> cleanBassSliderAttach;
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> cleanMidSliderAttach;
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> cleanTrebleSliderAttach;
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> leadGainSliderAttach;
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> leadBassSliderAttach;
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> leadMidSliderAttach;
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> leadTrebleSliderAttach;
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> presenceSliderAttach;
    std::unique_ptr <AudioProcessorValueTreeState::SliderAttachment> masterSliderAttach;
 
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(WaveNetVaAudioProcessorEditor)
};
