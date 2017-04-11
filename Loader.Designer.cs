namespace Loader
{
    partial class Loader
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.dimX = new System.Windows.Forms.TextBox();
            this.dimY = new System.Windows.Forms.TextBox();
            this.unitWorldSizeY = new System.Windows.Forms.TextBox();
            this.unitWorldSizeX = new System.Windows.Forms.TextBox();
            this.mainLabel = new System.Windows.Forms.Label();
            this.authorInfo = new System.Windows.Forms.Label();
            this.CellDimLabel = new System.Windows.Forms.Label();
            this.UnitWorldSizeLabel = new System.Windows.Forms.Label();
            this.authorPage = new System.Windows.Forms.LinkLabel();
            this.runButton = new System.Windows.Forms.Button();
            this.helpButton = new System.Windows.Forms.Button();
            this.rotateBox = new System.Windows.Forms.CheckBox();
            this.SuspendLayout();
            // 
            // dimX
            // 
            this.dimX.Location = new System.Drawing.Point(150, 67);
            this.dimX.Name = "dimX";
            this.dimX.Size = new System.Drawing.Size(100, 20);
            this.dimX.TabIndex = 0;
            // 
            // dimY
            // 
            this.dimY.Location = new System.Drawing.Point(150, 93);
            this.dimY.Name = "dimY";
            this.dimY.Size = new System.Drawing.Size(100, 20);
            this.dimY.TabIndex = 1;
            // 
            // unitWorldSizeY
            // 
            this.unitWorldSizeY.Location = new System.Drawing.Point(150, 164);
            this.unitWorldSizeY.Name = "unitWorldSizeY";
            this.unitWorldSizeY.Size = new System.Drawing.Size(100, 20);
            this.unitWorldSizeY.TabIndex = 3;
            // 
            // unitWorldSizeX
            // 
            this.unitWorldSizeX.Location = new System.Drawing.Point(150, 138);
            this.unitWorldSizeX.Name = "unitWorldSizeX";
            this.unitWorldSizeX.Size = new System.Drawing.Size(100, 20);
            this.unitWorldSizeX.TabIndex = 2;
            // 
            // mainLabel
            // 
            this.mainLabel.AutoSize = true;
            this.mainLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.mainLabel.Location = new System.Drawing.Point(25, -2);
            this.mainLabel.Name = "mainLabel";
            this.mainLabel.Size = new System.Drawing.Size(225, 31);
            this.mainLabel.TabIndex = 4;
            this.mainLabel.Text = "Tiles Map Editor";
            // 
            // authorInfo
            // 
            this.authorInfo.AutoSize = true;
            this.authorInfo.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.authorInfo.Location = new System.Drawing.Point(100, 29);
            this.authorInfo.Name = "authorInfo";
            this.authorInfo.Size = new System.Drawing.Size(78, 20);
            this.authorInfo.TabIndex = 5;
            this.authorInfo.Text = "by mvxxx";
            // 
            // CellDimLabel
            // 
            this.CellDimLabel.AutoSize = true;
            this.CellDimLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.CellDimLabel.Location = new System.Drawing.Point(28, 67);
            this.CellDimLabel.Name = "CellDimLabel";
            this.CellDimLabel.Size = new System.Drawing.Size(114, 48);
            this.CellDimLabel.TabIndex = 6;
            this.CellDimLabel.Text = "                                x:\r\nCell dimensions:\r\n                           " +
    "     y:\r\n";
            // 
            // UnitWorldSizeLabel
            // 
            this.UnitWorldSizeLabel.AutoSize = true;
            this.UnitWorldSizeLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.UnitWorldSizeLabel.Location = new System.Drawing.Point(28, 136);
            this.UnitWorldSizeLabel.Name = "UnitWorldSizeLabel";
            this.UnitWorldSizeLabel.Size = new System.Drawing.Size(114, 48);
            this.UnitWorldSizeLabel.TabIndex = 7;
            this.UnitWorldSizeLabel.Text = "                                x:\r\nAmmount of cells:\r\n                          " +
    "      y:\r\n";
            // 
            // authorPage
            // 
            this.authorPage.AutoSize = true;
            this.authorPage.Location = new System.Drawing.Point(13, 237);
            this.authorPage.Name = "authorPage";
            this.authorPage.Size = new System.Drawing.Size(90, 13);
            this.authorPage.TabIndex = 8;
            this.authorPage.TabStop = true;
            this.authorPage.Text = "Check my GitHub";
            this.authorPage.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.authorPage_LinkClicked);
            // 
            // runButton
            // 
            this.runButton.Location = new System.Drawing.Point(197, 232);
            this.runButton.Name = "runButton";
            this.runButton.Size = new System.Drawing.Size(75, 23);
            this.runButton.TabIndex = 10;
            this.runButton.Text = "Run Editor";
            this.runButton.UseVisualStyleBackColor = true;
            this.runButton.Click += new System.EventHandler(this.runButton_Click);
            // 
            // helpButton
            // 
            this.helpButton.Location = new System.Drawing.Point(109, 232);
            this.helpButton.Name = "helpButton";
            this.helpButton.Size = new System.Drawing.Size(75, 23);
            this.helpButton.TabIndex = 9;
            this.helpButton.Text = "Help";
            this.helpButton.UseVisualStyleBackColor = true;
            this.helpButton.Click += new System.EventHandler(this.helpButton_Click);
            // 
            // rotateBox
            // 
            this.rotateBox.AutoSize = true;
            this.rotateBox.Location = new System.Drawing.Point(151, 199);
            this.rotateBox.Name = "rotateBox";
            this.rotateBox.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.rotateBox.Size = new System.Drawing.Size(99, 17);
            this.rotateBox.TabIndex = 11;
            this.rotateBox.Text = "Include rotation";
            this.rotateBox.UseVisualStyleBackColor = true;
            // 
            // Loader
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 262);
            this.Controls.Add(this.rotateBox);
            this.Controls.Add(this.runButton);
            this.Controls.Add(this.helpButton);
            this.Controls.Add(this.authorPage);
            this.Controls.Add(this.UnitWorldSizeLabel);
            this.Controls.Add(this.CellDimLabel);
            this.Controls.Add(this.authorInfo);
            this.Controls.Add(this.mainLabel);
            this.Controls.Add(this.unitWorldSizeY);
            this.Controls.Add(this.unitWorldSizeX);
            this.Controls.Add(this.dimY);
            this.Controls.Add(this.dimX);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Name = "Loader";
            this.ShowIcon = false;
            this.Text = "Map Editor by mvxxx";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox dimX;
        private System.Windows.Forms.TextBox dimY;
        private System.Windows.Forms.TextBox unitWorldSizeY;
        private System.Windows.Forms.TextBox unitWorldSizeX;
        private System.Windows.Forms.Label mainLabel;
        private System.Windows.Forms.Label authorInfo;
        private System.Windows.Forms.Label CellDimLabel;
        private System.Windows.Forms.Label UnitWorldSizeLabel;
        private System.Windows.Forms.LinkLabel authorPage;
        private System.Windows.Forms.Button runButton;
        private System.Windows.Forms.Button helpButton;
        private System.Windows.Forms.CheckBox rotateBox;
    }
}

