// state : it's simple of vriable 
// state : same file use 
// state : it chnage name
// class and function 
// class : this.state : defined 
// class state :  this.setState() : change name 
// Events use
// class ; as object created done

import React, { Component } from 'react'
import ImageData from './ImageData';

class ClassState extends Component {
    constructor() {
        super();

        this.state = {
            name: "Ved",
            Counter: 0,
            isImage: true
        };
    }
    render() {
        return (
            <div>
                <h1>Name : {this.state.name}</h1>

                <button onClick={() => this.setState({ name: "Arya" })}>Change Name</button>

                <p>Counter : {this.state.Counter}</p>
                <button onClick={() => this.setState({ Counter: this.state.Counter + 1 })}>Increment Counter</button>
                <button onClick={() => this.setState({ Counter: this.state.Counter - 1 })}>Decrement Counter</button>
                <button onClick={() => this.setState({ Counter: this.state.Counter * 0 })}>Evel</button>

                <hr />
                <br />

                {
                    this.state.isImage ? <ImageData /> : false
                }

                <button onClick={() => this.setState({ isImage: false })}>Hide</button>
                <button onClick={() => this.setState({ isImage: true })}>Show</button>
                <button onClick={() => this.setState({ isImage: !this.state.isImage })}>Toggle</button>


            </div>
        )
    }
}

export default ClassState;