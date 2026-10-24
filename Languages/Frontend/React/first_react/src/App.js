  import logo from './logo.svg';
  import './App.css';
  import ClassComponent from './component_js/ClassCompo';
  import FunCompo from './component_js/FunCompo';
  import Hello from './Jsx/Helllo';
  import ClassProps from './props/ClassProps';
  import MainProps from './props/MainProps';
  import FuncProps from './props/FuncProps';
  import ClassState from './State/ClassState';
  import FunState from './State/FunState';
  import FunObject from'./State/FunObjec'

  function App() {
    return (
      
        <div>
          {/* <ClassComponent/> 
          <FunCompo/>
          <Hello/> */}
          {/* <MainProps/> */}
          {/* <ClassState/> */}
          {/* <FunState /> */}
          <FunObject />
        </div>
      
    );
  } 

  export default App;