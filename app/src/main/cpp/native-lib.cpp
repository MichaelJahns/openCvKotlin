#include "opencv2/core.hpp"
#include <opencv2/imgproc.hpp>
#include <jni.h>

using namespace cv;
using namespace std;

extern "C"
JNIEXPORT void JNICALL
Java_com_leyline_computervision_NativeClass_bGR2RGB(JNIEnv *env, jobject thiz, jobject addr_rgba) {
    Mat &img = *(Mat *) addr_rgba;
    cvtColor(img, img, COLOR_BGR2RGB);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_leyline_computervision_NativeClass_grayScale(JNIEnv *env, jobject d,
                                                      jobject addr_rgba) {
    Mat &img = *(Mat *) addr_rgba;
    applyColorMap(img, img, 0);
}

