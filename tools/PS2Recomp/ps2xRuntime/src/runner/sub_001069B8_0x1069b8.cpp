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

// Function: sub_001069B8
// Address: 0x1069b8 - 0x106ac0
void sub_001069B8_0x1069b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001069B8_0x1069b8");
#endif

    switch (ctx->pc) {
        case 0x106a18u: goto label_106a18;
        case 0x106a24u: goto label_106a24;
        case 0x106a50u: goto label_106a50;
        case 0x106a5cu: goto label_106a5c;
        case 0x106a68u: goto label_106a68;
        case 0x106a94u: goto label_106a94;
        case 0x106aa0u: goto label_106aa0;
        default: break;
    }

    ctx->pc = 0x1069b8u;

    // 0x1069b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1069b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1069bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1069bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1069c0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1069c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1069c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1069c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1069c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1069c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1069cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1069ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1069d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1069d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1069d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1069d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1069d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1069dc: 0x8e6304bc  lw          $v1, 0x4BC($s3)
    ctx->pc = 0x1069dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1212)));
    // 0x1069e0: 0x50620030  beql        $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1069E0u;
    {
        const bool branch_taken_0x1069e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1069e0) {
            ctx->pc = 0x1069E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1069E0u;
            // 0x1069e4: 0xae6004b8  sw          $zero, 0x4B8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 1208), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106AA4u;
            goto label_106aa4;
        }
    }
    ctx->pc = 0x1069E8u;
    // 0x1069e8: 0x8e6204b8  lw          $v0, 0x4B8($s3)
    ctx->pc = 0x1069e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1208)));
    // 0x1069ec: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1069ECu;
    {
        const bool branch_taken_0x1069ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069ECu;
        // 0x1069f0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069ec) {
            ctx->pc = 0x106AA0u;
            goto label_106aa0;
        }
    }
    ctx->pc = 0x1069F4u;
    // 0x1069f4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1069f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1069f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1069f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1069fc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1069fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x106a00: 0x8c50006c  lw          $s0, 0x6C($v0)
    ctx->pc = 0x106a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x106a04: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x106A04u;
    {
        const bool branch_taken_0x106a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A04u;
        // 0x106a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a04) {
            ctx->pc = 0x106AA0u;
            goto label_106aa0;
        }
    }
    ctx->pc = 0x106A0Cu;
    // 0x106a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a10: 0xc09fc70  jal         func_27F1C0
    ctx->pc = 0x106A10u;
    SET_GPR_U32(ctx, 31, 0x106A18u);
    ctx->pc = 0x106A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A10u;
    // 0x106a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F1C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F1C0u, 0x106A10u, 0x106A18u)) {
        return;
    }
    ctx->pc = 0x106A18u;
label_106a18:
    // 0x106a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a1c: 0xc09fafc  jal         func_27EBF0
    ctx->pc = 0x106A1Cu;
    SET_GPR_U32(ctx, 31, 0x106A24u);
    ctx->pc = 0x106A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A1Cu;
    // 0x106a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27EBF0u, 0x106A1Cu, 0x106A24u)) {
        return;
    }
    ctx->pc = 0x106A24u;
label_106a24:
    // 0x106a24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x106a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x106a28: 0x8c62386c  lw          $v0, 0x386C($v1)
    ctx->pc = 0x106a28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B386Cu));
    // 0x106a2c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x106a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x106a30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x106a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x106a34: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x106a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x106a38: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x106a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x106a3c: 0x8e120018  lw          $s2, 0x18($s0)
    ctx->pc = 0x106a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x106a40: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x106A40u;
    {
        const bool branch_taken_0x106a40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x106a40) {
            ctx->pc = 0x106A98u;
            goto label_106a98;
        }
    }
    ctx->pc = 0x106A48u;
    // 0x106a48: 0xc09f90a  jal         func_27E428
    ctx->pc = 0x106A48u;
    SET_GPR_U32(ctx, 31, 0x106A50u);
    ctx->pc = 0x106A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A48u;
    // 0x106a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x106A48u, 0x106A50u)) {
        return;
    }
    ctx->pc = 0x106A50u;
label_106a50:
    // 0x106a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a54: 0xc09fc42  jal         func_27F108
    ctx->pc = 0x106A54u;
    SET_GPR_U32(ctx, 31, 0x106A5Cu);
    ctx->pc = 0x106A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A54u;
    // 0x106a58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F108u, 0x106A54u, 0x106A5Cu)) {
        return;
    }
    ctx->pc = 0x106A5Cu;
label_106a5c:
    // 0x106a5c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x106A5Cu;
    {
        const bool branch_taken_0x106a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A5Cu;
        // 0x106a60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a5c) {
            ctx->pc = 0x106A80u;
            goto label_106a80;
        }
    }
    ctx->pc = 0x106A64u;
    // 0x106a64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x106a64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106a68:
    // 0x106a68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x106a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x106a6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x106a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x106a70: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x106a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x106a74: 0x0  nop
    ctx->pc = 0x106a74u;
    // NOP
    // 0x106a78: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x106A78u;
    {
        const bool branch_taken_0x106a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A78u;
        // 0x106a7c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a78) {
            ctx->pc = 0x106A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106a68;
        }
    }
    ctx->pc = 0x106A80u;
label_106a80:
    // 0x106a80: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x106a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x106a84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106A84u;
    {
        const bool branch_taken_0x106a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106a84) {
            ctx->pc = 0x106A98u;
            goto label_106a98;
        }
    }
    ctx->pc = 0x106A8Cu;
    // 0x106a8c: 0xc093356  jal         func_24CD58
    ctx->pc = 0x106A8Cu;
    SET_GPR_U32(ctx, 31, 0x106A94u);
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x106A8Cu, 0x106A94u)) {
        return;
    }
    ctx->pc = 0x106A94u;
label_106a94:
    // 0x106a94: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x106a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_106a98:
    // 0x106a98: 0xc0416d2  jal         func_105B48
    ctx->pc = 0x106A98u;
    SET_GPR_U32(ctx, 31, 0x106AA0u);
    ctx->pc = 0x106A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A98u;
    // 0x106a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105B48u, 0x106A98u, 0x106AA0u)) {
        return;
    }
    ctx->pc = 0x106AA0u;
label_106aa0:
    // 0x106aa0: 0xae6004b8  sw          $zero, 0x4B8($s3)
    ctx->pc = 0x106aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1208), GPR_U32(ctx, 0));
label_106aa4:
    // 0x106aa4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x106aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106aa8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x106aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x106aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106ab0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x106ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x106AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AB8u;
        // 0x106abc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106AC0u;
}
