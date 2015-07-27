#ifndef EXIF_IO_HPP
#define EXIF_IO_HPP

#include <string>
#include <map>

namespace openMVG {
namespace exif  {

class Exif_IO
{
  public:
    virtual size_t getWidth() const = 0;

    virtual size_t getHeight() const = 0;

    virtual float getFocal() const = 0;

    virtual std::string getBrand() const = 0;

    virtual std::string getModel() const = 0;

    virtual std::string getLensModel() const = 0;

    /** Open the file for checking and parsing */
    virtual bool open( const std::string & sFileName ) = 0;

    /**Verify if the file has metadata*/
    virtual bool doesHaveExifInfo() const = 0;

    /** Print all data*/
    virtual std::string getExifDataString() const = 0;

    /** Get all data */
    virtual std::map<std::string, std::string> getExifData () const = 0;

};

} // namespace exif
} // namespace openMVG
#endif //EXIF_IO_HPP

