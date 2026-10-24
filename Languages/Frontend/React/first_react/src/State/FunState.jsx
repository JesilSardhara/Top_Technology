import react, { useState } from 'react'
import ImageData from './ImageData';

function FunState() {
    const [name, setname] = useState("ketan")
    const [count, setcount] = useState(1)
    const [isImage, setimage] = useState(true)

    return (
        <div>
            <h1>Name : {name}</h1>

            <button onClick={() => setname("Kalu")}>Change Name</button>
            <button onClick={() => setname("Bhavya")}>Change NAme</button>


            <h1>Count : {count}</h1>
            <button onClick={() => setcount(count + 1)}>Increase 1</button>
            <button onClick={() => setcount(count - 1)}>Decriment -1</button>
            <button onClick={() => setcount(count * 0)}>reset</button>


            <hr />

            <br />
            <button onClick={() => setimage(true)}>show</button>
            <button onClick={() => setimage(!true)}>Hide</button>
            <button onClick={()=> setimage(!isImage)}   >Tougle</button>
            <br />

            {
                isImage ? <ImageData /> : true
            }
            <br />


        </div>
    )
}


export default FunState;