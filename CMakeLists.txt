if(DEFINED OFF_TARGET)
	add_library(fft "src/fft.c")
	target_include_directories(fft PUBLIC "include")
else()
	set(COMPONENT_SRCS
    	"src/fft.c")

	set(COMPONENT_ADD_INCLUDEDIRS "include")

	set(COMPONENT_PRIV_REQUIRES main)
	set(COMPONENT_PRIV_REQUIRES esp32-fft-module)


	register_component(esp32-fft-module)

	component_compile_options(PUBLIC -DMPU_COMPONENT_TRUE=1)
endif()