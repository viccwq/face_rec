#include "comm_def_col.h"

//The Database of Faces
//http://www.cl.cam.ac.uk/research/dtg/attarchive/facedatabase.html
//reference
//http://docs.opencv.org/2.4/modules/contrib/doc/facerec/facerec_tutorial.html

extern int eigenfaces(const char *argv1, const char *argv2);
extern int lbp_hist(const char *argv1);
int main()
{
//	eigenfaces("./at.txt", "./output");
	lbp_hist("./at.txt");
	system("pause");
	return 0;
}