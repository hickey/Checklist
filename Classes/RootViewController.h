//
//  RootViewController.h
//  Checklist
//
//  Created by Gerard Hickey on 10/28/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>


@class DetailViewController;

@interface RootViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
    
    DetailViewController *detailViewController;
    
    NSFetchedResultsController *fetchedResultsController;
    NSManagedObjectContext *managedObjectContext;
}

@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

- (void)insertNewObject:(id)sender;

@end
