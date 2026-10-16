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

// Function: sub_00267A68
// Address: 0x267a68 - 0x267c98
void sub_00267A68_0x267a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267A68_0x267a68");
#endif

    switch (ctx->pc) {
        case 0x267a9cu: goto label_267a9c;
        case 0x267ab8u: goto label_267ab8;
        case 0x267ac0u: goto label_267ac0;
        case 0x267ad8u: goto label_267ad8;
        case 0x267af0u: goto label_267af0;
        case 0x267b10u: goto label_267b10;
        case 0x267b28u: goto label_267b28;
        case 0x267b7cu: goto label_267b7c;
        case 0x267b98u: goto label_267b98;
        case 0x267bb0u: goto label_267bb0;
        case 0x267bc8u: goto label_267bc8;
        case 0x267bd4u: goto label_267bd4;
        case 0x267be0u: goto label_267be0;
        case 0x267bf4u: goto label_267bf4;
        case 0x267c00u: goto label_267c00;
        case 0x267c18u: goto label_267c18;
        case 0x267c28u: goto label_267c28;
        case 0x267c38u: goto label_267c38;
        case 0x267c48u: goto label_267c48;
        case 0x267c58u: goto label_267c58;
        case 0x267c68u: goto label_267c68;
        default: break;
    }

    ctx->pc = 0x267a68u;

    // 0x267a68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x267a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x267a6c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x267a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x267a70: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x267a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x267a74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x267a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x267a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x267a7c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x267a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x267a80: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x267a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x267a84: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x267a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x267a88: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x267a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x267a8c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x267a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x267a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267a94: 0xc092442  jal         func_249108
    ctx->pc = 0x267A94u;
    SET_GPR_U32(ctx, 31, 0x267A9Cu);
    ctx->pc = 0x267A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A94u;
    // 0x267a98: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249108u, 0x267A94u, 0x267A9Cu)) {
        return;
    }
    ctx->pc = 0x267A9Cu;
label_267a9c:
    // 0x267a9c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x267a9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267aa0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x267aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267aa4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x267aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267aa8: 0xaee2002c  sw          $v0, 0x2C($s7)
    ctx->pc = 0x267aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 2));
    // 0x267aac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x267aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x267ab0: 0xc0c121e  jal         func_304878
    ctx->pc = 0x267AB0u;
    SET_GPR_U32(ctx, 31, 0x267AB8u);
    ctx->pc = 0x267AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267AB0u;
    // 0x267ab4: 0xaee30030  sw          $v1, 0x30($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304878u, 0x267AB0u, 0x267AB8u)) {
        return;
    }
    ctx->pc = 0x267AB8u;
label_267ab8:
    // 0x267ab8: 0xc0c2260  jal         func_308980
    ctx->pc = 0x267AB8u;
    SET_GPR_U32(ctx, 31, 0x267AC0u);
    ctx->pc = 0x267ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267AB8u;
    // 0x267abc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308980u, 0x267AB8u, 0x267AC0u)) {
        return;
    }
    ctx->pc = 0x267AC0u;
label_267ac0:
    // 0x267ac0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x267ac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ac4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x267ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267acc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x267accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ad0: 0xc0c12cc  jal         func_304B30
    ctx->pc = 0x267AD0u;
    SET_GPR_U32(ctx, 31, 0x267AD8u);
    ctx->pc = 0x267AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267AD0u;
    // 0x267ad4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304B30u, 0x267AD0u, 0x267AD8u)) {
        return;
    }
    ctx->pc = 0x267AD8u;
label_267ad8:
    // 0x267ad8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x267ad8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267adc: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x267adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x267ae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x267ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ae8: 0xc0c1286  jal         func_304A18
    ctx->pc = 0x267AE8u;
    SET_GPR_U32(ctx, 31, 0x267AF0u);
    ctx->pc = 0x267AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267AE8u;
    // 0x267aec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304A18u, 0x267AE8u, 0x267AF0u)) {
        return;
    }
    ctx->pc = 0x267AF0u;
label_267af0:
    // 0x267af0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x267af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x267af4: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x267af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x267af8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x267AF8u;
    {
        const bool branch_taken_0x267af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x267AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AF8u;
        // 0x267afc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267af8) {
            ctx->pc = 0x267B40u;
            goto label_267b40;
        }
    }
    ctx->pc = 0x267B00u;
    // 0x267b00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x267b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b04: 0x2651000c  addiu       $s1, $s2, 0xC
    ctx->pc = 0x267b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x267b08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x267b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x267b0c: 0x0  nop
    ctx->pc = 0x267b0cu;
    // NOP
label_267b10:
    // 0x267b10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b14: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x267b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267b18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x267b18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x267b1c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x267b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x267b20: 0xc0c20f4  jal         func_3083D0
    ctx->pc = 0x267B20u;
    SET_GPR_U32(ctx, 31, 0x267B28u);
    ctx->pc = 0x267B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B20u;
    // 0x267b24: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3083D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3083D0u, 0x267B20u, 0x267B28u)) {
        return;
    }
    ctx->pc = 0x267B28u;
