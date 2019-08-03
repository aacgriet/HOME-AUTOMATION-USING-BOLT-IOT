var dual =dualButton("left");
dual.first_button({name:"BULB1 0FF", action:"digitalWrite", 
                  pin:"1", value:"LOW", bgcolor:"blue",
                  shape:"rectangle", text_color:"white"})

dual.second_button({name:"BULB1 ON", action:"digitalWrite", 
                    pin:"1", value:"HIGH", bgcolor:"black",
                    shape:"rectangle", text_color:"white"})
                    

var dual2 =dualButton("right");
dual2.first_button({name:"BULB2 0FF", action:"digitalWrite", 
                  pin:"2", value:"LOW", bgcolor:"orange",
                  shape:"rectangle", text_color:"white"})

dual2.second_button({name:"BULB2 ON", action:"digitalWrite", 
                    pin:"2", value:"HIGH", bgcolor:"purple",
                    shape:"rectangle", text_color:"white"})
                    


