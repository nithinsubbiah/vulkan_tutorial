#pragma once

#include "lve_device.h"
#include "lve_pipeline.h"
#include "lve_window.h"

namespace lve {

class FirstApp {
  public:
    void run();
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT = 600;

  private:
    LveWindow lveWindow{WIDTH, HEIGHT, "Hello World!"};
    LveDevice lveDevice{lveWindow};
    LvePipeline lvePipeline{
        lveDevice,
        "shaders/simple_shader.vert.spv",
        "shaders/simple_shader.frag.spv",
        LvePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)};  
};
} // namespace lve