#!/bin/bash

function clean_top_dir()
{
    declare dirlist=`dir $1`; 
    for dir in $dirlist
    do
        current_dir="$1/$dir/build";
        if [ -d $current_dir ]
        then
            cd $current_dir;
            echo -e $current_dir;
            make clean;
            cd --;
        fi;
        if [ -f "$current_dir/Makefile" ]
        then
            cd $current_dir;
            echo -e $current_dir;
            make clean;
            cd --;
        fi;
    done;
}

declare workdir=`pwd`;
declare dirlist=`dir $workdir`;
for dir in $dirlist
do
    current_dir="$workdir/$dir";
    if [ -d $current_dir ]
    then
        clean_top_dir $current_dir;
    fi;
done;
