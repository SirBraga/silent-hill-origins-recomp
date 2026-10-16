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

// Function: sub_0018B0C8
// Address: 0x18b0c8 - 0x18b178
void sub_0018B0C8_0x18b0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B0C8_0x18b0c8");
#endif

    switch (ctx->pc) {
        case 0x18b0f8u: goto label_18b0f8;
        case 0x18b138u: goto label_18b138;
        case 0x18b164u: goto label_18b164;
        default: break;
    }

    ctx->pc = 0x18b0c8u;

    // 0x18b0c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b0cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18b0d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18b0d4: 0x24428e90  addiu       $v0, $v0, -0x7170
    ctx->pc = 0x18b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
    // 0x18b0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b0e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18b0e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18b0ec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18B0ECu;
    {
        const bool branch_taken_0x18b0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0ECu;
        // 0x18b0f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0ec) {
            ctx->pc = 0x18B150u;
            goto label_18b150;
        }
    }
    ctx->pc = 0x18B0F4u;
    // 0x18b0f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18b0f8:
    // 0x18b0f8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18B0F8u;
    {
        const bool branch_taken_0x18b0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b0f8) {
            ctx->pc = 0x18B0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B0F8u;
            // 0x18b0fc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B148u;
            goto label_18b148;
        }
    }
    ctx->pc = 0x18B100u;
    // 0x18b100: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18b104: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B104u;
    {
        const bool branch_taken_0x18b104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B104u;
        // 0x18b108: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b104) {
            ctx->pc = 0x18B114u;
            goto label_18b114;
        }
    }
    ctx->pc = 0x18B10Cu;
    // 0x18b10c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B10Cu;
    {
        const bool branch_taken_0x18b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B10Cu;
        // 0x18b110: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b10c) {
            ctx->pc = 0x18B118u;
            goto label_18b118;
        }
    }
    ctx->pc = 0x18B114u;
label_18b114:
    // 0x18b114: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18b114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18b118:
    // 0x18b118: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18b118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18b11c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B11Cu;
    {
        const bool branch_taken_0x18b11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B11Cu;
        // 0x18b120: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b11c) {
            ctx->pc = 0x18B12Cu;
            goto label_18b12c;
        }
    }
    ctx->pc = 0x18B124u;
    // 0x18b124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B124u;
    {
        const bool branch_taken_0x18b124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B124u;
        // 0x18b128: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b124) {
            ctx->pc = 0x18B130u;
            goto label_18b130;
        }
    }
    ctx->pc = 0x18B12Cu;
label_18b12c:
    // 0x18b12c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18b130:
    // 0x18b130: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18B130u;
    SET_GPR_U32(ctx, 31, 0x18B138u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18B130u, 0x18B138u)) {
        return;
    }
    ctx->pc = 0x18B138u;
label_18b138:
    // 0x18b138: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b13c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18b140: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18b140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18b144: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18b144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18b148:
    // 0x18b148: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18B148u;
    {
        const bool branch_taken_0x18b148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b148) {
            ctx->pc = 0x18B14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B148u;
            // 0x18b14c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b0f8;
        }
    }
    ctx->pc = 0x18B150u;
label_18b150:
    // 0x18b150: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x18b150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x18b154: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B154u;
    {
        const bool branch_taken_0x18b154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b154) {
            ctx->pc = 0x18B158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B154u;
            // 0x18b158: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B168u;
            goto label_18b168;
        }
    }
    ctx->pc = 0x18B15Cu;
    // 0x18b15c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18B15Cu;
    SET_GPR_U32(ctx, 31, 0x18B164u);
    ctx->pc = 0x18B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B15Cu;
    // 0x18b160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18B15Cu, 0x18B164u)) {
        return;
    }
    ctx->pc = 0x18B164u;
label_18b164:
    // 0x18b164: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18b164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b168:
    // 0x18b168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b170: 0x3e00008  jr          $ra
    ctx->pc = 0x18B170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B170u;
        // 0x18b174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B178u;
}
