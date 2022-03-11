fun main(){
	repeat(readLine()!!.toInt()){
		var s=readLine()!!
		var a=s.count({it=='>'})
		var b=s.count({it=='<'})
		if(a>0&&b>0)println("?")
		else if(a>0)println(">")
		else if(b>0)println("<")
		else println("=")
	}
}