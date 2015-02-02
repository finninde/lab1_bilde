int verticeCount = 24;
int faceCount = 12;

float vertices[] = {
	0.0f, 1.0f, 1.0f, 1.0f, // Vertex 0
	0.0f, 0.0f, 1.0f, 1.0f, // Vertex 1
	1.0f, 0.0f, 1.0f, 1.0f, // Vertex 2
	1.0f, 1.0f, 1.0f, 1.0f, // Vertex 3
	1.0f, 1.0f, 0.0f, 1.0f, // Vertex 4
	1.0f, 0.0f, 0.0f, 1.0f, // Vertex 5
	0.0f, 0.0f, 0.0f, 1.0f, // Vertex 6
	0.0f, 1.0f, 0.0f, 1.0f, // Vertex 7
	1.0f, 1.0f, 1.0f, 1.0f, // Vertex 8
	1.0f, 0.0f, 1.0f, 1.0f, // Vertex 9
	1.0f, 0.0f, 0.0f, 1.0f, // Vertex 10
	1.0f, 1.0f, 0.0f, 1.0f, // Vertex 11
	0.0f, 1.0f, 0.0f, 1.0f, // Vertex 12
	0.0f, 1.0f, 1.0f, 1.0f, // Vertex 13
	1.0f, 1.0f, 1.0f, 1.0f, // Vertex 14
	1.0f, 1.0f, 0.0f, 1.0f, // Vertex 15
	0.0f, 1.0f, 0.0f, 1.0f, // Vertex 16
	0.0f, 0.0f, 0.0f, 1.0f, // Vertex 17
	0.0f, 0.0f, 1.0f, 1.0f, // Vertex 18
	0.0f, 1.0f, 1.0f, 1.0f, // Vertex 19
	0.0f, 0.0f, 1.0f, 1.0f, // Vertex 20
	0.0f, 0.0f, 0.0f, 1.0f, // Vertex 21
	1.0f, 0.0f, 0.0f, 1.0f, // Vertex 22
	1.0f, 0.0f, 1.0f, 1.0f  // Vertex 23
};

unsigned int faceIndex[] = {
	0,1,2,		//Face 0
	0,2,3,		//Face 1
	4,5,6,		//Face 2
	4,6,7,		//Face 3
	8,9,10,		//Face 4
	8,10,11,	//Face 5
	12,13,14,	//Face 6
	12,14,15,	//Face 7
	16,17,18,	//Face 8
	16,18,19,	//Face 9
	20,21,22,	//Face 10
	20,22,23	//Face 11
};

float colors[] =
{
	1.0f, 0.0f, 0.0f, 1.0f, // Vertex 0
	1.0f, 0.0f, 0.0f, 1.0f, // Vertex 1
	1.0f, 0.0f, 0.0f, 1.0f, // Vertex 2
	1.0f, 0.0f, 0.0f, 1.0f, // Vertex 3

	1.0f, 0.0f, 1.0f, 1.0f, // Vertex 4
	1.0f, 0.0f, 1.0f, 1.0f, // Vertex 5
	1.0f, 0.0f, 1.0f, 1.0f, // Vertex 6
	1.0f, 0.0f, 1.0f, 1.0f, // Vertex 7

	0.0f, 1.0f, 0.0f, 1.0f, // Vertex 8
	0.0f, 1.0f, 0.0f, 1.0f, // Vertex 9
	0.0f, 1.0f, 0.0f, 1.0f, // Vertex 10
	0.0f, 1.0f, 0.0f, 1.0f, // Vertex 11

	0.0f, 0.0f, 1.0f, 1.0f, // Vertex 12
	0.0f, 0.0f, 1.0f, 1.0f, // Vertex 13
	0.0f, 0.0f, 1.0f, 1.0f, // Vertex 14
	0.0f, 0.0f, 1.0f, 1.0f, // Vertex 15

	1.0f, 1.0f, 0.0f, 1.0f, // Vertex 16
	1.0f, 1.0f, 0.0f, 1.0f, // Vertex 17
	1.0f, 1.0f, 0.0f, 1.0f, // Vertex 18
	1.0f, 1.0f, 0.0f, 1.0f, // Vertex 19

	0.0f, 1.0f, 1.0f, 1.0f, // Vertex 20
	0.0f, 1.0f, 1.0f, 1.0f, // Vertex 21
	0.0f, 1.0f, 1.0f, 1.0f, // Vertex 22
	0.0f, 1.0f, 1.0f, 1.0f  // Vertex 23
};

float normals[] = {
	0.0f, 0.0f, 1.0f,
	0.0f, 0.0f, 1.0f,
	0.0f, 0.0f, 1.0f,
	0.0f, 0.0f, 1.0f, 

	0.0f, 0.0f, -1.0f,
	0.0f, 0.0f, -1.0f,
	0.0f, 0.0f, -1.0f,
	0.0f, 0.0f, -1.0f,

	1.0f, 0.0f, 0.0f,
	1.0f, 0.0f, 0.0f,
	1.0f, 0.0f, 0.0f,
	1.0f, 0.0f, 0.0f,

	0.0f, 1.0f, 0.0f,
	0.0f, 1.0f, 0.0f,
	0.0f, 1.0f, 0.0f,
	0.0f, 1.0f, 0.0f,

	-1.0f, 0.0f, 0.0f,
	-1.0f, 0.0f, 0.0f,
	-1.0f, 0.0f, 0.0f,
	-1.0f, 0.0f, 0.0f,

	0.0f, -1.0f, 0.0f,
	0.0f, -1.0f, 0.0f,
	0.0f, -1.0f, 0.0f,
	0.0f, -1.0f, 0.0f
};

float texCoords[] = {
	0.0f, 1.0f,
	0.0f, 0.0f, 
	1.0f, 0.0f,
	1.0f, 1.0f,

	0.0f, 1.0f,
	0.0f, 0.0f, 
	1.0f, 0.0f,
	1.0f, 1.0f,

	0.0f, 1.0f,
	0.0f, 0.0f, 
	1.0f, 0.0f,
	1.0f, 1.0f,

	0.0f, 1.0f,
	0.0f, 0.0f, 
	1.0f, 0.0f,
	1.0f, 1.0f,

	0.0f, 1.0f,
	0.0f, 0.0f, 
	1.0f, 0.0f,
	1.0f, 1.0f,

	0.0f, 1.0f,
	0.0f, 0.0f, 
	1.0f, 0.0f,
	1.0f, 1.0f,
};


