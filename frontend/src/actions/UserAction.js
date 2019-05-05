import { ActionTypes } from 'const';

class UserAction {

    static setUser({name, win_count, loss_count, game}) {
        return {
            type: ActionTypes.SET_USER,
            name,
            win_count,
            loss_count,
            game,
        }
    }

}

export default UserAction;