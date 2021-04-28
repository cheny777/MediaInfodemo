#include "MediaInfoDLL.h" //Dynamicly-loaded library (.dll or .so)
using namespace MediaInfoDLL;




int main()
{
	MediaInfo MI;
	String s1, s2,s3;
	MI.Open(L"tt.mp4");
	s1 = MI.Get(Stream_Video, 0, __T("Width"), Info_Text, Info_Name);

	MI.Close();
	return 0;
}



