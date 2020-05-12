#!/bin/bash

# 清理 build
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
            if [ -f "$current_dir/Makefile" ]
            then
                make clean;
                rm -rf $current_dir/*;
            fi
            touch $current_dir/.build;
            cd --;
        fi
        if [ -f "$current_dir/Makefile" ]
        then
            cd $current_dir;
            echo -e $current_dir;
            make clean;
            cd --;
        fi
    done
}

# 全部 build
function build_top_dir()
{
    declare dirlist=`dir $1`;
    for dir in $dirlist
    do
        current_dir="$1/$dir/build";
        if [ -d $current_dir ]
        then
            cd $current_dir;
            echo -e $current_dir;
            cmake -DCMAKE_BUILD_TYPE=DEBUG ../;
            make;
            cd --;
        fi
        if [ -f "$current_dir/Makefile" ]
        then
            cd $current_dir;
            echo -e $current_dir;
            make;
            cd --;
        fi
    done
}


case "$1" in
    clean)
        declare workdir=`pwd`;
        declare dirlist=`dir $workdir`;
        for dir in $dirlist
        do
            current_dir="$workdir/$dir";
            if [ -d $current_dir ]
            then
                clean_top_dir $current_dir;
            fi
        done
        ;;
    build)
        declare workdir=`pwd`;
        declare dirlist=`dir $workdir`;
        for dir in $dirlist
        do
            current_dir="$workdir/$dir";
            if [ -d $current_dir ]
            then
                build_top_dir $current_dir;
            fi
        done
        ;;
    *)
        echo "Usage: $0{clean|build}";
        exit -1;
    ;;
esac
