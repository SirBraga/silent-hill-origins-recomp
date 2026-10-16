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

// Function: sub_002A59A8
// Address: 0x2a59a8 - 0x2a5ee8
void sub_002A59A8_0x2a59a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A59A8_0x2a59a8");
#endif

    switch (ctx->pc) {
        case 0x2a59f0u: goto label_2a59f0;
        case 0x2a5a48u: goto label_2a5a48;
        case 0x2a5b34u: goto label_2a5b34;
        case 0x2a5b54u: goto label_2a5b54;
        case 0x2a5b5cu: goto label_2a5b5c;
        case 0x2a5b70u: goto label_2a5b70;
        case 0x2a5b80u: goto label_2a5b80;
        case 0x2a5b88u: goto label_2a5b88;
        case 0x2a5b98u: goto label_2a5b98;
        case 0x2a5cf0u: goto label_2a5cf0;
        case 0x2a5e00u: goto label_2a5e00;
        case 0x2a5e1cu: goto label_2a5e1c;
        case 0x2a5e30u: goto label_2a5e30;
        case 0x2a5ea8u: goto label_2a5ea8;
        default: break;
    }

    ctx->pc = 0x2a59a8u;

    // 0x2a59a8: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x2a59a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x2a59ac: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2a59acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59b0: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x2a59b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
    // 0x2a59b4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a59b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a59b8: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x2a59b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
    // 0x2a59bc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a59bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59c0: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x2a59c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
    // 0x2a59c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a59c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59c8: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x2a59c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
    // 0x2a59cc: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x2a59ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2a59d0: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x2a59d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
    // 0x2a59d4: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x2a59d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
    // 0x2a59d8: 0x7fb60230  sq          $s6, 0x230($sp)
    ctx->pc = 0x2a59d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 22));
    // 0x2a59dc: 0x7fb70220  sq          $s7, 0x220($sp)
    ctx->pc = 0x2a59dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 23));
    // 0x2a59e0: 0x7fbe0210  sq          $fp, 0x210($sp)
    ctx->pc = 0x2a59e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 30));
    // 0x2a59e4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A59E4u;
    {
        const bool branch_taken_0x2a59e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59E4u;
        // 0x2a59e8: 0xffbf0200  sd          $ra, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a59e4) {
            ctx->pc = 0x2A5A44u;
            goto label_2a5a44;
        }
    }
    ctx->pc = 0x2A59ECu;
    // 0x2a59ec: 0x24c20100  addiu       $v0, $a2, 0x100
    ctx->pc = 0x2a59ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
label_2a59f0:
    // 0x2a59f0: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x2a59f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a59f4: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x2a59f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a59f8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2a59f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a59fc: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2a59fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a5a00: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x2a5a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a5a04: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x2a5a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a5a08: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x2a5a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2a5a0c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x2a5a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2a5a10: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x2a5a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a14: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x2a5a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a18: 0xb0e6000f  sdl         $a2, 0xF($a3)
    ctx->pc = 0x2a5a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a1c: 0xb4e60008  sdr         $a2, 0x8($a3)
    ctx->pc = 0x2a5a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a20: 0xb0e80017  sdl         $t0, 0x17($a3)
    ctx->pc = 0x2a5a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a24: 0xb4e80010  sdr         $t0, 0x10($a3)
    ctx->pc = 0x2a5a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a28: 0xb0e9001f  sdl         $t1, 0x1F($a3)
    ctx->pc = 0x2a5a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a2c: 0xb4e90018  sdr         $t1, 0x18($a3)
    ctx->pc = 0x2a5a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a30: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a5a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a5a34: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A5A34u;
    {
        const bool branch_taken_0x2a5a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A34u;
        // 0x2a5a38: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a34) {
            ctx->pc = 0x2A59F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a59f0;
        }
    }
    ctx->pc = 0x2A5A3Cu;
    // 0x2a5a3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A5A3Cu;
    {
        const bool branch_taken_0x2a5a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5a3c) {
            ctx->pc = 0x2A5A74u;
            goto label_2a5a74;
        }
    }
    ctx->pc = 0x2A5A44u;
