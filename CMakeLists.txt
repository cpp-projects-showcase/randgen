#
cmake_minimum_required (VERSION 2.6)

##
# CMake macros for the project
include (config/project_config_embeddable.cmake)

##
# Project info
set_project_names (randgen RandGen)
set_project_brief ("C++ Random Generation")
set_project_versions (99 99 99)

##
# Project options
# The parameters are:
#  * whether or not the documentation must be built and installed
set_project_options (on on)


#####################################
##            Packaging            ##
#####################################
#
packaging_init (${PROJECT_NAME})
packaging_set_summary (
"${PROJECT_NAME} is part of the showcase platform for C++ projects.

The random generation (in short, 'randgen') project contains a mere random
generator, which makes use of the basic C++ class specified within the
'combase' project.
That simple component/project shows an example of how to import another
component. For instance, CMake imports are showcased.")
packaging_set_contact ("Denis Arnaud <denis_arnaud - at - users dot sourceforge dot net>")
packaging_set_vendor ("Denis Arnaud")

#
packaging_set_other_options (TBZ2 "TBZ2;TGZ")


########################################
##            Dependencies            ##
########################################
#
get_external_libs (git "boost 1.41" combase)


##############################################
##           Build, Install, Export         ##
##############################################
##
# Initialise the building process
init_build ()

##
# Sub-modules
add_modules (${PROJECT_NAME})

##
# For other projects to use RandGen, install a few helpers for standard
# build/packaging systems: CMake, GNU Autotools (M4), pkgconfig/pc, randgen-config
install_dev_helper_files ()


#####################################
##              Tests              ##
#####################################
##
# Initialise the unit test process
init_test ()

##
# Test suites
add_test_suite (${PROJECT_NAME})


#######################################
##          Overall Status           ##
#######################################
display_status ()


#######################################
##         CMake Cache Storage       ##
#######################################
store_in_cache ()
