cmake_minimum_required(VERSION 3.15)
# set(CMAKE_VERBOSE_MAKEFILE ON)

# The version number here is the canonical one for the project.
# Run rs-bump-version to increment the patch number
# and propagate the new version to version.hpp.

project(rs-unit-test
    VERSION 1.0.0
    LANGUAGES CXX
)

set(executable PERMISSIONS
    OWNER_READ OWNER_WRITE OWNER_EXECUTE
    GROUP_READ GROUP_EXECUTE
    WORLD_READ WORLD_EXECUTE
)

install(FILES rs-unit-test.hpp DESTINATION include)
install(FILES ../bin/rs-bump-version DESTINATION bin ${executable})
install(FILES ../bin/rs-update-tests DESTINATION bin ${executable})