label_2a5a44:
    // 0x2a5a44: 0x24c20100  addiu       $v0, $a2, 0x100
    ctx->pc = 0x2a5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
label_2a5a48:
    // 0x2a5a48: 0xdc6e0000  ld          $t6, 0x0($v1)
    ctx->pc = 0x2a5a48u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a5a4c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x2a5a4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a5a50: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2a5a50u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a5a54: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x2a5a54u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a5a58: 0xfcee0000  sd          $t6, 0x0($a3)
    ctx->pc = 0x2a5a58u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 14));
    // 0x2a5a5c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x2a5a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x2a5a60: 0xfce60010  sd          $a2, 0x10($a3)
    ctx->pc = 0x2a5a60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 6));
    // 0x2a5a64: 0xfce80018  sd          $t0, 0x18($a3)
    ctx->pc = 0x2a5a64u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 8));
    // 0x2a5a68: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a5a6c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A5A6Cu;
    {
        const bool branch_taken_0x2a5a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A6Cu;
        // 0x2a5a70: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a6c) {
            ctx->pc = 0x2A5A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5a48;
        }
    }
    ctx->pc = 0x2A5A74u;
label_2a5a74:
    // 0x2a5a74: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x2a5a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2a5a78: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x2a5a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2a5a7c: 0x8c6e0008  lw          $t6, 0x8($v1)
    ctx->pc = 0x2a5a7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a5a80: 0xb0e90007  sdl         $t1, 0x7($a3)
    ctx->pc = 0x2a5a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a84: 0xb4e90000  sdr         $t1, 0x0($a3)
    ctx->pc = 0x2a5a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5a88: 0x8e1100b0  lw          $s1, 0xB0($s0)
    ctx->pc = 0x2a5a88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2a5a8c: 0x12200108  beqz        $s1, . + 4 + (0x108 << 2)
    ctx->pc = 0x2A5A8Cu;
    {
        const bool branch_taken_0x2a5a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A8Cu;
        // 0x2a5a90: 0xacee0008  sw          $t6, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a8c) {
            ctx->pc = 0x2A5EB0u;
            goto label_2a5eb0;
        }
    }
    ctx->pc = 0x2A5A94u;
    // 0x2a5a94: 0x6ba600df  ldl         $a2, 0xDF($sp)
    ctx->pc = 0x2a5a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a5a98: 0x6fa600d8  ldr         $a2, 0xD8($sp)
    ctx->pc = 0x2a5a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a5a9c: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x2a5a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a5aa0: 0xb3a60177  sdl         $a2, 0x177($sp)
    ctx->pc = 0x2a5aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5aa4: 0xb7a60170  sdr         $a2, 0x170($sp)
    ctx->pc = 0x2a5aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5aa8: 0xafa70178  sw          $a3, 0x178($sp)
    ctx->pc = 0x2a5aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 7));
    // 0x2a5aac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ab0: 0x6bae00eb  ldl         $t6, 0xEB($sp)
    ctx->pc = 0x2a5ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2a5ab4: 0x6fae00e4  ldr         $t6, 0xE4($sp)
    ctx->pc = 0x2a5ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2a5ab8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2a5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2a5abc: 0xb3ae0187  sdl         $t6, 0x187($sp)
    ctx->pc = 0x2a5abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5ac0: 0xb7ae0180  sdr         $t6, 0x180($sp)
    ctx->pc = 0x2a5ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5ac4: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x2a5ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x2a5ac8: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x2a5ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2a5acc: 0xafa701e8  sw          $a3, 0x1E8($sp)
    ctx->pc = 0x2a5accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 7));
    // 0x2a5ad0: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x2a5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2a5ad4: 0x6a480013  ldl         $t0, 0x13($s2)
    ctx->pc = 0x2a5ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a5ad8: 0x6e48000c  ldr         $t0, 0xC($s2)
    ctx->pc = 0x2a5ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a5adc: 0x8e490014  lw          $t1, 0x14($s2)
    ctx->pc = 0x2a5adcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2a5ae0: 0xb3a80167  sdl         $t0, 0x167($sp)
    ctx->pc = 0x2a5ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5ae4: 0xb7a80160  sdr         $t0, 0x160($sp)
    ctx->pc = 0x2a5ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5ae8: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x2a5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
    // 0x2a5aec: 0xafa301e4  sw          $v1, 0x1E4($sp)
    ctx->pc = 0x2a5aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 3));
    // 0x2a5af0: 0x260e0010  addiu       $t6, $s0, 0x10
    ctx->pc = 0x2a5af0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a5af4: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x2a5af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a5af8: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x2a5af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a5afc: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x2a5afcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a5b00: 0xb3a60197  sdl         $a2, 0x197($sp)
    ctx->pc = 0x2a5b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5b04: 0xb7a60190  sdr         $a2, 0x190($sp)
    ctx->pc = 0x2a5b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5b08: 0xafa70198  sw          $a3, 0x198($sp)
    ctx->pc = 0x2a5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 7));
    // 0x2a5b0c: 0xafae01e0  sw          $t6, 0x1E0($sp)
    ctx->pc = 0x2a5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 14));
    // 0x2a5b10: 0x26080040  addiu       $t0, $s0, 0x40
    ctx->pc = 0x2a5b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2a5b14: 0x68a20013  ldl         $v0, 0x13($a1)
    ctx->pc = 0x2a5b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a5b18: 0x6ca2000c  ldr         $v0, 0xC($a1)
    ctx->pc = 0x2a5b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a5b1c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2a5b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a5b20: 0xb3a201a7  sdl         $v0, 0x1A7($sp)
    ctx->pc = 0x2a5b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5b24: 0xb7a201a0  sdr         $v0, 0x1A0($sp)
    ctx->pc = 0x2a5b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5b28: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x2a5b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
    // 0x2a5b2c: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x2A5B2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B34u);
    ctx->pc = 0x2A5B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B2Cu;
    // 0x2a5b30: 0xafa801d8  sw          $t0, 0x1D8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x2A5B2Cu, 0x2A5B34u)) {
        return;
    }
    ctx->pc = 0x2A5B34u;
