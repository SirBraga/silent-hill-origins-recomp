#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171770
// Address: 0x171770 - 0x1718e8
void sub_00171770_0x171770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171770_0x171770");
#endif

    switch (ctx->pc) {
        case 0x171798u: goto label_171798;
        case 0x1717f8u: goto label_1717f8;
        case 0x17182cu: goto label_17182c;
        case 0x171850u: goto label_171850;
        default: break;
    }

    ctx->pc = 0x171770u;

    // 0x171770: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x171770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x171774: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x171774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x171778: 0x244355f0  addiu       $v1, $v0, 0x55F0
    ctx->pc = 0x171778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
    // 0x17177c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x171780: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x171780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x171784: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x171784u;
    {
        const bool branch_taken_0x171784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171784u;
        // 0x171788: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171784) {
            ctx->pc = 0x1717ECu;
            goto label_1717ec;
        }
    }
    ctx->pc = 0x17178Cu;
    // 0x17178c: 0x24870090  addiu       $a3, $a0, 0x90
    ctx->pc = 0x17178cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x171790: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x171790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x171794: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x171794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_171798:
    // 0x171798: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x171798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17179c: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x17179cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1717a0: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x1717a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1717a4: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x1717a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1717a8: 0x686a0017  ldl         $t2, 0x17($v1)
    ctx->pc = 0x1717a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1717ac: 0x6c6a0010  ldr         $t2, 0x10($v1)
    ctx->pc = 0x1717acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1717b0: 0x686b001f  ldl         $t3, 0x1F($v1)
    ctx->pc = 0x1717b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1717b4: 0x6c6b0018  ldr         $t3, 0x18($v1)
    ctx->pc = 0x1717b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1717b8: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x1717b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1717bc: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x1717bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1717c0: 0xb0c9000f  sdl         $t1, 0xF($a2)
    ctx->pc = 0x1717c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1717c4: 0xb4c90008  sdr         $t1, 0x8($a2)
    ctx->pc = 0x1717c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1717c8: 0xb0ca0017  sdl         $t2, 0x17($a2)
    ctx->pc = 0x1717c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1717cc: 0xb4ca0010  sdr         $t2, 0x10($a2)
    ctx->pc = 0x1717ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1717d0: 0xb0cb001f  sdl         $t3, 0x1F($a2)
    ctx->pc = 0x1717d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1717d4: 0xb4cb0018  sdr         $t3, 0x18($a2)
    ctx->pc = 0x1717d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1717d8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1717d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1717dc: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1717DCu;
    {
        const bool branch_taken_0x1717dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1717E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717DCu;
        // 0x1717e0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1717dc) {
            ctx->pc = 0x171798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171798;
        }
    }
    ctx->pc = 0x1717E4u;
    // 0x1717e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1717E4u;
    {
        const bool branch_taken_0x1717e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1717e4) {
            ctx->pc = 0x171824u;
            goto label_171824;
        }
    }
    ctx->pc = 0x1717ECu;
label_1717ec:
    // 0x1717ec: 0x24870090  addiu       $a3, $a0, 0x90
    ctx->pc = 0x1717ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x1717f0: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x1717f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1717f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1717f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1717f8:
    // 0x1717f8: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x1717f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1717fc: 0xdc690008  ld          $t1, 0x8($v1)
    ctx->pc = 0x1717fcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x171800: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x171800u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x171804: 0xdc6b0018  ld          $t3, 0x18($v1)
    ctx->pc = 0x171804u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x171808: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x171808u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x17180c: 0xfcc90008  sd          $t1, 0x8($a2)
    ctx->pc = 0x17180cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 9));
    // 0x171810: 0xfcca0010  sd          $t2, 0x10($a2)
    ctx->pc = 0x171810u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 10));
    // 0x171814: 0xfccb0018  sd          $t3, 0x18($a2)
    ctx->pc = 0x171814u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 11));
    // 0x171818: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x171818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x17181c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17181Cu;
    {
        const bool branch_taken_0x17181c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x171820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17181Cu;
        // 0x171820: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17181c) {
            ctx->pc = 0x1717F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1717f8;
        }
    }
    ctx->pc = 0x171824u;
