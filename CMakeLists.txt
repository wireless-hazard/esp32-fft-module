if(DEFINED OFF_TARGET)
	add_library(fft fft.c)
	target_include_directories(fft PUBLIC ./)
else()
	set(COMPONENT_SRCS
    	"fft.c")

	set(COMPONENT_ADD_INCLUDEDIRS ".")

	set(COMPONENT_PRIV_REQUIRES main)

	register_component(fft)

	component_compile_options(PUBLIC -DMPU_COMPONENT_TRUE=1)
endif()