label_2a5b34:
    // 0x2a5b34: 0x26090064  addiu       $t1, $s0, 0x64
    ctx->pc = 0x2a5b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2a5b38: 0x260e0070  addiu       $t6, $s0, 0x70
    ctx->pc = 0x2a5b38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2a5b3c: 0xafa901ec  sw          $t1, 0x1EC($sp)
    ctx->pc = 0x2a5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 9));
    // 0x2a5b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b44: 0xafae01f0  sw          $t6, 0x1F0($sp)
    ctx->pc = 0x2a5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 14));
    // 0x2a5b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b4c: 0xc0a5dc2  jal         func_297708
    ctx->pc = 0x2A5B4Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B54u);
    ctx->pc = 0x2A5B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B4Cu;
    // 0x2a5b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297708u, 0x2A5B4Cu, 0x2A5B54u)) {
        return;
    }
    ctx->pc = 0x2A5B54u;
label_2a5b54:
    // 0x2a5b54: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x2A5B54u;
    SET_GPR_U32(ctx, 31, 0x2A5B5Cu);
    ctx->pc = 0x2A5B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B54u;
    // 0x2a5b58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x2A5B54u, 0x2A5B5Cu)) {
        return;
    }
    ctx->pc = 0x2A5B5Cu;
label_2a5b5c:
    // 0x2a5b5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b64: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2a5b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2a5b68: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x2A5B68u;
    SET_GPR_U32(ctx, 31, 0x2A5B70u);
    ctx->pc = 0x2A5B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B68u;
    // 0x2a5b6c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x2A5B68u, 0x2A5B70u)) {
        return;
    }
    ctx->pc = 0x2A5B70u;
