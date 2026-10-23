import React from 'react'
import ClassProps from './ClassProps'
import FuncProps from './FuncProps'

function MainProps() {
    return (
        <div>
            <div className="container">
                <div className="row">
                    <ClassProps img="https://picsum.photos/id/1011/400/250"
                        title="Card 1"
                        text="Some quick example text to build on the card title and make up the bulk of the card’s content." />

                </div>
            </div>

            <div className="container">
                <h1>Hello this function props</h1>
                <div className="row">
                    <FuncProps title="nature 1" desc="hekskjdhku" img="https://cdn.pixabay.com/photo/2021/08/01/17/31/path-6514885_1280.jpg" />
                    <FuncProps title="nature 2" desc="hekskjdhku" img="https://cdn.pixabay.com/photo/2022/01/17/06/38/altai-6943982_1280.jpg" />

                    <FuncProps title="nature 3" desc="hekskjdhku" img="https://cdn.pixabay.com/photo/2023/04/05/21/09/bird-7902319_1280.jpg" />
                    <FuncProps title="nature 4" desc="hekskjdhku" img="https://cdn.pixabay.com/photo/2023/01/08/05/52/sunset-7704594_1280.jpg" />
                    <FuncProps title="nature 5" desc="hekskjdhku" img="https://cdn.pixabay.com/photo/2022/08/27/01/01/waves-7413448_1280.jpg" />
                    <FuncProps title="nature 6" desc="hekskjdhku" img="https://cdn.pixabay.com/photo/2021/08/01/17/31/path-6514885_1280.jpg" />
                </div>
            </div>
        </div>


    )
}

export default MainProps