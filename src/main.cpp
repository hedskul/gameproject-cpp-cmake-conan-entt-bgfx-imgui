
#include <iostream>
#include <entt/entt.hpp>
#include "engine/Model/Position.h"
#include "engine/Model/Velocity.h"

extern void update_movement(entt::registry&, float);

int main() {
    std::cout << "Engine starting..." << std::endl;

    entt::registry registry;

    auto player = registry.create();
    registry.emplace<Position>(player, 0.0f, 0.0f);
    registry.emplace<Velocity>(player, 1.0f, 0.5f);

    for (int i = 0; i < 10; ++i) {
        update_movement(registry, 1.0f); // simulate 1 second/frame
        auto& pos = registry.get<Position>(player);
        std::cout << "Position after " << (i + 1) << "s: (" << pos.x << ", " << pos.y << ")" << std::endl;
    }

    return 0;
}