label_2a5b70:
    // 0x2a5b70: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2a5b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x2a5b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b78: 0xc0a5d86  jal         func_297618
    ctx->pc = 0x2A5B78u;
    SET_GPR_U32(ctx, 31, 0x2A5B80u);
    ctx->pc = 0x2A5B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B78u;
    // 0x2a5b7c: 0x24a55d80  addiu       $a1, $a1, 0x5D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297618u, 0x2A5B78u, 0x2A5B80u)) {
        return;
    }
    ctx->pc = 0x2A5B80u;
label_2a5b80:
    // 0x2a5b80: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x2A5B80u;
    SET_GPR_U32(ctx, 31, 0x2A5B88u);
    ctx->pc = 0x2A5B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B80u;
    // 0x2a5b84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x2A5B80u, 0x2A5B88u)) {
        return;
    }
    ctx->pc = 0x2A5B88u;
label_2a5b88:
    // 0x2a5b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b90: 0xc0a5dc2  jal         func_297708
    ctx->pc = 0x2A5B90u;
    SET_GPR_U32(ctx, 31, 0x2A5B98u);
    ctx->pc = 0x2A5B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B90u;
    // 0x2a5b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297708u, 0x2A5B90u, 0x2A5B98u)) {
        return;
    }
    ctx->pc = 0x2A5B98u;
label_2a5b98:
    // 0x2a5b98: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x2a5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x2a5b9c: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x2a5b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a5ba0: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x2a5ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x2a5ba4: 0x220782d  daddu       $t7, $s1, $zero
    ctx->pc = 0x2a5ba4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ba8: 0x27b10190  addiu       $s1, $sp, 0x190
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2a5bac: 0x27b301a0  addiu       $s3, $sp, 0x1A0
    ctx->pc = 0x2a5bacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2a5bb0: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x2a5bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a5bb4: 0x27b50170  addiu       $s5, $sp, 0x170
    ctx->pc = 0x2a5bb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2a5bb8: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x2a5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2a5bbc: 0x27b60180  addiu       $s6, $sp, 0x180
    ctx->pc = 0x2a5bbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2a5bc0: 0x27be01d0  addiu       $fp, $sp, 0x1D0
    ctx->pc = 0x2a5bc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2a5bc4: 0x27b40160  addiu       $s4, $sp, 0x160
    ctx->pc = 0x2a5bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2a5bc8: 0x27b701b0  addiu       $s7, $sp, 0x1B0
    ctx->pc = 0x2a5bc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2a5bcc: 0x31e80003  andi        $t0, $t7, 0x3
    ctx->pc = 0x2a5bccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
    // 0x2a5bd0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2a5bd0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bd4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2a5bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bd8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a5bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bdc: 0x11000038  beqz        $t0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A5BDCu;
    {
        const bool branch_taken_0x2a5bdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BDCu;
        // 0x2a5be0: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5bdc) {
            ctx->pc = 0x2A5CC0u;
            goto label_2a5cc0;
        }
    }
    ctx->pc = 0x2A5BE4u;
    // 0x2a5be4: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2a5be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a5be8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A5BE8u;
    {
        const bool branch_taken_0x2a5be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5be8) {
            ctx->pc = 0x2A5BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5BE8u;
            // 0x2a5bec: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5C80u;
            goto label_2a5c80;
        }
    }
    ctx->pc = 0x2A5BF0u;
    // 0x2a5bf0: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x2a5bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a5bf4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A5BF4u;
    {
        const bool branch_taken_0x2a5bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5bf4) {
            ctx->pc = 0x2A5BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5BF4u;
            // 0x2a5bf8: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5C40u;
            goto label_2a5c40;
        }
    }
    ctx->pc = 0x2A5BFCu;
    // 0x2a5bfc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a5bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c00: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x2a5c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2a5c04: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2a5c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2a5c08: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x2a5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2a5c0c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2a5c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2a5c10: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2a5c10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5c14: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a5c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c18: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2a5c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2a5c1c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2a5c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5c20: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x2a5c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2a5c24: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2a5c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c28: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2a5c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2a5c2c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2a5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2a5c30: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2a5c30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2a5c34: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x2a5c34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x2a5c38: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x2a5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x2a5c3c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a5c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5c40:
    // 0x2a5c40: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2a5c40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2a5c44: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2a5c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a5c48: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2a5c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c4c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2a5c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a5c50: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2a5c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5c54: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2a5c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a5c58: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c5c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2a5c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a5c60: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2a5c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2a5c64: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2a5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2a5c68: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2a5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a5c6c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a5c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2a5c70: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2a5c70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2a5c74: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2a5c74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2a5c78: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2a5c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2a5c7c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a5c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5c80:
    // 0x2a5c80: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2a5c80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2a5c84: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2a5c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a5c88: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2a5c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c8c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2a5c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a5c90: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2a5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5c94: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2a5c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a5c98: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c9c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2a5c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a5ca0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2a5ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2a5ca4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2a5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2a5ca8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2a5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a5cac: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a5cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2a5cb0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2a5cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2a5cb4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2a5cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2a5cb8: 0x11cf004b  beq         $t6, $t7, . + 4 + (0x4B << 2)
    ctx->pc = 0x2A5CB8u;
    {
        const bool branch_taken_0x2a5cb8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2A5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CB8u;
        // 0x2a5cbc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5cb8) {
            ctx->pc = 0x2A5DE8u;
            goto label_2a5de8;
        }
    }
    ctx->pc = 0x2A5CC0u;
