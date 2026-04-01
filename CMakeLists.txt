cmake_minimum_required(VERSION 3.20)
project(algorithm_ps)

set(CMAKE_CXX_STANDARD 20)

# BOJ 폴더 내의 모든 .cc 파일을 리스트로 가져옴
file(GLOB_RECURSE SOURCES "BOJ/*.cc")

foreach(file ${SOURCES})
    # 파일 경로에서 확장자를 제외한 파일 이름만 추출 (예: 2164)
    get_filename_component(name ${file} NAME_WE)

    # 추출한 이름으로 개별 실행 파일 생성
    add_executable(${name} ${file}
            BOJ/unsolved/2417.cc
            BOJ/ing/2512.cc)
endforeach()