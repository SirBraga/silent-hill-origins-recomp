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

// Function: sub_00108A40
// Address: 0x108a40 - 0x108eb8
void sub_00108A40_0x108a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108A40_0x108a40");
#endif

    switch (ctx->pc) {
        case 0x108a8cu: goto label_108a8c;
        case 0x108ad0u: goto label_108ad0;
        case 0x108b44u: goto label_108b44;
        case 0x108b68u: goto label_108b68;
        case 0x108be0u: goto label_108be0;
        case 0x108c10u: goto label_108c10;
        case 0x108c38u: goto label_108c38;
        case 0x108c44u: goto label_108c44;
        case 0x108c68u: goto label_108c68;
        case 0x108cbcu: goto label_108cbc;
        case 0x108d30u: goto label_108d30;
        case 0x108d58u: goto label_108d58;
        case 0x108dd0u: goto label_108dd0;
        case 0x108e00u: goto label_108e00;
        case 0x108e28u: goto label_108e28;
        case 0x108e34u: goto label_108e34;
        case 0x108e58u: goto label_108e58;
        case 0x108e80u: goto label_108e80;
        case 0x108e8cu: goto label_108e8c;
        default: break;
    }

    ctx->pc = 0x108a40u;

    // 0x108a40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x108a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x108a44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x108a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x108a48: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x108a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x108a4c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x108a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x108a50: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x108a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x108a54: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x108a54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x108a58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x108a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x108a5c: 0x2493007f  addiu       $s3, $a0, 0x7F
    ctx->pc = 0x108a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x108a60: 0x8e038288  lw          $v1, -0x7D78($s0)
    ctx->pc = 0x108a60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338288u));
    // 0x108a64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x108a64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a68: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x108a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x108a6c: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x108a6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x108a70: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x108a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x108a74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x108A74u;
    {
        const bool branch_taken_0x108a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A74u;
        // 0x108a78: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a74) {
            ctx->pc = 0x108A98u;
            goto label_108a98;
        }
    }
    ctx->pc = 0x108A7Cu;
    // 0x108a7c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x108a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x108a80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x108a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a84: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x108A84u;
    SET_GPR_U32(ctx, 31, 0x108A8Cu);
    ctx->pc = 0x108A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A84u;
    // 0x108a88: 0x24a59ca0  addiu       $a1, $a1, -0x6360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x108A84u, 0x108A8Cu)) {
        return;
    }
    ctx->pc = 0x108A8Cu;
label_108a8c:
    // 0x108a8c: 0x8e038288  lw          $v1, -0x7D78($s0)
    ctx->pc = 0x108a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935176)));
    // 0x108a90: 0x1443007d  bne         $v0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x108A90u;
    {
        const bool branch_taken_0x108a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x108A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A90u;
        // 0x108a94: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a90) {
            ctx->pc = 0x108C88u;
            goto label_108c88;
        }
    }
    ctx->pc = 0x108A98u;
label_108a98:
    // 0x108a98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x108a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x108a9c: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x108a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x108aa0: 0x245242b0  addiu       $s2, $v0, 0x42B0
    ctx->pc = 0x108aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17072));
    // 0x108aa4: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x108aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x108aa8: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x108aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x108aac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x108aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x108ab0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x108ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B42BCu));
    // 0x108ab4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42C0u));
    // 0x108ab8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x108ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x108abc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x108abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x108ac0: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x108ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108ac4: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x108ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108ac8: 0xc04252c  jal         func_1094B0
    ctx->pc = 0x108AC8u;
    SET_GPR_U32(ctx, 31, 0x108AD0u);
    ctx->pc = 0x108ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AC8u;
    // 0x108acc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1094B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1094B0u, 0x108AC8u, 0x108AD0u)) {
        return;
    }
    ctx->pc = 0x108AD0u;