label_2a5cc0:
    // 0x2a5cc0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a5cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cc4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a5cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cc8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2a5cc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ccc: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2a5cccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cd0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2a5cd0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cd4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2a5cd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cd8: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x2a5cd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cdc: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2a5cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ce0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2a5ce0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ce4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a5ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cec: 0x0  nop
    ctx->pc = 0x2a5cecu;
    // NOP
label_2a5cf0:
    // 0x2a5cf0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2a5cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5cf4: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x2a5cf4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x2a5cf8: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x2a5cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2a5cfc: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x2a5cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5d00: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x2a5d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2a5d04: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x2a5d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5d08: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2a5d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2a5d0c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2a5d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5d10: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2a5d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2a5d14: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a5d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2a5d18: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a5d18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2a5d1c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2a5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2a5d20: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2a5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2a5d24: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x2a5d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5d28: 0xe5600010  swc1        $f0, 0x10($t3)
    ctx->pc = 0x2a5d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
    // 0x2a5d2c: 0xc5210014  lwc1        $f1, 0x14($t1)
    ctx->pc = 0x2a5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5d30: 0xe5810014  swc1        $f1, 0x14($t4)
    ctx->pc = 0x2a5d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 20), bits); }
    // 0x2a5d34: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x2a5d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5d38: 0xe5a00018  swc1        $f0, 0x18($t5)
    ctx->pc = 0x2a5d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 24), bits); }
    // 0x2a5d3c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x2a5d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5d40: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x2a5d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2a5d44: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2a5d44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2a5d48: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2a5d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x2a5d4c: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2a5d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2a5d50: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2a5d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2a5d54: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x2a5d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5d58: 0xe5600020  swc1        $f0, 0x20($t3)
    ctx->pc = 0x2a5d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 32), bits); }
    // 0x2a5d5c: 0xc5210024  lwc1        $f1, 0x24($t1)
    ctx->pc = 0x2a5d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5d60: 0xe5810024  swc1        $f1, 0x24($t4)
    ctx->pc = 0x2a5d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 36), bits); }
    // 0x2a5d64: 0xc5400028  lwc1        $f0, 0x28($t2)
    ctx->pc = 0x2a5d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5d68: 0xe5a00028  swc1        $f0, 0x28($t5)
    ctx->pc = 0x2a5d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 40), bits); }
    // 0x2a5d6c: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x2a5d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5d70: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x2a5d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x2a5d74: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2a5d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x2a5d78: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x2a5d78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x2a5d7c: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x2a5d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x2a5d80: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2a5d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2a5d84: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x2a5d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5d88: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x2a5d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x2a5d8c: 0xe5600030  swc1        $f0, 0x30($t3)
    ctx->pc = 0x2a5d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 48), bits); }
    // 0x2a5d90: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x2a5d90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x2a5d94: 0xc5200034  lwc1        $f0, 0x34($t1)
    ctx->pc = 0x2a5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5d98: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x2a5d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x2a5d9c: 0xe5800034  swc1        $f0, 0x34($t4)
    ctx->pc = 0x2a5d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 52), bits); }
    // 0x2a5da0: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x2a5da0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x2a5da4: 0xc5400038  lwc1        $f0, 0x38($t2)
    ctx->pc = 0x2a5da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5da8: 0x254a0040  addiu       $t2, $t2, 0x40
    ctx->pc = 0x2a5da8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x2a5dac: 0xe5a00038  swc1        $f0, 0x38($t5)
    ctx->pc = 0x2a5dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 56), bits); }
    // 0x2a5db0: 0x25ad0040  addiu       $t5, $t5, 0x40
    ctx->pc = 0x2a5db0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x2a5db4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2a5db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5db8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2a5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2a5dbc: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2a5dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2a5dc0: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x2a5dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x2a5dc4: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2a5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2a5dc8: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x2a5dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x2a5dcc: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2a5dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2a5dd0: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x2a5dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x2a5dd4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2a5dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2a5dd8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2a5dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2a5ddc: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x2a5ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x2a5de0: 0x15cfffc3  bne         $t6, $t7, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2A5DE0u;
    {
        const bool branch_taken_0x2a5de0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2A5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DE0u;
        // 0x2a5de4: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5de0) {
            ctx->pc = 0x2A5CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5cf0;
        }
    }
    ctx->pc = 0x2A5DE8u;
