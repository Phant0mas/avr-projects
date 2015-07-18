#!/bin/bash

avrdude -p m2560 -c wiring -P $1 -b 115200 -F -U flash:w:$2
