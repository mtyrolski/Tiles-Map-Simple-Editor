using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace Loader
{
    public partial class Loader : Form
    {
        //path,name,number
        private List<Tuple<string, string, int>> source = new List<Tuple<string, string, int>>();

        private const int ERROR_INDEX = -1;

        public Loader()
        {
            InitializeComponent();
        }

        private void authorPage_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            System.Diagnostics.Process.Start("https://github.com/mvxxx");
        }

        private void runButton_Click(object sender, EventArgs e)
        {
            if(checkCohesion())
            {
                printValues();
           }
        }

        private bool checkCohesion()
        {
            return false;
        }

        private void printValues()
        {
            //try
            //{
            //    File.WriteAllText("data/options/options.txt", "TilesMapEditor" +
            //         Environment.NewLine + dimX.Text + ' ' + dimY.Text +
            //         Environment.NewLine + unitWorldSizeX.Text + ' ' + unitWorldSizeY.Text +
            //         Environment.NewLine + (rotateBox.Checked == true ? '1' : '0'));

            //    var game = new System.Diagnostics.Process();
            //    game.StartInfo.FileName = "MV-Engine.exe";
            //    game.Start();
            //    this.Close();
            //}
            //catch (Exception ex)
            //{
            //    MessageBox.Show("An error occurred - please contact with author of project. /n " + ex.Message);
            //}
        }

        private void helpButton_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            System.Diagnostics.Process.Start("https://github.com/mvxxx/Tiles-Map-Simple-Editor");
        }

        private void sourceButton_Click(object sender, EventArgs e)
        {
            if(checkData())
            {
                emplaceNewSource();
            }
        }

        private void emplaceNewSource()
        {
            source.Add(new Tuple<string, string, int>(pathTB.Text, nameTB.Text, Convert.ToInt16(layerTB.Text)));
            data.Items.Add(new Tuple<string, int>(nameTB.Text,Convert.ToInt16(layerTB.Text)));
        }

        private bool checkData()
        {
            return checkTextBoxes() && checkUniqueData(); 
        }

        private bool checkUniqueData()
        {
            foreach (var info in source)
            {
                if (info.Item2 == nameTB.Text ||
                    info.Item3 == Convert.ToInt16(layerTB.Text))
                {
                    MessageBox.Show("Source with given parameters exists");
                    return false;
                }
            }

            return true; 
        }

        private bool checkTextBoxes()
        {
            if (pathTB.Text == "" || nameTB.Text == "" || layerTB.Text == "")
            {
                MessageBox.Show("Firstly, you need to fill the gaps");
                return false;
            }

            int parsedValue;
            if (!int.TryParse(layerTB.Text, out parsedValue) || parsedValue < 0)
            {
                MessageBox.Show("Layer must be a positive number");
                return false;
            }

            return true;
        }

        private void copyButton_Click(object sender, EventArgs e)
        {
            if (data.SelectedIndex != ERROR_INDEX)
            {
                pathTB.Text = source[data.SelectedIndex].Item1;
                nameTB.Text = source[data.SelectedIndex].Item2;
                layerTB.Text = source[data.SelectedIndex].Item3.ToString();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if(data.SelectedIndex!=ERROR_INDEX)
            {
                source.RemoveAt(data.SelectedIndex);
                data.Items.RemoveAt(data.SelectedIndex);
            }    
        }
    }
}
