import { ActionTypes } from 'const';

class UserAction {

    static setUser({username, win_count, loss_count, game}) {
        return {
            type: ActionTypes.SET_USER,
            username,
            win_count,
            loss_count,
            game,
        }
    }

}

export default UserAction;