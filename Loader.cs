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
            if(checkTextboxes())
            {
                printValues();
            }
        }

        private bool checkTextboxes()
        {
            int parsedValue;

            if (!int.TryParse(dimX.Text, out parsedValue) || parsedValue <=0 ||
                !int.TryParse(dimY.Text, out parsedValue) || parsedValue <= 0 ||
                !int.TryParse(unitWorldSizeX.Text, out parsedValue) || parsedValue <= 0 ||
                !int.TryParse(unitWorldSizeY.Text, out parsedValue) || parsedValue <= 0)
            {
                MessageBox.Show("You need to enter integer >0 to each of textboxes");
                return false;
            }
            return true;
        }
        
        private void printValues()
        {
            try
            {
                File.WriteAllText("data/options/options.txt", "TilesMapEditor" +
                     Environment.NewLine + dimX.Text + ' ' + dimY.Text +
                     Environment.NewLine + unitWorldSizeX.Text + ' ' + unitWorldSizeY.Text +
                     Environment.NewLine + (rotateBox.Checked == true ? '1' : '0'));

                var game = new System.Diagnostics.Process();
                game.StartInfo.FileName = "MV-Engine.exe";
                game.Start();
                this.Close();
            }
            catch (Exception ex)
            {
                
                MessageBox.Show("An error occurred - please contact with author of project. /n " + ex.Message);
            }
        }

        private void helpButton_Click(object sender, EventArgs e)
        {

        }
    }
}
