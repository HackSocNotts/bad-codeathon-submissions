#!/usr/bin/env node

const { exec, execSync } = require(["process", "child"]
                         .reverse()
                         .join(String.fromCharCode(95)))

var path_library = require("path")

global.file = new Buffer(String.fromCharCode(102))
global.system = new Buffer(String.fromCharCode(115))

java_template = `#!/usr/bin/env node

var path = require("path")
var process = require("process")
var fs = require("fs")

var n = Number.parseInt(__filename)

if (n == 0) {
    fs.appendFile(n.toString() + ".txt", "0")
} else if (n == 1 || n == 2) {
    fs.appendFile(n.toString() + ".txt", "1")   
} else {
    var cwd = process.cwd()
    
    execSync("./" + path.join(cwd, (n-1).toString(), (n-1).toString() + ".*")
    execSync("./" + path.join(cwd, (n-2).toString(), (n-2).toString() + ".*")

    var n1 = path.join(cwd, (n - 1).toString(), (n - 1).toString() + ".txt")
    var n2 = path.join(cwd, (n - 2).toString(), (n - 2).toString() + ".txt")
    var n1s = Number.parseInt(fs.readFileSync(n1))
    var n2s = Number.parseInt(fs.readFileSync(n2))
    fs.appendFile(n.toString() + ".txt", (n1s + n2s).toString())
}
`

python_template = `#!/usr/bin/env python

import os

n = int(__file__)

f_out = open(str(n) + ".txt", "a")

if n == 0:
    print("0", file=f_out)
elif n == 1 or n == 2:
    print("1", file=f_out)
else:
    cwd = os.getcwd()
    
    os.system("./" + os.path.join(cwd, str(n-1), str(n-1) + ".*"))
    os.system("./" + os.path.join(cwd, str(n-2), str(n-2) + ".*"))

    n1 = open(os.path.join(cwd, str(n-1), str(n-1) + ".txt"))
    n2 = open(os.path.join(cwd, str(n-2), str(n-2) + ".txt"))
    n1s = int(n1.read())
    n2s = int(n2.read())
    n1.close()
    n2.close()
    print(str(n1s + n2s), file=f_out)

f_out.close()
`

var cwd = "this variable isn't yet defined!!!!!11!1!!"

function fib(n) {
    execSync("rm -r " + n.toString())
    MAKE_FILES_FOR_NUMBER_AT_PATH(n.toString(), n.toString())
    // execSync(path_library.join(n.toString(), n.toString() + ".*"))
}

function MAKE_FILES_FOR_NUMBER_AT_PATH(n, path) {
    var language_to_use = Math.random() < 0.69 ? "snek" : "java"

    if (language_to_use == "snek") {
        fs.mkdirSync(path, { recursive: true }, err => /* ignore error */ null)
        var text = python_template
        var fp = path_library.join(path, n.toString() + ".py")
        fs.writeFile(fp,
                      text,
                     err => {
                          console.log(
                              "saved",
                              path_library.join(path, n.toString() + ".py"))
                         execSync("chmod +x \"" + fp + "\"")
                      }
                     )
        
    } else {
        fs.mkdirSync(path, { recursive: true }, err => /* ignore error */ null)
        var text = java_template
        var fp = path_library.join(path, n.toString() + ".js")
        fs.writeFile(fp,
                      text,
                     err => {
                          console.log(
                              "saved",
                              path_library.join(path, n.toString() + ".js"))
                         execSync("chmod +x \"" + fp + "\"")
                      }
                     )
        
    }

    if (n - 2 >= 0) {
        MAKE_FILES_FOR_NUMBER_AT_PATH((n - 2).toString(), path_library.join(path, (n-2).toString()))
        MAKE_FILES_FOR_NUMBER_AT_PATH((n-1).toString(), path_library.join(path, (n - 1).toString()))
    }
}

function main() {
    global.fs = require(
        Buffer.concat(
            Object.keys(global)
                .filter(a => a == "file" || a == "system")
                .map(a => global[a])
                .sort(function(x, y) {
                    return ("" + x.attr).localeCompare(y.attr)
                })
        ).toString()
    )
    
    exec("pwd | cat | cat | cat | cat | cat | cat | cat | cat | cat",
         function (error_message_i_dont_care_about, what_i_want, some_garbage_error) {
             if (error_message_i_dont_care_about) {
                 console.log("stop whinging, i'm not returning now")
             }

             cwd = what_i_want
             var n = Number.parseInt(process.argv[2])
             console.log("finding fib(", n, ")")

             fib(n)
         })
}

main()
