using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 实验3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        string num1 = "";
        string num2 = "";
        string display = "";
        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button8_Click(object sender, EventArgs e)
        {
            display += '7';
            display += ' ';
            textBox1.Text = display;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            display += '8';
            display += ' ';
            textBox1.Text = display;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            display += '9';
            display += ' ';
            textBox1.Text = display;
        }

        private void button12_Click(object sender, EventArgs e)
        {
            display += '4';
            display += ' ';
            textBox1.Text = display;
        }

        private void button11_Click(object sender, EventArgs e)
        {
            display += '5';
            display += ' ';
            textBox1.Text = display;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            display += '6';
            display += ' ';
            textBox1.Text = display;
        }

        private void button16_Click(object sender, EventArgs e)
        {
            display += '1';
            display += ' ';
            textBox1.Text = display;
        }

        private void button15_Click(object sender, EventArgs e)
        {
            display += '2';
            display += ' ';
            textBox1.Text = display;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            display += '3';
            display += ' ';
            textBox1.Text = display;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            display += '*';
            display += ' ';
            textBox1.Text = display;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            display += '-';
            display += ' ';
            textBox1.Text = display;
        }

        private void button13_Click(object sender, EventArgs e)
        {
            display += '+';
            display += ' ';
            textBox1.Text = display;
        }

        private void button17_Click(object sender, EventArgs e)
        {
            int temp=0;
            string[] all=display.Split(' ');
            for(int i = 1;i< all.Length; i+=2)
            {
                if (all[i]=="*")
                {
                    temp = (int.Parse(all[i + 1]) )* (int.Parse(all[i-1]));
                    all[i+1] = temp.ToString()+" ";
                    all[i] = null;
                    all[i - 1] = null;
                    all = all.Where(x => x != null).ToArray();
                }
                 if (all[i] == "/")
                {
                    temp = int.Parse(all[i - 1]) / int.Parse(all[i + 1]);
                    all[i+1] = temp.ToString() + " ";
                    all[i] = null;
                    all[i-1] = null;
                    all = all.Where(x => x != null).ToArray();
                }
            }
            int res = int.Parse(all[0]);
            for (int j=1;j<all.Length;j+=2)
            {
                if (all[j] == "+")
                    res += int.Parse(all[j + 1]);
                if (all[j] == "-")
                    res -= int.Parse(all[j + 1]);
            }
            display=res.ToString()+" ";
            textBox1.Text = display;
        }
            

        private void button18_Click(object sender, EventArgs e)
        {
            display += '0';
            display += ' ';
            textBox1.Text = display;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            display += '/';
            display += ' ';
            textBox1.Text = display;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            display = "";
            textBox1.Text = display;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (display.Length > 2)
                display = display.Substring(0, display.Length - 2);
            else
                display = "";
            textBox1.Text = display;
        }
    }
}
