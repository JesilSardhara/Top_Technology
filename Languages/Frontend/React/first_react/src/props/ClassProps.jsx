import React, { Component } from 'react'

class ClassProps extends Component {
    constructor(props) {
        super(props);
        this.data = props;
    }
    render() {
        return (
            <div className="col-md-4">
                <div className="card" style={{ maxWidth: 320 }}>
                    <img src={this.data.img} className="card-img-top" alt="..." />
                    <div className="card-body">
                        <h4 className="card-title">{this.data.title}</h4>
                        <p className="card-text">{this.data.text}</p>
                        <button href="#" className="btn-solid theme-primary">Go somewhere</button>
                    </div>
                </div>
            </div>

        )
    }
}

export default ClassProps