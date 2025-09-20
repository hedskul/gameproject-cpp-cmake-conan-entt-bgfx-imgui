
#include <entt/entt.hpp>
#include "Position.h"
#include "Velocity.h"

void update_movement(entt::registry& registry, float dt) {
    auto view = registry.view<Position, Velocity>();
    for (auto entity : view) {
        auto& pos = view.get<Position>(entity);
        auto& vel = view.get<Velocity>(entity);
        pos.x += vel.dx * dt;
        pos.y += vel.dy * dt;
    }
}
