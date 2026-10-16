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

// Function: sub_001BB6E0
// Address: 0x1bb6e0 - 0x1bb8b0
void sub_001BB6E0_0x1bb6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB6E0_0x1bb6e0");
#endif

    switch (ctx->pc) {
        case 0x1bb730u: goto label_1bb730;
        default: break;
    }

    ctx->pc = 0x1bb6e0u;

    // 0x1bb6e0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1bb6e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb6e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb6e8: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1bb6e8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6ec: 0x250b036c  addiu       $t3, $t0, 0x36C
    ctx->pc = 0x1bb6ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 876));
    // 0x1bb6f0: 0x69020343  ldl         $v0, 0x343($t0)
    ctx->pc = 0x1bb6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 835); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1bb6f4: 0x6d02033c  ldr         $v0, 0x33C($t0)
    ctx->pc = 0x1bb6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 828); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1bb6f8: 0x6903034b  ldl         $v1, 0x34B($t0)
    ctx->pc = 0x1bb6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 843); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1bb6fc: 0x6d030344  ldr         $v1, 0x344($t0)
    ctx->pc = 0x1bb6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 836); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1bb700: 0x8d04034c  lw          $a0, 0x34C($t0)
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 844)));
    // 0x1bb704: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1bb704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb708: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1bb708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb70c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1bb70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb710: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1bb710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb714: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bb714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bb718: 0x250a033c  addiu       $t2, $t0, 0x33C
    ctx->pc = 0x1bb718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 828));
    // 0x1bb71c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1bb71cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb724: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x1bb724u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb728: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1bb728u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb72c: 0x0  nop
    ctx->pc = 0x1bb72cu;
    // NOP
label_1bb730:
    // 0x1bb730: 0x15c0002c  bnez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BB730u;
    {
        const bool branch_taken_0x1bb730 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB730u;
        // 0x1bb734: 0x8d020354  lw          $v0, 0x354($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb730) {
            ctx->pc = 0x1BB7E4u;
            goto label_1bb7e4;
        }
    }
    ctx->pc = 0x1BB738u;
    // 0x1bb738: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB738u;
    {
        const bool branch_taken_0x1bb738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb738) {
            ctx->pc = 0x1BB758u;
            goto label_1bb758;
        }
    }
    ctx->pc = 0x1BB740u;
    // 0x1bb740: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB740u;
    {
        const bool branch_taken_0x1bb740 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb740) {
            ctx->pc = 0x1BB760u;
            goto label_1bb760;
        }
    }
    ctx->pc = 0x1BB748u;
    // 0x1bb748: 0x8d020350  lw          $v0, 0x350($t0)
    ctx->pc = 0x1bb748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 848)));
    // 0x1bb74c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bb74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb750: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1BB750u;
    {
        const bool branch_taken_0x1bb750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB750u;
        // 0x1bb754: 0xad02033c  sw          $v0, 0x33C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb750) {
            ctx->pc = 0x1BB878u;
            goto label_1bb878;
        }
    }
    ctx->pc = 0x1BB758u;
label_1bb758:
    // 0x1bb758: 0x10e00047  beqz        $a3, . + 4 + (0x47 << 2)
    ctx->pc = 0x1BB758u;
    {
        const bool branch_taken_0x1bb758 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB758u;
        // 0x1bb75c: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb758) {
            ctx->pc = 0x1BB878u;
            goto label_1bb878;
        }
    }
    ctx->pc = 0x1BB760u;