label_2a5de8:
    // 0x2a5de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5dec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a5decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5df0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a5df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5df4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2a5df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5df8: 0xc0a90e6  jal         func_2A4398
    ctx->pc = 0x2A5DF8u;
    SET_GPR_U32(ctx, 31, 0x2A5E00u);
    ctx->pc = 0x2A5DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DF8u;
    // 0x2a5dfc: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A4398u, 0x2A5DF8u, 0x2A5E00u)) {
        return;
    }
    ctx->pc = 0x2A5E00u;
label_2a5e00:
    // 0x2a5e00: 0xc60c00fc  lwc1        $f12, 0xFC($s0)
    ctx->pc = 0x2a5e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a5e04: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a5e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e08: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x2a5e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2a5e0c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a5e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e10: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e14: 0xc0a9192  jal         func_2A4648
    ctx->pc = 0x2A5E14u;
    SET_GPR_U32(ctx, 31, 0x2A5E1Cu);
    ctx->pc = 0x2A5E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E14u;
    // 0x2a5e18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A4648u, 0x2A5E14u, 0x2A5E1Cu)) {
        return;
    }
    ctx->pc = 0x2A5E1Cu;
label_2a5e1c:
    // 0x2a5e1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a5e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e20: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x2a5e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x2a5e24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a5e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e28: 0xc0a92bc  jal         func_2A4AF0
    ctx->pc = 0x2A5E28u;
    SET_GPR_U32(ctx, 31, 0x2A5E30u);
    ctx->pc = 0x2A5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E28u;
    // 0x2a5e2c: 0xe7808fb0  swc1        $f0, -0x7050($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938544), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A4AF0u, 0x2A5E28u, 0x2A5E30u)) {
        return;
    }
    ctx->pc = 0x2A5E30u;
