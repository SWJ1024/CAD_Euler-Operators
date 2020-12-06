#pragma once

#include "cad.h"
#include <vector>


HalfEdge *mev(Vertex *v1, glm::vec3 v, Loop *&lp);
	

Solid* mvsf(glm::vec3 pnt, Vertex*& new_vertex);
	

Loop* mef(Vertex *v1, Vertex *v2, Loop*& lp);//�����豣֤ԭ����v1����v2


Loop* kemr(Vertex *v1, Vertex *v2, Loop*& lp); //��֤v1�����⻷
	

void kfmrh(Face *f1, Face *f2);


void sweep(Face *f, glm::vec3 dir, double d);