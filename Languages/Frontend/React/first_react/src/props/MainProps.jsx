import React from 'react'
import ClassProps from './ClassProps'

function MainProps(){
    return(
        <div className="container">
            <div className = "row">
                <ClassProps img="https://picsum.photos/id/1011/400/250" 
                title="Card 1" 
                text= "Some quick example text to build on the card title and make up the bulk of the card’s content." />

            </div>
        </div>
    )
}

export default MainProps