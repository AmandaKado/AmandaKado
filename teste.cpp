{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyPZg+zUF+xJxoTkbSwst0JA",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/AmandaKado/AmandaKado/blob/main/teste.cpp\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": 1,
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "FMVtFnwlyhB6",
        "outputId": "475756b8-2f3f-4f79-903b-98d79d7b0dc5"
      },
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Writing teste.cpp\n"
          ]
        }
      ],
      "source": [
        "%%writefile teste.cpp\n",
        "#include <stdio.h>\n",
        "\n",
        "int main(void) {\n",
        "    float nota1, nota2 , media;\n",
        "\n",
        "    printf(\"Digite a primeira nota: \");\n",
        "    scanf(\"%f\", &nota1);\n",
        "\n",
        "        printf(\"Digite a seguhnda nota: \");\n",
        "    scanf(\"%f\", &nota2);\n",
        "\n",
        "    media = (nota1 + nota2)/2;\n",
        "\n",
        "    if (media > 7)\n",
        "      printf(\"Aprovado! \\n\");\n",
        "    else\n",
        "      printf(\"Reprovado! \\n\");\n",
        "    return 0;\n",
        "}"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ teste.cpp -o testec"
      ],
      "metadata": {
        "id": "CXMXtl8Azxe7"
      },
      "execution_count": 2,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "! ./testec"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "FzATJHmHz1zz",
        "outputId": "f8f1c0ad-53a7-4798-db2f-4ab00f534cd1"
      },
      "execution_count": 4,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Digite a primeira nota: 10\n",
            "Digite a seguhnda nota: 5\n",
            "Aprovado! \n"
          ]
        }
      ]
    }
  ]
}