label_171824:
    // 0x171824: 0xc093afa  jal         func_24EBE8
    ctx->pc = 0x171824u;
    SET_GPR_U32(ctx, 31, 0x17182Cu);
    ctx->pc = 0x171828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171824u;
    // 0x171828: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x171824u, 0x17182Cu)) {
        return;
    }
    ctx->pc = 0x17182Cu;
label_17182c:
    // 0x17182c: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x17182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x171830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171834: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x171834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171838: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x171838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17183c: 0xc7ab0068  lwc1        $f11, 0x68($sp)
    ctx->pc = 0x17183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x171840: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x171840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x171844: 0xc7aa006c  lwc1        $f10, 0x6C($sp)
    ctx->pc = 0x171844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x171848: 0xc7a90070  lwc1        $f9, 0x70($sp)
    ctx->pc = 0x171848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x17184c: 0xc7a80074  lwc1        $f8, 0x74($sp)
    ctx->pc = 0x17184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_171850:
    // 0x171850: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x171850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x171854: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x171854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x171858: 0x46046802  mul.s       $f0, $f13, $f4
    ctx->pc = 0x171858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x17185c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x17185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x171860: 0x46056082  mul.s       $f2, $f12, $f5
    ctx->pc = 0x171860u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x171864: 0xc466000c  lwc1        $f6, 0xC($v1)
    ctx->pc = 0x171864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x171868: 0x46035842  mul.s       $f1, $f11, $f3
    ctx->pc = 0x171868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x17186c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17186cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x171870: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171874: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x171874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x171878: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x171878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17187c: 0x0  nop
    ctx->pc = 0x17187cu;
    // NOP
    // 0x171880: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x171880u;
    {
        const bool branch_taken_0x171880 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x171884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171880u;
        // 0x171884: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171880) {
            ctx->pc = 0x17188Cu;
            goto label_17188c;
        }
    }
    ctx->pc = 0x171888u;
    // 0x171888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17188c:
    // 0x17188c: 0x46045002  mul.s       $f0, $f10, $f4
    ctx->pc = 0x17188cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x171890: 0x46054842  mul.s       $f1, $f9, $f5
    ctx->pc = 0x171890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x171894: 0x46034082  mul.s       $f2, $f8, $f3
    ctx->pc = 0x171894u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x171898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17189c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17189cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1718a0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1718a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1718a4: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x1718a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1718a8: 0x0  nop
    ctx->pc = 0x1718a8u;
    // NOP
    // 0x1718ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1718ACu;
    {
        const bool branch_taken_0x1718ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1718B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718ACu;
        // 0x1718b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718ac) {
            ctx->pc = 0x1718B8u;
            goto label_1718b8;
        }
    }
    ctx->pc = 0x1718B4u;
    // 0x1718b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1718b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1718b8:
    // 0x1718b8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1718B8u;
    {
        const bool branch_taken_0x1718b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1718BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718B8u;
        // 0x1718bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718b8) {
            ctx->pc = 0x1718C8u;
            goto label_1718c8;
        }
    }
    ctx->pc = 0x1718C0u;
    // 0x1718c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1718C0u;
    {
        const bool branch_taken_0x1718c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718C0u;
        // 0x1718c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718c0) {
            ctx->pc = 0x1718D8u;
            goto label_1718d8;
        }
    }
    ctx->pc = 0x1718C8u;
label_1718c8:
    // 0x1718c8: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1718c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1718cc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1718CCu;
    {
        const bool branch_taken_0x1718cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1718D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718CCu;
        // 0x1718d0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718cc) {
            ctx->pc = 0x171850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171850;
        }
    }
    ctx->pc = 0x1718D4u;
    // 0x1718d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1718d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1718d8:
    // 0x1718d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1718d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1718dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1718DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1718E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718DCu;
        // 0x1718e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1718DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1718E4u;
    // 0x1718e4: 0x0  nop
    ctx->pc = 0x1718e4u;
    // NOP
    ctx->pc = 0x1718e8u;
}
