import React,{useState} from "react";
import ImageData from "./ImageData";

    function FunObject(){
        const[data,setdata] = useState({
            name :"couly",
            count : 0,
            isImage : true
        })

        console.log(data)

        return(
            <div>
                <h1>Name : {data.name}</h1>

                <button onClick={()=>setdata({...data,name:"Chagan is Your Name"})}>Change NAme</button>


                <h1>Count : {data.count}</h1>

                <button onClick={()=>setdata({...data,count : data.count+1})}>Incriment</button>
                <button onClick={()=>setdata({...data,count:data.count-1 })}>DEcriment</button>

                <hr />
                <br />
                <button onClick={()=>setdata({...data,isImage:true})}>Show</button>
                <button onClick={()=>setdata({...data,isImage:false})}>hide</button>    
                {
                    data.isImage?<ImageData/>:false 
                }

            </div>
    )
}

export default FunObject;