label_267b28:
    // 0x267b28: 0x2e83000a  sltiu       $v1, $s4, 0xA
    ctx->pc = 0x267b28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x267b2c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x267B2Cu;
    {
        const bool branch_taken_0x267b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b2c) {
            ctx->pc = 0x267B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267B2Cu;
            // 0x267b30: 0x8e430058  lw          $v1, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267B44u;
            goto label_267b44;
        }
    }
    ctx->pc = 0x267B34u;
    // 0x267b34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x267b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x267b38: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x267B38u;
    {
        const bool branch_taken_0x267b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267b38) {
            ctx->pc = 0x267B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267B38u;
            // 0x267b3c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267b10;
        }
    }
    ctx->pc = 0x267B40u;
label_267b40:
    // 0x267b40: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x267b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_267b44:
    // 0x267b44: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x267b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x267b48: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x267B48u;
    {
        const bool branch_taken_0x267b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B48u;
        // 0x267b4c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b48) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267B50u;
    // 0x267b50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x267b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x267b54: 0x2442ba90  addiu       $v0, $v0, -0x4570
    ctx->pc = 0x267b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949520));
    // 0x267b58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x267b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267b5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x267b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267b60: 0x800008  jr          $a0
    ctx->pc = 0x267B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x267B68u: goto label_267b68;
            case 0x267B84u: goto label_267b84;
            case 0x267BA0u: goto label_267ba0;
            case 0x267BB8u: goto label_267bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267B60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x267B68u;
label_267b68:
    // 0x267b68: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x267b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x267b6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b70: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x267b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x267b74: 0xc0c21b4  jal         func_3086D0
    ctx->pc = 0x267B74u;
    SET_GPR_U32(ctx, 31, 0x267B7Cu);
    ctx->pc = 0x267B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B74u;
    // 0x267b78: 0x8e470064  lw          $a3, 0x64($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3086D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3086D0u, 0x267B74u, 0x267B7Cu)) {
        return;
    }
    ctx->pc = 0x267B7Cu;
label_267b7c:
    // 0x267b7c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x267B7Cu;
    {
        const bool branch_taken_0x267b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b7c) {
            ctx->pc = 0x267BD8u;
            goto label_267bd8;
        }
    }
    ctx->pc = 0x267B84u;
label_267b84:
    // 0x267b84: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x267b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x267b88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b8c: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x267b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x267b90: 0xc0c217e  jal         func_3085F8
    ctx->pc = 0x267B90u;
    SET_GPR_U32(ctx, 31, 0x267B98u);
    ctx->pc = 0x267B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B90u;
    // 0x267b94: 0x8e470064  lw          $a3, 0x64($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3085F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3085F8u, 0x267B90u, 0x267B98u)) {
        return;
    }
    ctx->pc = 0x267B98u;
label_267b98:
    // 0x267b98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x267B98u;
    {
        const bool branch_taken_0x267b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b98) {
            ctx->pc = 0x267BD8u;
            goto label_267bd8;
        }
    }
    ctx->pc = 0x267BA0u;
label_267ba0:
    // 0x267ba0: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x267ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x267ba4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ba8: 0xc0c21e8  jal         func_3087A0
    ctx->pc = 0x267BA8u;
    SET_GPR_U32(ctx, 31, 0x267BB0u);
    ctx->pc = 0x267BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BA8u;
    // 0x267bac: 0x8e460060  lw          $a2, 0x60($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3087A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3087A0u, 0x267BA8u, 0x267BB0u)) {
        return;
    }
    ctx->pc = 0x267BB0u;
label_267bb0:
    // 0x267bb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x267BB0u;
    {
        const bool branch_taken_0x267bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267bb0) {
            ctx->pc = 0x267BD8u;
            goto label_267bd8;
        }
    }
    ctx->pc = 0x267BB8u;
label_267bb8:
    // 0x267bb8: 0x24020131  addiu       $v0, $zero, 0x131
    ctx->pc = 0x267bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x267bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bc0: 0xc092848  jal         func_24A120
    ctx->pc = 0x267BC0u;
    SET_GPR_U32(ctx, 31, 0x267BC8u);
    ctx->pc = 0x267BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BC0u;
    // 0x267bc4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x267BC0u, 0x267BC8u)) {
        return;
    }
    ctx->pc = 0x267BC8u;
label_267bc8:
    // 0x267bc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bcc: 0xc09281a  jal         func_24A068
    ctx->pc = 0x267BCCu;
    SET_GPR_U32(ctx, 31, 0x267BD4u);
    ctx->pc = 0x267BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BCCu;
    // 0x267bd0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x267BCCu, 0x267BD4u)) {
        return;
    }
    ctx->pc = 0x267BD4u;