label_108ad0:
    // 0x108ad0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x108ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ad4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x108ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108ad8: 0x122200ee  beq         $s1, $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x108AD8u;
    {
        const bool branch_taken_0x108ad8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x108ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AD8u;
        // 0x108adc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ad8) {
            ctx->pc = 0x108E94u;
            goto label_108e94;
        }
    }
    ctx->pc = 0x108AE0u;
    // 0x108ae0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x108ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x108ae4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x108ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x108ae8: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x108ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108aec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108af0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x108af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x108af4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x108af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x108af8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x108af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x108afc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x108afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x108b00: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108b04: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x108b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x108b08: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x108B08u;
    {
        const bool branch_taken_0x108b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x108B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B08u;
        // 0x108b0c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b08) {
            ctx->pc = 0x108B38u;
            goto label_108b38;
        }
    }
    ctx->pc = 0x108B10u;
    // 0x108b10: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x108B10u;
    {
        const bool branch_taken_0x108b10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x108b10) {
            ctx->pc = 0x108B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108B10u;
            // 0x108b14: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108B2Cu;
            goto label_108b2c;
        }
    }
    ctx->pc = 0x108B18u;
    // 0x108b18: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x108b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x108b1c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x108b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x108b20: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x108b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108b24: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x108b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108b28: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x108b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_108b2c:
    // 0x108b2c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x108b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x108b30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108B30u;
    {
        const bool branch_taken_0x108b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B30u;
        // 0x108b34: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b30) {
            ctx->pc = 0x108B44u;
            goto label_108b44;
        }
    }
    ctx->pc = 0x108B38u;
label_108b38:
    // 0x108b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b3c: 0xc042602  jal         func_109808
    ctx->pc = 0x108B3Cu;
    SET_GPR_U32(ctx, 31, 0x108B44u);
    ctx->pc = 0x108B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B3Cu;
    // 0x108b40: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109808u, 0x108B3Cu, 0x108B44u)) {
        return;
    }
    ctx->pc = 0x108B44u;
label_108b44:
    // 0x108b44: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x108b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x108b48: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x108b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x108b4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x108b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x108b50: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x108B50u;
    {
        const bool branch_taken_0x108b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B50u;
        // 0x108b54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b50) {
            ctx->pc = 0x108B8Cu;
            goto label_108b8c;
        }
    }
    ctx->pc = 0x108B58u;
    // 0x108b58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108b5c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x108b5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x108b60: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x108B60u;
    {
        const bool branch_taken_0x108b60 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x108B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B60u;
        // 0x108b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b60) {
            ctx->pc = 0x108B88u;
            goto label_108b88;
        }
    }
    ctx->pc = 0x108B68u;
label_108b68:
    // 0x108b68: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x108b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x108b6c: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x108b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x108b70: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x108b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108b74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x108b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108b78: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x108b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108b7c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x108b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x108b80: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x108B80u;
    {
        const bool branch_taken_0x108b80 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x108B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B80u;
        // 0x108b84: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b80) {
            ctx->pc = 0x108B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108b68;
        }
    }
    ctx->pc = 0x108B88u;
label_108b88:
    // 0x108b88: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x108b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_108b8c:
    // 0x108b8c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x108b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x108b90: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x108b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x108b94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x108b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108b98: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x108B98u;
    {
        const bool branch_taken_0x108b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x108B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B98u;
        // 0x108b9c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b98) {
            ctx->pc = 0x108BE0u;
            goto label_108be0;
        }
    }
    ctx->pc = 0x108BA0u;
    // 0x108ba0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108ba4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x108ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x108ba8: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x108BA8u;
    {
        const bool branch_taken_0x108ba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x108ba8) {
            ctx->pc = 0x108BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108BA8u;
            // 0x108bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108BD8u;
            goto label_108bd8;
        }
    }
    ctx->pc = 0x108BB0u;
    // 0x108bb0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x108BB0u;
    {
        const bool branch_taken_0x108bb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x108bb0) {
            ctx->pc = 0x108BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108BB0u;
            // 0x108bb4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108BCCu;
            goto label_108bcc;
        }
    }
    ctx->pc = 0x108BB8u;
    // 0x108bb8: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x108bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x108bbc: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x108bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x108bc0: 0xb0a70007  sdl         $a3, 0x7($a1)
    ctx->pc = 0x108bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108bc4: 0xb4a70000  sdr         $a3, 0x0($a1)
    ctx->pc = 0x108bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108bc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x108bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_108bcc:
    // 0x108bcc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x108bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x108bd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108BD0u;
    {
        const bool branch_taken_0x108bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BD0u;
        // 0x108bd4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bd0) {
            ctx->pc = 0x108BE0u;
            goto label_108be0;
        }
    }
    ctx->pc = 0x108BD8u;
