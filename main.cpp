string solution(vector<string> participant, vector<string> completion) {
    map<string, int> _map;
    string answer = "";

    for (string name : completion)
    {
        int count = 1;

        if (_map.find(name) != _map.end())
            _map[name]++;
        else
            _map.insert({ name, count });
    }

    for (string name : participant) {
        if (_map.find(name) == _map.end()) {
            answer = name;
            break;
        }
        else
        {
            if (_map[name] == 0)
            {
                answer = name;
                break;
            }
            else
                _map[name]--;
        }
    }

    return answer;
}
