//
//  StorageType.hpp
//  Emojicode
//
//  Created by Theo Weidmann on 05/01/2017.
//  Copyright © 2017 Theo Weidmann. All rights reserved.
//

#ifndef StorageType_hpp
#define StorageType_hpp

namespace EmojicodeCompiler {

enum class StorageType {
    Simple,
    SimpleOptional,
    Box,
    SimpleError,
};

}  // namespace EmojicodeCompiler

#endif /* StorageType_hpp */
