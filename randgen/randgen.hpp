/**
 * @brief Very basic component
 * @author Denis Arnaud <denis.arnaud_fedora@m4x.org>
 * @date 19-JAN-2012
 * @license GPLv3
 */
#ifndef __RANDGEN_RANDGEN_HPP
#define __RANDGEN_RANDGEN_HPP

// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include <iosfwd>
#include <string>
// ComBase
#include <combase/combase.hpp>

namespace randgen {

  /**
   * @brief Base class for the Business Object Model (BOM).
   */
  class RandGen : public combase::BomAbstract {
  public:
    // /////////////// Display Support Methods //////////////
    /**
     * Dump a Business Object into an output stream.
     *
     * @param ostream& the output stream.
     */
    void toStream (std::ostream& ioOut) const {
      ioOut << describe();
    }

    /**
     * Read a Business Object from an input stream.
     *
     * @param istream& the input stream.
     */
    virtual void fromStream (std::istream& ioIn) {}

    /**
     * Display of the structure.
     */
    virtual const std::string describe() const {
      return std::string ("randgen::RandGen");
    }


  public:
    // ////////////////// Initialisation and Destruction ///////////////////
    /**
     * Default Constructor.
     */
    RandGen() {}

    /**
     * Destructor.
     */
    virtual ~RandGen() {}
  };
}

#endif // __RANDGEN_RANDGEN_HPP
