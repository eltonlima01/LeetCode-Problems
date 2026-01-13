#!/bin/bash

set -e
set -x

TEST_DIR="test"
BUILD_DIR="build"
PROJECT_NAME="test"

pushd $TEST_DIR

cmake -B $BUILD_DIR

if [ -d $BUILD_DIR ]; then
    cmake --build $BUILD_DIR
    cmake --build $BUILD_DIR

    $BUILD_DIR/$PROJECT_NAME
fi

popd