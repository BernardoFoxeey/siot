from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')
    print("=" * 40)
    print("COMANDO RECEBIDO DO NAVEGADOR!")
    print(f"    - Alvo: LED número {led_num}")
    print(f"   - Ação: '{action}'")
    print("=" * 40)

if __name__ == '__main__':
    print ("Servidor de testes iniciado!")
    print ("Abra o navegador e acesse: http://localhost:5000")
    app.run(debug=True, host='0.0.0.0', port=5000)
