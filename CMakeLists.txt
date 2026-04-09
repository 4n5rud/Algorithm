cmake_minimum_required(VERSION 3.20)
project(algorithm_ps)

set(CMAKE_CXX_STANDARD 20)

# BOJ 폴더 내의 모든 .cc 파일을 재귀적으로 탐색
file(GLOB_RECURSE SOURCES "BOJ/*.cc")

foreach(file ${SOURCES})
    # 파일 경로에서 확장자를 제외한 파일 이름만 추출 (예: 2512)
    get_filename_component(name ${file} NAME_WE)

    # 각 파일(${file})을 해당 이름(${name})의 단독 실행 파일로 생성
    # 기존 코드에서 2417.cc와 2512.cc를 명시했던 부분을 삭제했습니다.
    add_executable(${name} ${file})
endforeach()