label_267bd4:
    // 0x267bd4: 0x0  nop
    ctx->pc = 0x267bd4u;
    // NOP
label_267bd8:
    // 0x267bd8: 0xc0c10d8  jal         func_304360
    ctx->pc = 0x267BD8u;
    SET_GPR_U32(ctx, 31, 0x267BE0u);
    ctx->pc = 0x267BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BD8u;
    // 0x267bdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304360u, 0x267BD8u, 0x267BE0u)) {
        return;
    }
    ctx->pc = 0x267BE0u;
label_267be0:
    // 0x267be0: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x267be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x267be4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x267be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bec: 0xc0c1286  jal         func_304A18
    ctx->pc = 0x267BECu;
    SET_GPR_U32(ctx, 31, 0x267BF4u);
    ctx->pc = 0x267BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BECu;
    // 0x267bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304A18u, 0x267BECu, 0x267BF4u)) {
        return;
    }
    ctx->pc = 0x267BF4u;
label_267bf4:
    // 0x267bf4: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x267bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x267bf8: 0xc0c2216  jal         func_308858
    ctx->pc = 0x267BF8u;
    SET_GPR_U32(ctx, 31, 0x267C00u);
    ctx->pc = 0x267BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BF8u;
    // 0x267bfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308858u, 0x267BF8u, 0x267C00u)) {
        return;
    }
    ctx->pc = 0x267C00u;
label_267c00:
    // 0x267c00: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x267c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x267c04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x267c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c0c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x267c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x267c10: 0xc0c2222  jal         func_308888
    ctx->pc = 0x267C10u;
    SET_GPR_U32(ctx, 31, 0x267C18u);
    ctx->pc = 0x267C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C10u;
    // 0x267c14: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308888u, 0x267C10u, 0x267C18u)) {
        return;
    }
    ctx->pc = 0x267C18u;
label_267c18:
    // 0x267c18: 0x8e460070  lw          $a2, 0x70($s2)
    ctx->pc = 0x267c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x267c1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c20: 0xc0c223a  jal         func_3088E8
    ctx->pc = 0x267C20u;
    SET_GPR_U32(ctx, 31, 0x267C28u);
    ctx->pc = 0x267C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C20u;
    // 0x267c24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3088E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3088E8u, 0x267C20u, 0x267C28u)) {
        return;
    }
    ctx->pc = 0x267C28u;
label_267c28:
    // 0x267c28: 0x8e460074  lw          $a2, 0x74($s2)
    ctx->pc = 0x267c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x267c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c30: 0xc0c223a  jal         func_3088E8
    ctx->pc = 0x267C30u;
    SET_GPR_U32(ctx, 31, 0x267C38u);
    ctx->pc = 0x267C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C30u;
    // 0x267c34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3088E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3088E8u, 0x267C30u, 0x267C38u)) {
        return;
    }
    ctx->pc = 0x267C38u;
label_267c38:
    // 0x267c38: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x267c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x267c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c40: 0xc0c223a  jal         func_3088E8
    ctx->pc = 0x267C40u;
    SET_GPR_U32(ctx, 31, 0x267C48u);
    ctx->pc = 0x267C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C40u;
    // 0x267c44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3088E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3088E8u, 0x267C40u, 0x267C48u)) {
        return;
    }
    ctx->pc = 0x267C48u;
label_267c48:
    // 0x267c48: 0x8e46007c  lw          $a2, 0x7C($s2)
    ctx->pc = 0x267c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x267c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c50: 0xc0c223a  jal         func_3088E8
    ctx->pc = 0x267C50u;
    SET_GPR_U32(ctx, 31, 0x267C58u);
    ctx->pc = 0x267C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C50u;
    // 0x267c54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3088E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3088E8u, 0x267C50u, 0x267C58u)) {
        return;
    }
    ctx->pc = 0x267C58u;
label_267c58:
    // 0x267c58: 0x8e460080  lw          $a2, 0x80($s2)
    ctx->pc = 0x267c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x267c5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c60: 0xc0c223a  jal         func_3088E8
    ctx->pc = 0x267C60u;
    SET_GPR_U32(ctx, 31, 0x267C68u);
    ctx->pc = 0x267C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C60u;
    // 0x267c64: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3088E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3088E8u, 0x267C60u, 0x267C68u)) {
        return;
    }
    ctx->pc = 0x267C68u;
label_267c68:
    // 0x267c68: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x267c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c6c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x267c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x267c70: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x267c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267c74: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x267c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267c78: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x267c78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267c7c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x267c7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267c80: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x267c80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267c84: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x267c84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267c88: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x267c88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267c90: 0x3e00008  jr          $ra
    ctx->pc = 0x267C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C90u;
        // 0x267c94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267C98u;
}
