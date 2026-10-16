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

// Function: sub_002F2958
// Address: 0x2f2958 - 0x2f2ad8
void sub_002F2958_0x2f2958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2958_0x2f2958");
#endif

    switch (ctx->pc) {
        case 0x2f2998u: goto label_2f2998;
        case 0x2f29b8u: goto label_2f29b8;
        case 0x2f29e4u: goto label_2f29e4;
        case 0x2f2a44u: goto label_2f2a44;
        case 0x2f2a90u: goto label_2f2a90;
        default: break;
    }

    ctx->pc = 0x2f2958u;

    // 0x2f2958: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f2958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f295c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f2960: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f2960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f2964: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f2964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2968: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f2968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f296c: 0x3c118101  lui         $s1, 0x8101
    ctx->pc = 0x2f296cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2970: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f2970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f2974: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f2974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2978: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f2978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f297c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f297cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2980: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f2980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f2984: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f2984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2988: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f2988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f298c: 0x3c140072  lui         $s4, 0x72
    ctx->pc = 0x2f298cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)114 << 16));
    // 0x2f2990: 0x36310059  ori         $s1, $s1, 0x59
    ctx->pc = 0x2f2990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)89);
    // 0x2f2994: 0x0  nop
    ctx->pc = 0x2f2994u;
    // NOP
label_2f2998:
    // 0x2f2998: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2f2998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f299c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F299Cu;
    {
        const bool branch_taken_0x2f299c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F299Cu;
        // 0x2f29a0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f299c) {
            ctx->pc = 0x2F2A84u;
            goto label_2f2a84;
        }
    }
    ctx->pc = 0x2F29A4u;
    // 0x2f29a4: 0x2691c880  addiu       $s1, $s4, -0x3780
    ctx->pc = 0x2f29a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953088));
    // 0x2f29a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f29a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f29acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29b0: 0xc0bdb5e  jal         func_2F6D78
    ctx->pc = 0x2F29B0u;
    SET_GPR_U32(ctx, 31, 0x2F29B8u);
    ctx->pc = 0x2F29B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29B0u;
    // 0x2f29b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D78u, 0x2F29B0u, 0x2F29B8u)) {
        return;
    }
    ctx->pc = 0x2F29B8u;
label_2f29b8:
    // 0x2f29b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F29B8u;
    {
        const bool branch_taken_0x2f29b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29B8u;
        // 0x2f29bc: 0x101a40  sll         $v1, $s0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29b8) {
            ctx->pc = 0x2F29CCu;
            goto label_2f29cc;
        }
    }
    ctx->pc = 0x2F29C0u;
    // 0x2f29c0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f29c4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F29C4u;
    {
        const bool branch_taken_0x2f29c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29C4u;
        // 0x2f29c8: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29c4) {
            ctx->pc = 0x2F2AB8u;
            goto label_2f2ab8;
        }
    }
    ctx->pc = 0x2F29CCu;
label_2f29cc:
    // 0x2f29cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f29d0: 0x731025  or          $v0, $v1, $s3
    ctx->pc = 0x2f29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x2f29d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f29d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f29d8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F29D8u;
    {
        const bool branch_taken_0x2f29d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29D8u;
        // 0x2f29dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29d8) {
            ctx->pc = 0x2F2A40u;
            goto label_2f2a40;
        }
    }
    ctx->pc = 0x2F29E0u;
    // 0x2f29e0: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2f29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_2f29e4:
    // 0x2f29e4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2f29e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f29e8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2f29e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f29ec: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2f29ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f29f0: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2f29f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f29f4: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2f29f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f29f8: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2f29f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f29fc: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2f29fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f2a00: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2f2a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f2a04: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2f2a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f2a08: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2f2a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f2a0c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2f2a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f2a10: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2f2a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f2a14: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2f2a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f2a18: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2f2a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f2a1c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2f2a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f2a20: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2f2a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f2a24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f2a28: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f2a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f2a2c: 0x0  nop
    ctx->pc = 0x2f2a2cu;
    // NOP
    // 0x2f2a30: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F2A30u;
    {
        const bool branch_taken_0x2f2a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2a30) {
            ctx->pc = 0x2F29E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f29e4;
        }
    }
    ctx->pc = 0x2F2A38u;
    // 0x2f2a38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F2A38u;
    {
        const bool branch_taken_0x2f2a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A38u;
        // 0x2f2a3c: 0xa260005f  sb          $zero, 0x5F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a38) {
            ctx->pc = 0x2F2A7Cu;
            goto label_2f2a7c;
        }
    }
    ctx->pc = 0x2F2A40u;
