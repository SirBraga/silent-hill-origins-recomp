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

// Function: sub_002E09C0
// Address: 0x2e09c0 - 0x2e0b40
void sub_002E09C0_0x2e09c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E09C0_0x2e09c0");
#endif

    switch (ctx->pc) {
        case 0x2e0a18u: goto label_2e0a18;
        case 0x2e0a2cu: goto label_2e0a2c;
        case 0x2e0a40u: goto label_2e0a40;
        case 0x2e0a48u: goto label_2e0a48;
        case 0x2e0aa8u: goto label_2e0aa8;
        case 0x2e0ab0u: goto label_2e0ab0;
        case 0x2e0aecu: goto label_2e0aec;
        default: break;
    }

    ctx->pc = 0x2e09c0u;

    // 0x2e09c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e09c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e09c4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e09c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e09c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e09c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e09cc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2e09ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e09d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e09d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e09d4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2e09d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e09d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e09dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e09dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e09e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e09e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e09e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09e8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e09e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e09ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e09ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09f0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2e09f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2e09f4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2e09f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e09f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e09fc: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E09FCu;
    {
        const bool branch_taken_0x2e09fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09FCu;
        // 0x2e0a00: 0xc6a00b  movn        $s4, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09fc) {
            ctx->pc = 0x2E0A50u;
            goto label_2e0a50;
        }
    }
    ctx->pc = 0x2E0A04u;
    // 0x2e0a04: 0x8f848c30  lw          $a0, -0x73D0($gp)
    ctx->pc = 0x2e0a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937648)));
    // 0x2e0a08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0A08u;
    {
        const bool branch_taken_0x2e0a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A08u;
        // 0x2e0a0c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a08) {
            ctx->pc = 0x2E0A20u;
            goto label_2e0a20;
        }
    }
    ctx->pc = 0x2E0A10u;
    // 0x2e0a10: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2E0A10u;
    SET_GPR_U32(ctx, 31, 0x2E0A18u);
    ctx->pc = 0x2E0A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A10u;
    // 0x2e0a14: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2E0A10u, 0x2E0A18u)) {
        return;
    }
    ctx->pc = 0x2E0A18u;
label_2e0a18:
    // 0x2e0a18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0A18u;
    {
        const bool branch_taken_0x2e0a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A18u;
        // 0x2e0a1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a18) {
            ctx->pc = 0x2E0A30u;
            goto label_2e0a30;
        }
    }
    ctx->pc = 0x2E0A20u;
label_2e0a20:
    // 0x2e0a20: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2e0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e0a24: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2E0A24u;
    SET_GPR_U32(ctx, 31, 0x2E0A2Cu);
    ctx->pc = 0x2E0A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A24u;
    // 0x2e0a28: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2E0A24u, 0x2E0A2Cu)) {
        return;
    }
    ctx->pc = 0x2E0A2Cu;
label_2e0a2c:
    // 0x2e0a2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0a30:
    // 0x2e0a30: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2E0A30u;
    {
        const bool branch_taken_0x2e0a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A30u;
        // 0x2e0a34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a30) {
            ctx->pc = 0x2E0B18u;
            goto label_2e0b18;
        }
    }
    ctx->pc = 0x2E0A38u;
    // 0x2e0a38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0A38u;
    {
        const bool branch_taken_0x2e0a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A38u;
        // 0x2e0a3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a38) {
            ctx->pc = 0x2E0A54u;
            goto label_2e0a54;
        }
    }
    ctx->pc = 0x2E0A40u;
label_2e0a40:
    // 0x2e0a40: 0xc0b8300  jal         func_2E0C00
    ctx->pc = 0x2E0A40u;
    SET_GPR_U32(ctx, 31, 0x2E0A48u);
    ctx->pc = 0x2E0A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A40u;
    // 0x2e0a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0C00u, 0x2E0A40u, 0x2E0A48u)) {
        return;
    }
    ctx->pc = 0x2E0A48u;
