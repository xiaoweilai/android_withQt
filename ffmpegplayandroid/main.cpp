#include "mainwindow.h"
#include <QApplication>


extern "C"{
#ifdef __cplusplus
#define __STDC_CONSTANT_MACROS
#ifdef _STDINT_H
#undef _STDINT_H
#endif
# include <stdint.h>
#endif
}

#include <QMainWindow>
#include <QBuffer>
#include <QFile>
#include <stdio.h>
#include <stdint.h>
//Windows
extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
//#include "libavdevice/avdevice.h"
#include "libavutil/opt.h"
#include "libavcodec/avcodec.h"
//#include "libavutil/channel_layout.h"
#include "libavutil/common.h"
//#include "libavutil/imgutils.h"
#include "libavutil/mathematics.h"
//#include "libavutil/samplefmt.h"
//#include "SDL/SDL.h"
//#include "SDL/SDL_main.h"
//#include "SDL.h"
//#include "SDL_main.h"

};


int main(int argc, char *argv[])
{
    /* Cheat to keep things simple and just use some globals. */
    static int initialed = 0; //是否初始化了
    AVFormatContext *pFormatCtx;
    AVCodecContext *pCodecCtx;
    AVFrame *pFrame;
    AVFrame *pFrameRGB;
    AVFrame *pFrameYUV;
    int videoStream;
    int i, numBytes;
    char *file_path = NULL;


    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
