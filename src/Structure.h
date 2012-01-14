#ifndef STRUCTURE_H_
#define STRUCTURE_H_

class Coordinates;
class LatticeVectors;
class NeighborList;
class Neighbor;
class AtomIterator;
class Displacement;

class Structure {
public:
    Structure();
    virtual ~Structure();

    void setCoordinates(Coordinates* coordinates);
    Coordinates* getCoordinates();
    void setLatticeVectors(const LatticeVectors* latticeVectors);
    const LatticeVectors* getLatticeVectors() const;
    void setNeighborList(const NeighborList* neighborList);
    const NeighborList* getNeighborList() const;

    int getAtomCount() const;
    AtomIterator getAtomIterator() const;
    int getBondCount() const;

    void moveAtom(int index, const Displacement&);
private:
    Coordinates* coordinates;
    const LatticeVectors* latticeVectors;
    const NeighborList* neighborList;
};
#endif
