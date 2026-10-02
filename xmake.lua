set_project("ProjectBones")
set_version("0.1.0")
set_languages("c++20")

add_rules("mode.debug", "mode.release")
set_warnings("all", "error")

if is_plat("windows", "mingw") then
    set_toolchains("msvc")
    add_defines("WIN32_LEAN_AND_MEAN", "NOMINMAX")
    add_cxflags("/utf-8", "/Zc:__cplusplus")
end

target("app")
    set_kind("binary")
    add_includedirs("include")
    add_files("src/*.cpp")
