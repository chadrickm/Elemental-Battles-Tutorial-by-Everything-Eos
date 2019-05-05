
import React, { Component } from 'react';
//Components
import { connect } from 'react-redux';
import { Game, Login } from 'components';

class App extends Component {

  render() {
    console.log(this.props);
    const {username: {username}} = this.props;

    console.log(username);
    return (
      <div className="App">
        { username && <Game/> }
        { !username && <Login/> }
      </div>
    );
  }

}

const mapStateToProps = state => state;

// export a redux connected react component
export default connect(mapStateToProps)(App);
