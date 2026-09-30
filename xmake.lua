set_project("CPB")
set_version("0.1.0")
set_languages("c++20")

add_rules("mode.debug", "mode.release")
set_warnings("all", "error")

option("BUILD_DOCS")
    set_default(true)
    set_showmenu(true)
    set_description("Automatically build documentation.")
option_end()

if has_config("BUILD_DOCS") then
    add_requires("doxygen", {system = false})
end

if is_plat("windows", "mingw") then
    set_toolchains("msvc")
    add_defines("WIN32_LEAN_AND_MEAN", "NOMINMAX")
    add_cxflags("/utf-8", "/Zc:__cplusplus")
end

-- Pravilo za generiranje dokumentacije
rule("docs")
    after_build(function (target)
        if has_config("BUILD_DOCS") then
            import("lib.detect.find_tool")
            local doxygen = find_tool("doxygen")
            
            if doxygen then
                os.vrunv(doxygen.program, {"doxyfile"})
            end
        end
    end)
rule_end()

-- Primjena na target
target("app")
    set_kind("binary")
    add_includedirs("include")
    add_files("src/*.cpp")
    add_rules("docs")