label_2f2a40:
    // 0x2f2a40: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2f2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_2f2a44:
    // 0x2f2a44: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2f2a44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2a48: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x2f2a48u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f2a4c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2f2a4cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f2a50: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x2f2a50u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f2a54: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x2f2a54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x2f2a58: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x2f2a58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2f2a5c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x2f2a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2f2a60: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x2f2a60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2f2a64: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f2a68: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f2a6c: 0x0  nop
    ctx->pc = 0x2f2a6cu;
    // NOP
    // 0x2f2a70: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F2A70u;
    {
        const bool branch_taken_0x2f2a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2a70) {
            ctx->pc = 0x2F2A44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2a44;
        }
    }
    ctx->pc = 0x2F2A78u;
    // 0x2f2a78: 0xa260005f  sb          $zero, 0x5F($s3)
    ctx->pc = 0x2f2a78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 0));
label_2f2a7c:
    // 0x2f2a7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F2A7Cu;
    {
        const bool branch_taken_0x2f2a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A7Cu;
        // 0x2f2a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a7c) {
            ctx->pc = 0x2F2AB8u;
            goto label_2f2ab8;
        }
    }
    ctx->pc = 0x2F2A84u;
label_2f2a84:
    // 0x2f2a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f2a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2a88: 0xc0bc96e  jal         func_2F25B8
    ctx->pc = 0x2F2A88u;
    SET_GPR_U32(ctx, 31, 0x2F2A90u);
    ctx->pc = 0x2F2A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A88u;
    // 0x2f2a8c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F25B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F25B8u, 0x2F2A88u, 0x2F2A90u)) {
        return;
    }
    ctx->pc = 0x2F2A90u;
label_2f2a90:
    // 0x2f2a90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2a94: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2A94u;
    {
        const bool branch_taken_0x2f2a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A94u;
        // 0x2f2a98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a94) {
            ctx->pc = 0x2F2AA8u;
            goto label_2f2aa8;
        }
    }
    ctx->pc = 0x2F2A9Cu;
    // 0x2f2a9c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2aa0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2AA0u;
    {
        const bool branch_taken_0x2f2aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AA0u;
        // 0x2f2aa4: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2aa0) {
            ctx->pc = 0x2F2AB8u;
            goto label_2f2ab8;
        }
    }
    ctx->pc = 0x2F2AA8u;
label_2f2aa8:
    // 0x2f2aa8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2AA8u;
    {
        const bool branch_taken_0x2f2aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AA8u;
        // 0x2f2aac: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2aa8) {
            ctx->pc = 0x2F2AB8u;
            goto label_2f2ab8;
        }
    }
    ctx->pc = 0x2F2AB0u;
    // 0x2f2ab0: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x2F2AB0u;
    {
        const bool branch_taken_0x2f2ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AB0u;
        // 0x2f2ab4: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ab0) {
            ctx->pc = 0x2F2998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2998;
        }
    }
    ctx->pc = 0x2F2AB8u;
label_2f2ab8:
    // 0x2f2ab8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f2ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2abc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f2abcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2ac0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f2ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2ac4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f2ac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2ac8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f2ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2acc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f2accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AD0u;
        // 0x2f2ad4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2AD8u;
}
