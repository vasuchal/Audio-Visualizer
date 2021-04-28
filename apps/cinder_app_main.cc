#include <visualizer/audio_visualizer.h>

using audio::AudioVisualizerApp;

void prepareSettings(AudioVisualizerApp::Settings* settings) {
    
    settings->setResizable(false);
    settings->setFrameRate(60);
    settings->setTitle("Synthwave vibe");
    //TODO: edit settings, edit frame rate to rid magic number
}

// This line is a macro that expands into an "int main()" function.
CINDER_APP(AudioVisualizerApp, ci::app::RendererGl, prepareSettings);
