#include "comm_def_col.h"

//The Database of Faces
//http://www.cl.cam.ac.uk/research/dtg/attarchive/facedatabase.html
//reference
//http://docs.opencv.org/2.4/modules/contrib/doc/facerec/facerec_tutorial.html

extern int eigenfaces(const char *argv1, const char *argv2);
int main()
{
	eigenfaces("./at.txt", "./output");
	system("pause");
	return 0;
}