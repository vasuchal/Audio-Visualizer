#include <visualizer/audio_visualizer.h>
#include "cinder/audio/audio.h"

namespace audio {

    using namespace cinder::audio;
    AudioVisualizerApp::AudioVisualizerApp() {
        processor_ = AudioProcessor("assets/CantinaBand60.wav");
        ci::app::setWindowSize(kWindowSize, kWindowSize);
    }

    void AudioVisualizerApp::draw() {
        ci::Color background_color("black");
        ci::gl::clear(background_color);
        processor_.Display();
    }

    void AudioVisualizerApp::update() {
        processor_.AdvanceOneFrame();
    }

} 