
#include <bgfx/bgfx.h>
#include <bgfx/platform.h>
#include <bx/bx.h>
#include <bx/math.h>
#include <iostream>

void init_bgfx(uint32_t width, uint32_t height) {
    bgfx::Init init;
    init.type = bgfx::RendererType::Count; // Auto choose
    init.resolution.width = width;
    init.resolution.height = height;
    init.resolution.reset = BGFX_RESET_VSYNC;
    if (!bgfx::init(init)) {
        std::cerr << "Failed to initialize bgfx!" << std::endl;
    }
}

void render_frame() {
    bgfx::setViewClear(0, BGFX_CLEAR_COLOR | BGFX_CLEAR_DEPTH, 0x303030ff, 1.0f, 0);
    bgfx::setViewRect(0, 0, 0, bgfx::BackbufferRatio::Equal);
    bgfx::touch(0);
    bgfx::frame();
}

void shutdown_bgfx() {
    bgfx::shutdown();
}
