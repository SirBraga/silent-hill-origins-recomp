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

// Function: sub_001E34C8
// Address: 0x1e34c8 - 0x1e3630
void sub_001E34C8_0x1e34c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E34C8_0x1e34c8");
#endif

    switch (ctx->pc) {
        case 0x1e3568u: goto label_1e3568;
        case 0x1e3574u: goto label_1e3574;
        case 0x1e3608u: goto label_1e3608;
        default: break;
    }

    ctx->pc = 0x1e34c8u;

    // 0x1e34c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e34c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e34cc: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e34d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e34d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e34d4: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e34d8: 0x24543788  addiu       $s4, $v0, 0x3788
    ctx->pc = 0x1e34d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 14216));
    // 0x1e34dc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e34dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e34e0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e34e4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e34e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e34e8: 0x24523630  addiu       $s2, $v0, 0x3630
    ctx->pc = 0x1e34e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13872));
    // 0x1e34ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e34ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e34f0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e34f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e34f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e34f8: 0x247336e0  addiu       $s3, $v1, 0x36E0
    ctx->pc = 0x1e34f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 14048));
    // 0x1e34fc: 0x24513748  addiu       $s1, $v0, 0x3748
    ctx->pc = 0x1e34fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 14152));
    // 0x1e3500: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1e3500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1e3504: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1e3504u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x1e3508: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1e3508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1e350c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1e350cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1e3510: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1e3510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1e3514: 0x24e71120  addiu       $a3, $a3, 0x1120
    ctx->pc = 0x1e3514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4384));
    // 0x1e3518: 0x25081868  addiu       $t0, $t0, 0x1868
    ctx->pc = 0x1e3518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6248));
    // 0x1e351c: 0x24c621a8  addiu       $a2, $a2, 0x21A8
    ctx->pc = 0x1e351cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8616));
    // 0x1e3520: 0x24a52038  addiu       $a1, $a1, 0x2038
    ctx->pc = 0x1e3520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8248));
    // 0x1e3524: 0x24021108  addiu       $v0, $zero, 0x1108
    ctx->pc = 0x1e3524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4360));
    // 0x1e3528: 0x24100034  addiu       $s0, $zero, 0x34
    ctx->pc = 0x1e3528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1e352c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1e352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1e3530: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e3530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3534: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1e3534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1e3538: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e3538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e353c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e353cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e3540: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1e3540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1e3544: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1e3544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1e3548: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1e3548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1e354c: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x1e354cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x1e3550: 0xafb40014  sw          $s4, 0x14($sp)
    ctx->pc = 0x1e3550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
    // 0x1e3554: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x1e3554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x1e3558: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x1e3558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x1e355c: 0xafb10028  sw          $s1, 0x28($sp)
    ctx->pc = 0x1e355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    // 0x1e3560: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x1E3560u;
    SET_GPR_U32(ctx, 31, 0x1E3568u);
    ctx->pc = 0x1E3564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3560u;
    // 0x1e3564: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x1E3560u, 0x1E3568u)) {
        return;
    }
    ctx->pc = 0x1E3568u;
label_1e3568:
    // 0x1e3568: 0x3c0444a0  lui         $a0, 0x44A0
    ctx->pc = 0x1e3568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17568 << 16));
    // 0x1e356c: 0xc09d7cc  jal         func_275F30
    ctx->pc = 0x1E356Cu;
    SET_GPR_U32(ctx, 31, 0x1E3574u);
    ctx->pc = 0x1E3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E356Cu;
    // 0x1e3570: 0x34847195  ori         $a0, $a0, 0x7195 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29077);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275F30u, 0x1E356Cu, 0x1E3574u)) {
        return;
    }
    ctx->pc = 0x1E3574u;
label_1e3574:
    // 0x1e3574: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e3574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3578: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E3578u;
    {
        const bool branch_taken_0x1e3578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3578u;
        // 0x1e357c: 0x24021109  addiu       $v0, $zero, 0x1109 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4361));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3578) {
            ctx->pc = 0x1E3608u;
            goto label_1e3608;
        }
    }
    ctx->pc = 0x1E3580u;
    // 0x1e3580: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x1e3580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e3584: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x1e3584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e3588: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x1e3588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e358c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x1e358cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e3590: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x1e3590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e3594: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x1e3594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e3598: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x1e3598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1e359c: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x1e359cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1e35a0: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1e35a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35a4: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1e35a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35a8: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1e35a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35ac: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1e35acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35b0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1e35b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35b4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1e35b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35b8: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x1e35b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35bc: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x1e35bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35c0: 0x68640027  ldl         $a0, 0x27($v1)
    ctx->pc = 0x1e35c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e35c4: 0x6c640020  ldr         $a0, 0x20($v1)
    ctx->pc = 0x1e35c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e35c8: 0x6865002f  ldl         $a1, 0x2F($v1)
    ctx->pc = 0x1e35c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e35cc: 0x6c650028  ldr         $a1, 0x28($v1)
    ctx->pc = 0x1e35ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e35d0: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x1e35d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e35d4: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1e35d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35d8: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1e35d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35dc: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x1e35dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35e0: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x1e35e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e35e4: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e35e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e35e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e35e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e35ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e35ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35f0: 0xafb40014  sw          $s4, 0x14($sp)
    ctx->pc = 0x1e35f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
    // 0x1e35f4: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x1e35f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x1e35f8: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x1e35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x1e35fc: 0xafb10028  sw          $s1, 0x28($sp)
    ctx->pc = 0x1e35fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    // 0x1e3600: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x1E3600u;
    SET_GPR_U32(ctx, 31, 0x1E3608u);
    ctx->pc = 0x1E3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3600u;
    // 0x1e3604: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x1E3600u, 0x1E3608u)) {
        return;
    }
    ctx->pc = 0x1E3608u;
label_1e3608:
    // 0x1e3608: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e3608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e360c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3610: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e3610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e3614: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e3614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3618: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e3618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e361c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e361cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3620: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e3620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3624: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3624u;
        // 0x1e3628: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E362Cu;
    // 0x1e362c: 0x0  nop
    ctx->pc = 0x1e362cu;
    // NOP
    ctx->pc = 0x1e3630u;
}
