# route-writer
The goal of this program is to take in input of addresses and the number of available drivers and find the best way to split up the routes among the drivers and the best routes for each driver to minimize time spent.

This will have many parts:
1. We will use some sort of API which can find the distances between the house by way of vehicle
2. We will group the houses into "d" clusters, where d is a number of drivers specified by the user to drive the routes
3. We will use Dijkstra's algorithm to find the optimal route within each cluster


Roles:

Dijkstra's implementation: Lucas/Ryder

Address Grouper: Evan

Distance API: Vibha + Lucas/Ryder

Front End: Sasha


Not all roles are of equal difficulty -- When a role is completed, if possible, help with other roles. Currently, I believe the API is likely the most time consuming element (just in terms of research).
