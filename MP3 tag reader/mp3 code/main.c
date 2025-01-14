#include<stdio.h>
#include<string.h>
#include"mp3view.h"
#include"mp3types.h"


int main(int argc,char *argv[])
{
    Mp3ViewInfo mp3viewInfo;
   // Mp3EditInfo mp3editInfo;

    if(check_operation_type(argv[1])==e_view)
    {
        if(argc!=3)
        {
            printf("ERROR: ./a.out : INVALID ARGUMENTS \n");
            printf("USAGE :\n To view please pass like: ./a.out -v mp3filename\nTo edit please pass like: ./a.out -e -t/-a/-A/-m/-y/-c changing_text mp3filename\nTo get help pass like: ./a.out --help ");

            return e_failure;
        }
        mp3viewInfo.src_audio_fname=argv[2];
        /*if(read_and_validate_view_args(argv, &mp3viewInfo)==e_failure)
        {
        return e_failure;
        }*/

        printf("---------------SELECTED VIEW DETAILS---------------\n");
        if(do_view(&mp3viewInfo)==e_success)
        {
        printf("---------------DETAILS DISPLAYED SUCCESSFULLY---------------\n");
        }
        fclose(mp3viewInfo.fptr_src_audio);
    }
    return e_success;
}



//checking operation type/
OperationType check_operation_type(char* argv)
{
    //comparing argv[1] and -v same or not/
    if(strcmp(argv,"-v")==0)
    {
        //if same returning e_view to view the contents/
        return e_view;
    }
    //comparing argv[1] and -e same or not/
    else if(strcmp(argv,"-e")==0)
    {
        //if same returning e_edit to do editing/
        return e_edit;
    }
    else
    {
        //if other than -v or -e return e_unsupported/
        return e_unsupported;
    }
}