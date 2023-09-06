#include "GameObject.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

GameObject::GameObject(Vector2 p_pos, SDL_Texture *p_tex) : pos(p_pos), tex(p_tex)
{
    rect.x = 0;
    rect.y = 0;
    rect.w = 32;
    rect.h = 32;
    SDL_QueryTexture(p_tex, NULL, NULL, &rect.w, &rect.h);
}

SDL_Texture *GameObject::getTex()
{
    return tex;
}

void GameObject::update(double deltaTime)
{
}

void GameObject::setPos(float x, float y)
{
    pos.x = x;
    pos.y = y;
}

void GameObject::setAngle(float p_angle)
{
    angle = p_angle;
}

void GameObject::setScale(float w, float h)
{
    scale.x = w;
    scale.y = h;
}

SDL_Rect GameObject::getRect()
{
    return rect;
}