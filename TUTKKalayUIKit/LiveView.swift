//
//  LiveView.swift
//  TUTKKalayUIKit
//
//  Created by Terry Lee on 2020/10/29.
//

import Foundation
import KIDewarp

public class LiveView {
    
    public var contentView = GLView()
    
    public init() {
        
    }
    
    public func test() {
        contentView?.addPanGesture()
    }
}
