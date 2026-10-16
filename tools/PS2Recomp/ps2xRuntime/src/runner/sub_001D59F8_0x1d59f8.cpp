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

// Function: sub_001D59F8
// Address: 0x1d59f8 - 0x1d5b98
void sub_001D59F8_0x1d59f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D59F8_0x1d59f8");
#endif

    switch (ctx->pc) {
        case 0x1d5a40u: goto label_1d5a40;
        case 0x1d5a70u: goto label_1d5a70;
        case 0x1d5a84u: goto label_1d5a84;
        case 0x1d5aa8u: goto label_1d5aa8;
        case 0x1d5ae4u: goto label_1d5ae4;
        case 0x1d5b20u: goto label_1d5b20;
        case 0x1d5b5cu: goto label_1d5b5c;
        default: break;
    }

    ctx->pc = 0x1d59f8u;

    // 0x1d59f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d59f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d59fc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d59fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1d5a00: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1d5a00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1d5a04: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d5a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1d5a08: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d5a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1d5a0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d5a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d5a14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d5a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a18: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d5a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1d5a1c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d5a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a20: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1d5a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1d5a24: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1d5a24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a28: 0x8e449b94  lw          $a0, -0x646C($s2)
    ctx->pc = 0x1d5a28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339B94u));
    // 0x1d5a2c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1d5a2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a30: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5A30u;
    {
        const bool branch_taken_0x1d5a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A30u;
        // 0x1d5a34: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a30) {
            ctx->pc = 0x1D5A44u;
            goto label_1d5a44;
        }
    }
    ctx->pc = 0x1D5A38u;
    // 0x1d5a38: 0xc06b850  jal         func_1AE140
    ctx->pc = 0x1D5A38u;
    SET_GPR_U32(ctx, 31, 0x1D5A40u);
    ctx->pc = 0x1D5A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A38u;
    // 0x1d5a3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE140u, 0x1D5A38u, 0x1D5A40u)) {
        return;
    }
    ctx->pc = 0x1D5A40u;
label_1d5a40:
    // 0x1d5a40: 0xae409b94  sw          $zero, -0x646C($s2)
    ctx->pc = 0x1d5a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294941588), GPR_U32(ctx, 0));
label_1d5a44:
    // 0x1d5a44: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1D5A44u;
    {
        const bool branch_taken_0x1d5a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A44u;
        // 0x1d5a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a44) {
            ctx->pc = 0x1D5B74u;
            goto label_1d5b74;
        }
    }
    ctx->pc = 0x1D5A4Cu;
    // 0x1d5a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d5a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d5a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d5a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5a64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a68: 0xc06b5e0  jal         func_1AD780
    ctx->pc = 0x1D5A68u;
    SET_GPR_U32(ctx, 31, 0x1D5A70u);
    ctx->pc = 0x1D5A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A68u;
    // 0x1d5a6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD780u, 0x1D5A68u, 0x1D5A70u)) {
        return;
    }
    ctx->pc = 0x1D5A70u;
label_1d5a70:
    // 0x1d5a70: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1d5a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1d5a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a78: 0x24a564c8  addiu       $a1, $a1, 0x64C8
    ctx->pc = 0x1d5a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25800));
    // 0x1d5a7c: 0xc06b8fa  jal         func_1AE3E8
    ctx->pc = 0x1D5A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A84u);
    ctx->pc = 0x1D5A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A7Cu;
    // 0x1d5a80: 0xae429b94  sw          $v0, -0x646C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294941588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE3E8u, 0x1D5A7Cu, 0x1D5A84u)) {
        return;
    }
    ctx->pc = 0x1D5A84u;
label_1d5a84:
    // 0x1d5a84: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D5A84u;
    {
        const bool branch_taken_0x1d5a84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A84u;
        // 0x1d5a88: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a84) {
            ctx->pc = 0x1D5AC0u;
            goto label_1d5ac0;
        }
    }
    ctx->pc = 0x1D5A8Cu;
    // 0x1d5a8c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d5a90: 0x24429b98  addiu       $v0, $v0, -0x6468
    ctx->pc = 0x1d5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941592));
    // 0x1d5a94: 0x8e449b94  lw          $a0, -0x646C($s2)
    ctx->pc = 0x1d5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941588)));
    // 0x1d5a98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5aa0: 0xc06b8c4  jal         func_1AE310
    ctx->pc = 0x1D5AA0u;
    SET_GPR_U32(ctx, 31, 0x1D5AA8u);
    ctx->pc = 0x1D5AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AA0u;
    // 0x1d5aa4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE310u, 0x1D5AA0u, 0x1D5AA8u)) {
        return;
    }
    ctx->pc = 0x1D5AA8u;
label_1d5aa8:
    // 0x1d5aa8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d5aac: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d5ab0: 0x8c828828  lw          $v0, -0x77D8($a0)
    ctx->pc = 0x1d5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8828u));
    // 0x1d5ab4: 0xac718818  sw          $s1, -0x77E8($v1)
    ctx->pc = 0x1d5ab4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6F8818u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8818u, _value); } while (0);
    // 0x1d5ab8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d5ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d5abc: 0xac828828  sw          $v0, -0x77D8($a0)
    ctx->pc = 0x1d5abcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8828u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8828u, _value); } while (0);
