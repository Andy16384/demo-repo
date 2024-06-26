from flask import Flask
from redis import Redis

app = Flask(__name__)
redis = Redis(host='redis', port=6379)

@app.route('/')
def hello():
    redis.incr('hits')
    str = 'Hello World! This page has been visited {} times.'.format(redis.get('hits').decode('utf-8'))
    return str + 'Test Change'

if __name__ == "__main__":
    app.run(host="0.0.0.0", debug=True)