label_108bd8:
    // 0x108bd8: 0xc042602  jal         func_109808
    ctx->pc = 0x108BD8u;
    SET_GPR_U32(ctx, 31, 0x108BE0u);
    ctx->pc = 0x108BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BD8u;
    // 0x108bdc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109808u, 0x108BD8u, 0x108BE0u)) {
        return;
    }
    ctx->pc = 0x108BE0u;
label_108be0:
    // 0x108be0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x108be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x108be4: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x108be4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x108be8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108bec: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x108becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x108bf0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x108bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108bf4: 0x12300013  beq         $s1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x108BF4u;
    {
        const bool branch_taken_0x108bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x108BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BF4u;
        // 0x108bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bf4) {
            ctx->pc = 0x108C44u;
            goto label_108c44;
        }
    }
    ctx->pc = 0x108BFCu;
    // 0x108bfc: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x108bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x108c00: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x108c00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x108c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108c08: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108C08u;
    {
        const bool branch_taken_0x108c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C08u;
        // 0x108c0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c08) {
            ctx->pc = 0x108C28u;
            goto label_108c28;
        }
    }
    ctx->pc = 0x108C10u;
label_108c10:
    // 0x108c10: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x108c10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x108c14: 0x0  nop
    ctx->pc = 0x108c14u;
    // NOP
    // 0x108c18: 0x0  nop
    ctx->pc = 0x108c18u;
    // NOP
    // 0x108c1c: 0x0  nop
    ctx->pc = 0x108c1cu;
    // NOP
    // 0x108c20: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x108C20u;
    {
        const bool branch_taken_0x108c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C20u;
        // 0x108c24: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c20) {
            ctx->pc = 0x108C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108c10;
        }
    }
    ctx->pc = 0x108C28u;
label_108c28:
    // 0x108c28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c2c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x108c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x108c30: 0xc042814  jal         func_10A050
    ctx->pc = 0x108C30u;
    SET_GPR_U32(ctx, 31, 0x108C38u);
    ctx->pc = 0x108C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C30u;
    // 0x108c34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A050u, 0x108C30u, 0x108C38u)) {
        return;
    }
    ctx->pc = 0x108C38u;
label_108c38:
    // 0x108c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c3c: 0xc042b90  jal         func_10AE40
    ctx->pc = 0x108C3Cu;
    SET_GPR_U32(ctx, 31, 0x108C44u);
    ctx->pc = 0x108C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C3Cu;
    // 0x108c40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10AE40u, 0x108C3Cu, 0x108C44u)) {
        return;
    }
    ctx->pc = 0x108C44u;
label_108c44:
    // 0x108c44: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x108c44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108c48: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x108c48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x108c4c: 0x1230008f  beq         $s1, $s0, . + 4 + (0x8F << 2)
    ctx->pc = 0x108C4Cu;
    {
        const bool branch_taken_0x108c4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x108C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C4Cu;
        // 0x108c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c4c) {
            ctx->pc = 0x108E8Cu;
            goto label_108e8c;
        }
    }
    ctx->pc = 0x108C54u;
    // 0x108c54: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x108c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x108c58: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x108c58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x108c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108c60: 0x10620083  beq         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x108C60u;
    {
        const bool branch_taken_0x108c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C60u;
        // 0x108c64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c60) {
            ctx->pc = 0x108E70u;
            goto label_108e70;
        }
    }
    ctx->pc = 0x108C68u;
