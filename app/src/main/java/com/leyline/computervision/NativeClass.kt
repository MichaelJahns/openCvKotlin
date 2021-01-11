package com.leyline.computervision

class NativeClass {
    init {
        System.loadLibrary("native-lib")
    }
    external fun grayScale(addrRgba: Long?)
    external fun bGR2RGB(addrRgba: Long?)
}