#ifndef MP3EDIT_H
#define MP3EDIT_H
#include "mp3types.h"

typedef struct _Mp3EditInfo
{
    /*audio information*/
    char *src_audio_fname;
    FILE *fptr_src_audio;
    FILE *fptr_temp_audio;
    int title_size;
    int artist_size;
    int album_size;
    int year_size;
    int music_size;
    int comment_size;
}Mp3EditInfo;