label_108c68:
    // 0x108c68: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x108c68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x108c6c: 0x0  nop
    ctx->pc = 0x108c6cu;
    // NOP
    // 0x108c70: 0x0  nop
    ctx->pc = 0x108c70u;
    // NOP
    // 0x108c74: 0x0  nop
    ctx->pc = 0x108c74u;
    // NOP
    // 0x108c78: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x108C78u;
    {
        const bool branch_taken_0x108c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C78u;
        // 0x108c7c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c78) {
            ctx->pc = 0x108C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108c68;
        }
    }
    ctx->pc = 0x108C80u;
    // 0x108c80: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x108C80u;
    {
        const bool branch_taken_0x108c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C80u;
        // 0x108c84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c80) {
            ctx->pc = 0x108E74u;
            goto label_108e74;
        }
    }
    ctx->pc = 0x108C88u;
label_108c88:
    // 0x108c88: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x108c88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x108c8c: 0x24524290  addiu       $s2, $v0, 0x4290
    ctx->pc = 0x108c8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17040));
    // 0x108c90: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x108c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x108c94: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x108c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x108c98: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x108c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x108c9c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x108c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x108ca0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108ca4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x108ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x108ca8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x108ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x108cac: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x108cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108cb0: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x108cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108cb4: 0xc04252c  jal         func_1094B0
    ctx->pc = 0x108CB4u;
    SET_GPR_U32(ctx, 31, 0x108CBCu);
    ctx->pc = 0x108CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CB4u;
    // 0x108cb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1094B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1094B0u, 0x108CB4u, 0x108CBCu)) {
        return;
    }
    ctx->pc = 0x108CBCu;
label_108cbc:
    // 0x108cbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x108cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x108cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108cc4: 0x12220073  beq         $s1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x108CC4u;
    {
        const bool branch_taken_0x108cc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x108CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CC4u;
        // 0x108cc8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cc4) {
            ctx->pc = 0x108E94u;
            goto label_108e94;
        }
    }
    ctx->pc = 0x108CCCu;
    // 0x108ccc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x108cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x108cd0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x108cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x108cd4: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x108cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108cd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108cdc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x108cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x108ce0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x108ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x108ce4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x108ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x108ce8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x108ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x108cec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108cf0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x108cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x108cf4: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x108CF4u;
    {
        const bool branch_taken_0x108cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x108CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CF4u;
        // 0x108cf8: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cf4) {
            ctx->pc = 0x108D24u;
            goto label_108d24;
        }
    }
    ctx->pc = 0x108CFCu;
    // 0x108cfc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x108CFCu;
    {
        const bool branch_taken_0x108cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x108cfc) {
            ctx->pc = 0x108D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108CFCu;
            // 0x108d00: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108D18u;
            goto label_108d18;
        }
    }
    ctx->pc = 0x108D04u;
    // 0x108d04: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x108d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x108d08: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x108d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x108d0c: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x108d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108d10: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x108d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108d14: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x108d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_108d18:
    // 0x108d18: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x108d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x108d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108D1Cu;
    {
        const bool branch_taken_0x108d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D1Cu;
        // 0x108d20: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d1c) {
            ctx->pc = 0x108D30u;
            goto label_108d30;
        }
    }
    ctx->pc = 0x108D24u;
label_108d24:
    // 0x108d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d28: 0xc042602  jal         func_109808
    ctx->pc = 0x108D28u;
    SET_GPR_U32(ctx, 31, 0x108D30u);
    ctx->pc = 0x108D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D28u;
    // 0x108d2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109808u, 0x108D28u, 0x108D30u)) {
        return;
    }
    ctx->pc = 0x108D30u;
