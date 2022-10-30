#include <zip.h>

int main()
{
    //Open the ZIP archive
    int err = 0;
    zip *z = zip_open("foo.zip", 0, &err);

    //Search for the file of given name
    const char *name = "file.txt";
    struct zip_stat st;
    zip_stat_init(&st);
    zip_stat(z, name, 0, &st);

    //Alloc memory for its uncompressed contents
    char *contents = new char[st.size];

    //Read the compressed file
    zip_file *f = zip_fopen(z, name, 0);
    zip_fread(f, contents, st.size);
    zip_fclose(f);

    //And close the archive
    zip_close(z);

    //Do something with the contents
    //delete allocated memory
    delete[] contents;
}