label_2a5e30:
    // 0x2a5e30: 0x8fae01e0  lw          $t6, 0x1E0($sp)
    ctx->pc = 0x2a5e30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2a5e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a5e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e38: 0x8fad01d0  lw          $t5, 0x1D0($sp)
    ctx->pc = 0x2a5e38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2a5e3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a5e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e40: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x2a5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x2a5e44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a5e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e48: 0x8fae01d8  lw          $t6, 0x1D8($sp)
    ctx->pc = 0x2a5e48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2a5e4c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a5e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e50: 0x8fac01d4  lw          $t4, 0x1D4($sp)
    ctx->pc = 0x2a5e50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x2a5e54: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2a5e54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e58: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x2a5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
    // 0x2a5e5c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2a5e5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e60: 0x8fae01ec  lw          $t6, 0x1EC($sp)
    ctx->pc = 0x2a5e60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2a5e64: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2a5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2a5e68: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x2a5e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
    // 0x2a5e6c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2a5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2a5e70: 0x8fae01f0  lw          $t6, 0x1F0($sp)
    ctx->pc = 0x2a5e70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2a5e74: 0xc60f00f8  lwc1        $f15, 0xF8($s0)
    ctx->pc = 0x2a5e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a5e78: 0x8fa801e8  lw          $t0, 0x1E8($sp)
    ctx->pc = 0x2a5e78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2a5e7c: 0xc60c00fc  lwc1        $f12, 0xFC($s0)
    ctx->pc = 0x2a5e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a5e80: 0xc60d0100  lwc1        $f13, 0x100($s0)
    ctx->pc = 0x2a5e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a5e84: 0xc60e00f4  lwc1        $f14, 0xF4($s0)
    ctx->pc = 0x2a5e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a5e88: 0x8fab01e4  lw          $t3, 0x1E4($sp)
    ctx->pc = 0x2a5e88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x2a5e8c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x2a5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x2a5e90: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x2a5e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
    // 0x2a5e94: 0xafad0028  sw          $t5, 0x28($sp)
    ctx->pc = 0x2a5e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 13));
    // 0x2a5e98: 0xafac0030  sw          $t4, 0x30($sp)
    ctx->pc = 0x2a5e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 12));
    // 0x2a5e9c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x2a5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x2a5ea0: 0xc0a94f0  jal         func_2A53C0
    ctx->pc = 0x2A5EA0u;
    SET_GPR_U32(ctx, 31, 0x2A5EA8u);
    ctx->pc = 0x2A5EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5EA0u;
    // 0x2a5ea4: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A53C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A53C0u, 0x2A5EA0u, 0x2A5EA8u)) {
        return;
    }
    ctx->pc = 0x2A5EA8u;
label_2a5ea8:
    // 0x2a5ea8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5EA8u;
    {
        const bool branch_taken_0x2a5ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EA8u;
        // 0x2a5eac: 0x7bb00290  lq          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ea8) {
            ctx->pc = 0x2A5EB8u;
            goto label_2a5eb8;
        }
    }
    ctx->pc = 0x2A5EB0u;
label_2a5eb0:
    // 0x2a5eb0: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x2a5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x2a5eb4: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x2a5eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2a5eb8:
    // 0x2a5eb8: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x2a5eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2a5ebc: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x2a5ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2a5ec0: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x2a5ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2a5ec4: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x2a5ec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2a5ec8: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x2a5ec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2a5ecc: 0x7bb60230  lq          $s6, 0x230($sp)
    ctx->pc = 0x2a5eccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a5ed0: 0x7bb70220  lq          $s7, 0x220($sp)
    ctx->pc = 0x2a5ed0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2a5ed4: 0x7bbe0210  lq          $fp, 0x210($sp)
    ctx->pc = 0x2a5ed4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2a5ed8: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x2a5ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2a5edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EDCu;
        // 0x2a5ee0: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5EE4u;
    // 0x2a5ee4: 0x0  nop
    ctx->pc = 0x2a5ee4u;
    // NOP
    ctx->pc = 0x2a5ee8u;
}