label_108d30:
    // 0x108d30: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x108d34: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x108d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x108d38: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x108d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x108d3c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108D3Cu;
    {
        const bool branch_taken_0x108d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D3Cu;
        // 0x108d40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d3c) {
            ctx->pc = 0x108D7Cu;
            goto label_108d7c;
        }
    }
    ctx->pc = 0x108D44u;
    // 0x108d44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108d48: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x108d48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x108d4c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x108D4Cu;
    {
        const bool branch_taken_0x108d4c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x108D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D4Cu;
        // 0x108d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d4c) {
            ctx->pc = 0x108D78u;
            goto label_108d78;
        }
    }
    ctx->pc = 0x108D54u;
    // 0x108d54: 0x0  nop
    ctx->pc = 0x108d54u;
    // NOP
label_108d58:
    // 0x108d58: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x108d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x108d5c: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x108d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x108d60: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x108d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108d64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x108d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108d68: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x108d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108d6c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x108d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x108d70: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x108D70u;
    {
        const bool branch_taken_0x108d70 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x108D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D70u;
        // 0x108d74: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d70) {
            ctx->pc = 0x108D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108d58;
        }
    }
    ctx->pc = 0x108D78u;
label_108d78:
    // 0x108d78: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x108d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_108d7c:
    // 0x108d7c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x108d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x108d80: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x108d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x108d84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x108d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108d88: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x108D88u;
    {
        const bool branch_taken_0x108d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x108D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D88u;
        // 0x108d8c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d88) {
            ctx->pc = 0x108DD0u;
            goto label_108dd0;
        }
    }
    ctx->pc = 0x108D90u;
    // 0x108d90: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108d94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x108d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x108d98: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x108D98u;
    {
        const bool branch_taken_0x108d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x108d98) {
            ctx->pc = 0x108D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108D98u;
            // 0x108d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108DC8u;
            goto label_108dc8;
        }
    }
    ctx->pc = 0x108DA0u;
    // 0x108da0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x108DA0u;
    {
        const bool branch_taken_0x108da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x108da0) {
            ctx->pc = 0x108DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108DA0u;
            // 0x108da4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108DBCu;
            goto label_108dbc;
        }
    }
    ctx->pc = 0x108DA8u;
    // 0x108da8: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x108da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x108dac: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x108dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x108db0: 0xb0a80007  sdl         $t0, 0x7($a1)
    ctx->pc = 0x108db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108db4: 0xb4a80000  sdr         $t0, 0x0($a1)
    ctx->pc = 0x108db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108db8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x108db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_108dbc:
    // 0x108dbc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x108dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x108dc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108DC0u;
    {
        const bool branch_taken_0x108dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DC0u;
        // 0x108dc4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108dc0) {
            ctx->pc = 0x108DD0u;
            goto label_108dd0;
        }
    }
    ctx->pc = 0x108DC8u;
label_108dc8:
    // 0x108dc8: 0xc042602  jal         func_109808
    ctx->pc = 0x108DC8u;
    SET_GPR_U32(ctx, 31, 0x108DD0u);
    ctx->pc = 0x108DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DC8u;
    // 0x108dcc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109808u, 0x108DC8u, 0x108DD0u)) {
        return;
    }
    ctx->pc = 0x108DD0u;
label_108dd0:
    // 0x108dd0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x108dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x108dd4: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x108dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x108dd8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108ddc: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x108ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x108de0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x108de0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108de4: 0x12300013  beq         $s1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x108DE4u;
    {
        const bool branch_taken_0x108de4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x108DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DE4u;
        // 0x108de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108de4) {
            ctx->pc = 0x108E34u;
            goto label_108e34;
        }
    }
    ctx->pc = 0x108DECu;
    // 0x108dec: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x108decu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x108df0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x108df0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x108df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108df8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108DF8u;
    {
        const bool branch_taken_0x108df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DF8u;
        // 0x108dfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108df8) {
            ctx->pc = 0x108E18u;
            goto label_108e18;
        }
    }
    ctx->pc = 0x108E00u;
