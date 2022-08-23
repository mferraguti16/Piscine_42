#!/bin/sh
find . -type f,d | wc -l | awk {print $2};
