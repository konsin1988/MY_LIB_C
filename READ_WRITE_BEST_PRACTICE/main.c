#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char* buff;
size_t bytes_to_write;
for( size_t bytes_written = 0; bytes_written < bytes_to_write; )
{
	ssize_t currently_written = write(fd, buff + bytes_written, 
			bytes_to_write - bytes_written);
	if( currently_written == -1)
	{
		/* handle exception */

	}
	bytes_written += currently_written;
}
