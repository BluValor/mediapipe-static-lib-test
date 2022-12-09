#!/bin/bash

git clone https://github.com/google/mediapipe.git mediapipe
cd mediapipe
git apply ../my_mediapipe_changes.patch
cd ..