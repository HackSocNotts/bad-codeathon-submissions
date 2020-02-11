
#!/usr/bin/env node

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