label_1bb760:
    // 0x1bb760: 0x14ec000e  bne         $a3, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB760u;
    {
        const bool branch_taken_0x1bb760 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        ctx->pc = 0x1BB764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB760u;
        // 0x1bb764: 0x28e20003  slti        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb760) {
            ctx->pc = 0x1BB79Cu;
            goto label_1bb79c;
        }
    }
    ctx->pc = 0x1BB768u;
    // 0x1bb768: 0x8d020324  lw          $v0, 0x324($t0)
    ctx->pc = 0x1bb768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 804)));
    // 0x1bb76c: 0x8d030320  lw          $v1, 0x320($t0)
    ctx->pc = 0x1bb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 800)));
    // 0x1bb770: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bb770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bb774: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1bb774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bb778: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB778u;
    {
        const bool branch_taken_0x1bb778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB778u;
        // 0x1bb77c: 0x28e20003  slti        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb778) {
            ctx->pc = 0x1BB79Cu;
            goto label_1bb79c;
        }
    }
    ctx->pc = 0x1BB780u;
    // 0x1bb780: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB780u;
    {
        const bool branch_taken_0x1bb780 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb780) {
            ctx->pc = 0x1BB79Cu;
            goto label_1bb79c;
        }
    }
    ctx->pc = 0x1BB788u;
    // 0x1bb788: 0x8d02034c  lw          $v0, 0x34C($t0)
    ctx->pc = 0x1bb788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 844)));
    // 0x1bb78c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bb790: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1bb790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1bb794: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bb794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bb798: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x1bb798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_1bb79c:
    // 0x1bb79c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB79Cu;
    {
        const bool branch_taken_0x1bb79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB79Cu;
        // 0x1bb7a0: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb79c) {
            ctx->pc = 0x1BB7BCu;
            goto label_1bb7bc;
        }
    }
    ctx->pc = 0x1BB7A4u;
    // 0x1bb7a4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1bb7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bb7a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bb7ac: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1bb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1bb7b0: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1bb7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1bb7b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1BB7B4u;
    {
        const bool branch_taken_0x1bb7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7B4u;
        // 0x1bb7b8: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7b4) {
            ctx->pc = 0x1BB870u;
            goto label_1bb870;
        }
    }
    ctx->pc = 0x1BB7BCu;
label_1bb7bc:
    // 0x1bb7bc: 0x14c0002e  bnez        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BB7BCu;
    {
        const bool branch_taken_0x1bb7bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7BCu;
        // 0x1bb7c0: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7bc) {
            ctx->pc = 0x1BB878u;
            goto label_1bb878;
        }
    }
    ctx->pc = 0x1BB7C4u;
    // 0x1bb7c4: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x1bb7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1bb7c8: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x1bb7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bb7cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bb7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bb7d0: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x1bb7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1bb7d4: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x1bb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1bb7d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bb7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb7dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BB7DCu;
    {
        const bool branch_taken_0x1bb7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7DCu;
        // 0x1bb7e0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7dc) {
            ctx->pc = 0x1BB878u;
            goto label_1bb878;
        }
    }
    ctx->pc = 0x1BB7E4u;
label_1bb7e4:
    // 0x1bb7e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB7E4u;
    {
        const bool branch_taken_0x1bb7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7e4) {
            ctx->pc = 0x1BB804u;
            goto label_1bb804;
        }
    }
    ctx->pc = 0x1BB7ECu;
    // 0x1bb7ec: 0x14ec0007  bne         $a3, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB7ECu;
    {
        const bool branch_taken_0x1bb7ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        if (branch_taken_0x1bb7ec) {
            ctx->pc = 0x1BB80Cu;
            goto label_1bb80c;
        }
    }
    ctx->pc = 0x1BB7F4u;
    // 0x1bb7f4: 0x8d020350  lw          $v0, 0x350($t0)
    ctx->pc = 0x1bb7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 848)));
    // 0x1bb7f8: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x1bb7f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1bb7fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BB7FCu;
    {
        const bool branch_taken_0x1bb7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7FCu;
        // 0x1bb800: 0xad02034c  sw          $v0, 0x34C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7fc) {
            ctx->pc = 0x1BB878u;
            goto label_1bb878;
        }
    }
    ctx->pc = 0x1BB804u;
label_1bb804:
    // 0x1bb804: 0x10ec001c  beq         $a3, $t4, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BB804u;
    {
        const bool branch_taken_0x1bb804 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        ctx->pc = 0x1BB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB804u;
        // 0x1bb808: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb804) {
            ctx->pc = 0x1BB878u;
            goto label_1bb878;
        }
    }
    ctx->pc = 0x1BB80Cu;
