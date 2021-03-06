#ifndef QUAD_H
#define QUAD_H

#define DllExport __declspec( dllexport )

#include "Entity2D.h"

class Quad : public Entity2D{
	public:
		DllExport Quad();
		DllExport ~Quad();
		DllExport void draw(Renderer& rkRenderer);

	private:
		ColorVertex q_vertices[4];
};

#endif