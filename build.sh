#!/bin/bash

# Function to build a specific project
build_project() {
    local project_name=$1
    local source_dir="$(pwd)/$project_name"
    local build_dir="$(pwd)/../trainings_build/$project_name"

    # Check if the project directory exists
    if [ ! -d "$source_dir" ]; then
        echo "Error: Project '$project_name' does not exist in the trainings directory."
        exit 1
    fi

    # Create the build directory if it doesn't exist
    if [ -d "$build_dir" ]; then
        rm -rf "$build_dir"
    fi

    mkdir -p "$build_dir"

    # Navigate to the build directory
    cd "$build_dir" || exit

    # Run CMake to configure the project and generate build files
    cmake "$source_dir"

    # Build the project
    cmake --build .

    # Navigate back to the original directory
    cd - || exit

    echo "Build process for project '$project_name' completed."
}

# Function to build all projects in the trainings directory
build_all_projects() {
    local source_dir="$(pwd)/"
    local build_dir="$(pwd)/../trainings_build/"

    if [ ! -f $(pwd)/CMakeLists.txt ]; then
        echo "Error, no CMakeLists.txt was found in $source_dir"
        exit 1
    fi

    # clear existing build
    if [ -d $build_dir ]; then
        rm -rf $build_dir
    fi

    # create build directory
    mkdir -p $build_dir

    # Navigate to the build directory
    cd "$build_dir" || exit

    # Run CMake to configure the project and generate build files
    cmake "$source_dir"

    # Build the project
    cmake --build .

    # Navigate back to the original directory
    cd - || exit

    echo "Build all projcets is completed"
}

# Check the command-line arguments
if [ "$#" -lt 1 ]; then
    echo "Usage: $0 build-all | build-one project-name"
    exit 1
fi

if [ "$1" == "build-all" ]; then
    build_all_projects
elif [ "$1" == "build-one" ]; then
    if [ "$#" -ne 2 ]; then
        echo "Usage: $0 build-one project-name"
        exit 1
    fi
    build_project "$2"
else
    echo "Unknown command: $1"
    echo "Usage: $0 build-all | build-one project-name"
    exit 1
fi
