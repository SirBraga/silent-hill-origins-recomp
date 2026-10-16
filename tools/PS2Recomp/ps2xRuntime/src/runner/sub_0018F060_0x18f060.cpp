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

// Function: sub_0018F060
// Address: 0x18f060 - 0x18f138
void sub_0018F060_0x18f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F060_0x18f060");
#endif

    switch (ctx->pc) {
        case 0x18f088u: goto label_18f088;
        case 0x18f0a4u: goto label_18f0a4;
        case 0x18f0b0u: goto label_18f0b0;
        case 0x18f0c0u: goto label_18f0c0;
        case 0x18f0c4u: goto label_18f0c4;
        case 0x18f114u: goto label_18f114;
        default: break;
    }

    ctx->pc = 0x18f060u;

    // 0x18f060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18f064: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18f064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18f068: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18f068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18f06c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18f06cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f074: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18f074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18f078: 0x8e5100a0  lw          $s1, 0xA0($s2)
    ctx->pc = 0x18f078u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18f07c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F07Cu;
    {
        const bool branch_taken_0x18f07c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F07Cu;
        // 0x18f080: 0x2650009c  addiu       $s0, $s2, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f07c) {
            ctx->pc = 0x18F0C0u;
            goto label_18f0c0;
        }
    }
    ctx->pc = 0x18F084u;
    // 0x18f084: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x18f084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18f088:
    // 0x18f088: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x18F088u;
    {
        const bool branch_taken_0x18f088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f088) {
            ctx->pc = 0x18F08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F088u;
            // 0x18f08c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F0B4u;
            goto label_18f0b4;
        }
    }
    ctx->pc = 0x18F090u;
    // 0x18f090: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18f090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f094: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F094u;
    {
        const bool branch_taken_0x18f094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f094) {
            ctx->pc = 0x18F0A8u;
            goto label_18f0a8;
        }
    }
    ctx->pc = 0x18F09Cu;
    // 0x18f09c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18F09Cu;
    SET_GPR_U32(ctx, 31, 0x18F0A4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18F09Cu, 0x18F0A4u)) {
        return;
    }
    ctx->pc = 0x18F0A4u;
label_18f0a4:
    // 0x18f0a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_18f0a8:
    // 0x18f0a8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18F0A8u;
    SET_GPR_U32(ctx, 31, 0x18F0B0u);
    ctx->pc = 0x18F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F0A8u;
    // 0x18f0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18F0A8u, 0x18F0B0u)) {
        return;
    }
    ctx->pc = 0x18F0B0u;
label_18f0b0:
    // 0x18f0b0: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x18f0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18f0b4:
    // 0x18f0b4: 0x5620fff4  bnel        $s1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x18F0B4u;
    {
        const bool branch_taken_0x18f0b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f0b4) {
            ctx->pc = 0x18F0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F0B4u;
            // 0x18f0b8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f088;
        }
    }
    ctx->pc = 0x18F0BCu;
    // 0x18f0bc: 0x2650009c  addiu       $s0, $s2, 0x9C
    ctx->pc = 0x18f0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
label_18f0c0:
    // 0x18f0c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18f0c4:
    // 0x18f0c4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x18F0C4u;
    {
        const bool branch_taken_0x18f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f0c4) {
            ctx->pc = 0x18F0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F0C4u;
            // 0x18f0c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F124u;
            goto label_18f124;
        }
    }
    ctx->pc = 0x18F0CCu;
    // 0x18f0cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18f0d0: 0x0  nop
    ctx->pc = 0x18f0d0u;
    // NOP
    // 0x18f0d4: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18F0D4u;
    {
        const bool branch_taken_0x18f0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f0d4) {
            ctx->pc = 0x18F0C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f0c4;
        }
    }
    ctx->pc = 0x18F0DCu;
    // 0x18f0dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18f0e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F0E0u;
    {
        const bool branch_taken_0x18f0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0E0u;
        // 0x18f0e4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0e0) {
            ctx->pc = 0x18F0F0u;
            goto label_18f0f0;
        }
    }
    ctx->pc = 0x18F0E8u;
    // 0x18f0e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F0E8u;
    {
        const bool branch_taken_0x18f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0E8u;
        // 0x18f0ec: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0e8) {
            ctx->pc = 0x18F0F4u;
            goto label_18f0f4;
        }
    }
    ctx->pc = 0x18F0F0u;
label_18f0f0:
    // 0x18f0f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18f0f4:
    // 0x18f0f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18f0f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F0F8u;
    {
        const bool branch_taken_0x18f0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0F8u;
        // 0x18f0fc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0f8) {
            ctx->pc = 0x18F108u;
            goto label_18f108;
        }
    }
    ctx->pc = 0x18F100u;
    // 0x18f100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F100u;
    {
        const bool branch_taken_0x18f100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F100u;
        // 0x18f104: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f100) {
            ctx->pc = 0x18F10Cu;
            goto label_18f10c;
        }
    }
    ctx->pc = 0x18F108u;
label_18f108:
    // 0x18f108: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18f108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18f10c:
    // 0x18f10c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18F10Cu;
    SET_GPR_U32(ctx, 31, 0x18F114u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18F10Cu, 0x18F114u)) {
        return;
    }
    ctx->pc = 0x18F114u;
label_18f114:
    // 0x18f114: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f118: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18f11c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x18F11Cu;
    {
        const bool branch_taken_0x18f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F11Cu;
        // 0x18f120: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f11c) {
            ctx->pc = 0x18F0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f0c0;
        }
    }
    ctx->pc = 0x18F124u;
label_18f124:
    // 0x18f124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18f124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f128: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18f128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f130: 0x3e00008  jr          $ra
    ctx->pc = 0x18F130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F130u;
        // 0x18f134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F138u;
}
