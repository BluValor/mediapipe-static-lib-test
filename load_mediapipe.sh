#!/bin/bash

cd mediapipe
git clone https://github.com/google/mediapipe.git
git apply ../my_mediapipe_changes.patch
cd ..