label_1bb80c:
    // 0x1bb80c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB80Cu;
    {
        const bool branch_taken_0x1bb80c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB80Cu;
        // 0x1bb810: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb80c) {
            ctx->pc = 0x1BB830u;
            goto label_1bb830;
        }
    }
    ctx->pc = 0x1BB814u;
    // 0x1bb814: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BB814u;
    {
        const bool branch_taken_0x1bb814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB814u;
        // 0x1bb818: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb814) {
            ctx->pc = 0x1BB878u;
            goto label_1bb878;
        }
    }
    ctx->pc = 0x1BB81Cu;
    // 0x1bb81c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1bb81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1bb820: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1bb820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bb824: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1bb824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1bb828: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BB828u;
    {
        const bool branch_taken_0x1bb828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB828u;
        // 0x1bb82c: 0x1431821  addu        $v1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb828) {
            ctx->pc = 0x1BB870u;
            goto label_1bb870;
        }
    }
    ctx->pc = 0x1BB830u;
label_1bb830:
    // 0x1bb830: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1BB830u;
    {
        const bool branch_taken_0x1bb830 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB830u;
        // 0x1bb834: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb830) {
            ctx->pc = 0x1BB85Cu;
            goto label_1bb85c;
        }
    }
    ctx->pc = 0x1BB838u;
    // 0x1bb838: 0x8d020320  lw          $v0, 0x320($t0)
    ctx->pc = 0x1bb838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 800)));
    // 0x1bb83c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1bb83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bb840: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB840u;
    {
        const bool branch_taken_0x1bb840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB840u;
        // 0x1bb844: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb840) {
            ctx->pc = 0x1BB860u;
            goto label_1bb860;
        }
    }
    ctx->pc = 0x1BB848u;
    // 0x1bb848: 0x8d02033c  lw          $v0, 0x33C($t0)
    ctx->pc = 0x1bb848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 828)));
    // 0x1bb84c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bb84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bb850: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1bb850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1bb854: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bb854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bb858: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x1bb858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1bb85c:
    // 0x1bb85c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1bb85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1bb860:
    // 0x1bb860: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1bb860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bb864: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1bb864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1bb868: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1bb868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1bb86c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1bb86cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb870:
    // 0x1bb870: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bb870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bb874: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bb874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bb878:
    // 0x1bb878: 0x14ef0003  bne         $a3, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB878u;
    {
        const bool branch_taken_0x1bb878 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 15));
        ctx->pc = 0x1BB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB878u;
        // 0x1bb87c: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb878) {
            ctx->pc = 0x1BB888u;
            goto label_1bb888;
        }
    }
    ctx->pc = 0x1BB880u;
    // 0x1bb880: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1bb880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb884: 0x46680b  movn        $t5, $v0, $a2
    ctx->pc = 0x1bb884u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2));
label_1bb888:
    // 0x1bb888: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x1bb888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1bb88c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1BB88Cu;
    {
        const bool branch_taken_0x1bb88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb88c) {
            ctx->pc = 0x1BB730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb730;
        }
    }
    ctx->pc = 0x1BB894u;
    // 0x1bb894: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB894u;
    {
        const bool branch_taken_0x1bb894 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB894u;
        // 0x1bb898: 0xd10c0  sll         $v0, $t5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb894) {
            ctx->pc = 0x1BB8A4u;
            goto label_1bb8a4;
        }
    }
    ctx->pc = 0x1BB89Cu;
    // 0x1bb89c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1bb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1bb8a0: 0xac40036c  sw          $zero, 0x36C($v0)
    ctx->pc = 0x1bb8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 876), GPR_U32(ctx, 0));
label_1bb8a4:
    // 0x1bb8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8A4u;
        // 0x1bb8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB8ACu;
    // 0x1bb8ac: 0x0  nop
    ctx->pc = 0x1bb8acu;
    // NOP
    ctx->pc = 0x1bb8b0u;
}