label_2e0a48:
    // 0x2e0a48: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2E0A48u;
    {
        const bool branch_taken_0x2e0a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A48u;
        // 0x2e0a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a48) {
            ctx->pc = 0x2E0B18u;
            goto label_2e0b18;
        }
    }
    ctx->pc = 0x2E0A50u;
label_2e0a50:
    // 0x2e0a50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e0a54:
    // 0x2e0a54: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2e0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2e0a58: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2e0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2e0a5c: 0x142023  negu        $a0, $s4
    ctx->pc = 0x2e0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x2e0a60: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2e0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e0a64: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x2e0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x2e0a68: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x2e0a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2e0a6c: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x2e0a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x2e0a70: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0a74: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2e0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2e0a78: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e0a78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a7c: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x2e0a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x2e0a80: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x2e0a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x2e0a84: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e0a88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2e0a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2e0a8c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E0A8Cu;
    {
        const bool branch_taken_0x2e0a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A8Cu;
        // 0x2e0a90: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a8c) {
            ctx->pc = 0x2E0AF4u;
            goto label_2e0af4;
        }
    }
    ctx->pc = 0x2E0A94u;
    // 0x2e0a94: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x2e0a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e0a98: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e0a9c: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x2e0a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e0aa0: 0x2742021  addu        $a0, $s3, $s4
    ctx->pc = 0x2e0aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2e0aa4: 0x0  nop
    ctx->pc = 0x2e0aa4u;
    // NOP
label_2e0aa8:
    // 0x2e0aa8: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2E0AA8u;
    SET_GPR_U32(ctx, 31, 0x2E0AB0u);
    ctx->pc = 0x2E0AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0AA8u;
    // 0x2e0aac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2E0AA8u, 0x2E0AB0u)) {
        return;
    }
    ctx->pc = 0x2E0AB0u;
label_2e0ab0:
    // 0x2e0ab0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e0ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ab4: 0x10e0ffe2  beqz        $a3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2E0AB4u;
    {
        const bool branch_taken_0x2e0ab4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AB4u;
        // 0x2e0ab8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ab4) {
            ctx->pc = 0x2E0A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0a40;
        }
    }
    ctx->pc = 0x2E0ABCu;
    // 0x2e0abc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e0ac0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2e0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2e0ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ac8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e0ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0acc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e0accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e0ad0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e0ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e0ad4: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x2e0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
    // 0x2e0ad8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2e0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2e0adc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2e0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e0ae0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x2e0ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x2e0ae4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E0AE4u;
    SET_GPR_U32(ctx, 31, 0x2E0AECu);
    ctx->pc = 0x2E0AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0AE4u;
    // 0x2e0ae8: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E0AE4u, 0x2E0AECu)) {
        return;
    }
    ctx->pc = 0x2E0AECu;
label_2e0aec:
    // 0x2e0aec: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2E0AECu;
    {
        const bool branch_taken_0x2e0aec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AECu;
        // 0x2e0af0: 0x2742021  addu        $a0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0aec) {
            ctx->pc = 0x2E0AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0aa8;
        }
    }
    ctx->pc = 0x2E0AF4u;
label_2e0af4:
    // 0x2e0af4: 0x8f839040  lw          $v1, -0x6FC0($gp)
    ctx->pc = 0x2e0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938688)));
    // 0x2e0af8: 0x27829040  addiu       $v0, $gp, -0x6FC0
    ctx->pc = 0x2e0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938688));
    // 0x2e0afc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2e0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2e0b00: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2e0b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2e0b04: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2e0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2e0b08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e0b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b0c: 0x8f839040  lw          $v1, -0x6FC0($gp)
    ctx->pc = 0x2e0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938688)));
    // 0x2e0b10: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2e0b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2e0b14: 0xaf849040  sw          $a0, -0x6FC0($gp)
    ctx->pc = 0x2e0b14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938688), GPR_U32(ctx, 4));
label_2e0b18:
    // 0x2e0b18: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e0b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0b1c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e0b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0b20: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e0b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0b24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e0b24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0b28: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e0b28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0b2c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e0b2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0b30: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2e0b30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B38u;
        // 0x2e0b3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B40u;
}
