### NAME :

       creat — create a new file or rewrite an existing one


### SYNOPSIS  :

#### HEADER FILE TO BE INCLUDED :
    
               #include <fcntl.h>
    
#### PROTOTYPE :
      
               int creat(const char *path, mode_t mode);

### DESCRIPTION  

       The creat() function shall behave as if it is implemented as
       follows:

           int creat(
                       const char *path, 
                       mode_t mode
                    )
           {
               return open(path, O_WRONLY|O_CREAT|O_TRUNC, mode);
           }

### RETURN VALUE  

       Upon successful completion, these functions shall open the file
       and return a non-negative integer representing the file
       descriptor.  Otherwise, these functions shall return -1 and set
       errno to indicate the error. If -1 is returned, no files shall be
       created or modified.

### ERRORS    

       These functions shall fail if:

       EACCES : Search permission is denied on a component of the path
                prefix, or the file exists and the permissions specified by
                oflag are denied, or the file does not exist and write
                permission is denied for the parent directory of the file
                to be created, or O_TRUNC is specified and write permission
                is denied.

       EEXIST : O_CREAT and O_EXCL are set, and the named file exists.
       
       ENOENT : O_CREAT is not set and a component of path does not name an
                existing file, or O_CREAT is set and a component of the
                path prefix of path does not name an existing file, or path
                points to an empty string.

### EXAMPLES    

   Creating a File
       The following example creates the file with read and
       write permissions for the file owner and others. The
       resulting file descriptor is assigned to the fd
       variable.

           #include <fcntl.h>
           ...
           int fd = 0;
           mode_t permissions = 0777;
           char *pathname = "file_name";
           ...
           fd = creat(pathname,permissions);
           ...
