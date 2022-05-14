const express=require("express");
const app=express();


app.get("/",function(req,res){

  res.sendFile(_dirname + "/index.html");
});

app.listen(3000,function(){

  console.log("Server ruunning on port 3000");
});