label_108e00:
    // 0x108e00: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x108e00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x108e04: 0x0  nop
    ctx->pc = 0x108e04u;
    // NOP
    // 0x108e08: 0x0  nop
    ctx->pc = 0x108e08u;
    // NOP
    // 0x108e0c: 0x0  nop
    ctx->pc = 0x108e0cu;
    // NOP
    // 0x108e10: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x108E10u;
    {
        const bool branch_taken_0x108e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E10u;
        // 0x108e14: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e10) {
            ctx->pc = 0x108E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e00;
        }
    }
    ctx->pc = 0x108E18u;
label_108e18:
    // 0x108e18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e1c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x108e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x108e20: 0xc042814  jal         func_10A050
    ctx->pc = 0x108E20u;
    SET_GPR_U32(ctx, 31, 0x108E28u);
    ctx->pc = 0x108E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E20u;
    // 0x108e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A050u, 0x108E20u, 0x108E28u)) {
        return;
    }
    ctx->pc = 0x108E28u;
label_108e28:
    // 0x108e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e2c: 0xc042b90  jal         func_10AE40
    ctx->pc = 0x108E2Cu;
    SET_GPR_U32(ctx, 31, 0x108E34u);
    ctx->pc = 0x108E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E2Cu;
    // 0x108e30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10AE40u, 0x108E2Cu, 0x108E34u)) {
        return;
    }
    ctx->pc = 0x108E34u;
label_108e34:
    // 0x108e34: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x108e34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108e38: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x108e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x108e3c: 0x12300013  beq         $s1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x108E3Cu;
    {
        const bool branch_taken_0x108e3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x108E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E3Cu;
        // 0x108e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e3c) {
            ctx->pc = 0x108E8Cu;
            goto label_108e8c;
        }
    }
    ctx->pc = 0x108E44u;
    // 0x108e44: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x108e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x108e48: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x108e48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x108e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108e50: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108E50u;
    {
        const bool branch_taken_0x108e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E50u;
        // 0x108e54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e50) {
            ctx->pc = 0x108E70u;
            goto label_108e70;
        }
    }
    ctx->pc = 0x108E58u;
label_108e58:
    // 0x108e58: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x108e58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x108e5c: 0x0  nop
    ctx->pc = 0x108e5cu;
    // NOP
    // 0x108e60: 0x0  nop
    ctx->pc = 0x108e60u;
    // NOP
    // 0x108e64: 0x0  nop
    ctx->pc = 0x108e64u;
    // NOP
    // 0x108e68: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x108E68u;
    {
        const bool branch_taken_0x108e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E68u;
        // 0x108e6c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e68) {
            ctx->pc = 0x108E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e58;
        }
    }
    ctx->pc = 0x108E70u;
label_108e70:
    // 0x108e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108e74:
    // 0x108e74: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x108e74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x108e78: 0xc042814  jal         func_10A050
    ctx->pc = 0x108E78u;
    SET_GPR_U32(ctx, 31, 0x108E80u);
    ctx->pc = 0x108E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E78u;
    // 0x108e7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A050u, 0x108E78u, 0x108E80u)) {
        return;
    }
    ctx->pc = 0x108E80u;
label_108e80:
    // 0x108e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e84: 0xc042b90  jal         func_10AE40
    ctx->pc = 0x108E84u;
    SET_GPR_U32(ctx, 31, 0x108E8Cu);
    ctx->pc = 0x108E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E84u;
    // 0x108e88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10AE40u, 0x108E84u, 0x108E8Cu)) {
        return;
    }
    ctx->pc = 0x108E8Cu;
label_108e8c:
    // 0x108e8c: 0x8fb40000  lw          $s4, 0x0($sp)
    ctx->pc = 0x108e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108e90: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x108e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_108e94:
    // 0x108e94: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x108e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108e98: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x108e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108e9c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x108e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108ea0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x108ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108ea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x108ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108ea8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x108ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108eac: 0x3e00008  jr          $ra
    ctx->pc = 0x108EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EACu;
        // 0x108eb0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108EB4u;
    // 0x108eb4: 0x0  nop
    ctx->pc = 0x108eb4u;
    // NOP
    ctx->pc = 0x108eb8u;
}
