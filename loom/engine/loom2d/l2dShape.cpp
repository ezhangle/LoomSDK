/*
 * ===========================================================================
 * Loom SDK
 * Copyright 2011, 2012, 2013
 * The Game Engine Company, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ===========================================================================
 */

#include "loom/graphics/gfxVectorRenderer.h"
#include "loom/engine/loom2d/l2dShape.h"
#include "loom/graphics/gfxGraphics.h"

namespace Loom2D
{
Type *Shape::typeShape = NULL;

void Shape::render(lua_State *L)
{
    updateLocalTransform();

	lualoom_pushnative<Shape>(L, this);
    lua_pop(L, 1);
}

void moveTo(float x, float y) {
	GFX::VectorRenderer::moveTo(x, y);
}

void lineTo(float x, float y) {
	GFX::VectorRenderer::lineTo(x, y);
}

}
