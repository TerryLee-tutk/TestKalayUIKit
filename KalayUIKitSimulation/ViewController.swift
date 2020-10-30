//
//  ViewController.swift
//  KalayUIKitSimulation
//
//  Created by Terry Lee on 2020/10/29.
//

import UIKit
import TUTKKalayUIKit

class ViewController: UIViewController {

    @IBOutlet weak var viewTest: UIView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let liveView = LiveView()
        liveView.test()
        let glView = liveView.contentView
        glView?.addPanGesture()
    }
}