label_1d5ac0:
    // 0x1d5ac0: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1D5AC0u;
    {
        const bool branch_taken_0x1d5ac0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AC0u;
        // 0x1d5ac4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ac0) {
            ctx->pc = 0x1D5AFCu;
            goto label_1d5afc;
        }
    }
    ctx->pc = 0x1D5AC8u;
    // 0x1d5ac8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1d5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1d5acc: 0x24429b98  addiu       $v0, $v0, -0x6468
    ctx->pc = 0x1d5accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941592));
    // 0x1d5ad0: 0x8e449b94  lw          $a0, -0x646C($s2)
    ctx->pc = 0x1d5ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941588)));
    // 0x1d5ad4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5ad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5adc: 0xc06b8c4  jal         func_1AE310
    ctx->pc = 0x1D5ADCu;
    SET_GPR_U32(ctx, 31, 0x1D5AE4u);
    ctx->pc = 0x1D5AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ADCu;
    // 0x1d5ae0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE310u, 0x1D5ADCu, 0x1D5AE4u)) {
        return;
    }
    ctx->pc = 0x1D5AE4u;
label_1d5ae4:
    // 0x1d5ae4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d5ae8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d5aec: 0x8c828828  lw          $v0, -0x77D8($a0)
    ctx->pc = 0x1d5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8828u));
    // 0x1d5af0: 0xac73881c  sw          $s3, -0x77E4($v1)
    ctx->pc = 0x1d5af0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x6F881Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F881Cu, _value); } while (0);
    // 0x1d5af4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d5af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d5af8: 0xac828828  sw          $v0, -0x77D8($a0)
    ctx->pc = 0x1d5af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8828u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8828u, _value); } while (0);
label_1d5afc:
    // 0x1d5afc: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x1D5AFCu;
    {
        const bool branch_taken_0x1d5afc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AFCu;
        // 0x1d5b00: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5afc) {
            ctx->pc = 0x1D5B38u;
            goto label_1d5b38;
        }
    }
    ctx->pc = 0x1D5B04u;
    // 0x1d5b04: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1d5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1d5b08: 0x24429b98  addiu       $v0, $v0, -0x6468
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941592));
    // 0x1d5b0c: 0x8e449b94  lw          $a0, -0x646C($s2)
    ctx->pc = 0x1d5b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941588)));
    // 0x1d5b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b18: 0xc06b8c4  jal         func_1AE310
    ctx->pc = 0x1D5B18u;
    SET_GPR_U32(ctx, 31, 0x1D5B20u);
    ctx->pc = 0x1D5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B18u;
    // 0x1d5b1c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE310u, 0x1D5B18u, 0x1D5B20u)) {
        return;
    }
    ctx->pc = 0x1D5B20u;
label_1d5b20:
    // 0x1d5b20: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d5b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d5b24: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d5b28: 0x8c828828  lw          $v0, -0x77D8($a0)
    ctx->pc = 0x1d5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8828u));
    // 0x1d5b2c: 0xac748820  sw          $s4, -0x77E0($v1)
    ctx->pc = 0x1d5b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x6F8820u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8820u, _value); } while (0);
    // 0x1d5b30: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d5b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d5b34: 0xac828828  sw          $v0, -0x77D8($a0)
    ctx->pc = 0x1d5b34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8828u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8828u, _value); } while (0);
label_1d5b38:
    // 0x1d5b38: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x1D5B38u;
    {
        const bool branch_taken_0x1d5b38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B38u;
        // 0x1d5b3c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b38) {
            ctx->pc = 0x1D5B74u;
            goto label_1d5b74;
        }
    }
    ctx->pc = 0x1D5B40u;
    // 0x1d5b40: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1d5b44: 0x24429b98  addiu       $v0, $v0, -0x6468
    ctx->pc = 0x1d5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941592));
    // 0x1d5b48: 0x8e449b94  lw          $a0, -0x646C($s2)
    ctx->pc = 0x1d5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941588)));
    // 0x1d5b4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b54: 0xc06b8c4  jal         func_1AE310
    ctx->pc = 0x1D5B54u;
    SET_GPR_U32(ctx, 31, 0x1D5B5Cu);
    ctx->pc = 0x1D5B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B54u;
    // 0x1d5b58: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE310u, 0x1D5B54u, 0x1D5B5Cu)) {
        return;
    }
    ctx->pc = 0x1D5B5Cu;
label_1d5b5c:
    // 0x1d5b5c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d5b60: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d5b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d5b64: 0x8c828828  lw          $v0, -0x77D8($a0)
    ctx->pc = 0x1d5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8828u));
    // 0x1d5b68: 0xac758824  sw          $s5, -0x77DC($v1)
    ctx->pc = 0x1d5b68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x6F8824u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8824u, _value); } while (0);
    // 0x1d5b6c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d5b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1d5b70: 0xac828828  sw          $v0, -0x77D8($a0)
    ctx->pc = 0x1d5b70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8828u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8828u, _value); } while (0);
label_1d5b74:
    // 0x1d5b74: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d5b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d5b78: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d5b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5b7c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d5b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5b80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d5b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5b84: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d5b84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5b88: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1d5b88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B90u;
        // 0x1d5b94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5B98u;
}
