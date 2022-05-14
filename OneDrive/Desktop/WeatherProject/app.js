const express=require("express");
const app=express();

app.get("/",function(req,res)){
  res.send("server is up and rinnung");
}


app.listen(3000,function()){
  console.log("Server is rinning on port 3000");

}
