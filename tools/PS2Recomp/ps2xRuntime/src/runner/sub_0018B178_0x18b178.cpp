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

// Function: sub_0018B178
// Address: 0x18b178 - 0x18b228
void sub_0018B178_0x18b178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B178_0x18b178");
#endif

    switch (ctx->pc) {
        case 0x18b1a8u: goto label_18b1a8;
        case 0x18b1e8u: goto label_18b1e8;
        case 0x18b214u: goto label_18b214;
        default: break;
    }

    ctx->pc = 0x18b178u;

    // 0x18b178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b17c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18b180: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18b184: 0x24428e78  addiu       $v0, $v0, -0x7188
    ctx->pc = 0x18b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938232));
    // 0x18b188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b18c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b194: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18b194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18b198: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18b19c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18B19Cu;
    {
        const bool branch_taken_0x18b19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B19Cu;
        // 0x18b1a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b19c) {
            ctx->pc = 0x18B200u;
            goto label_18b200;
        }
    }
    ctx->pc = 0x18B1A4u;
    // 0x18b1a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18b1a8:
    // 0x18b1a8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18B1A8u;
    {
        const bool branch_taken_0x18b1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b1a8) {
            ctx->pc = 0x18B1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B1A8u;
            // 0x18b1ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B1F8u;
            goto label_18b1f8;
        }
    }
    ctx->pc = 0x18B1B0u;
    // 0x18b1b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18b1b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B1B4u;
    {
        const bool branch_taken_0x18b1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1B4u;
        // 0x18b1b8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1b4) {
            ctx->pc = 0x18B1C4u;
            goto label_18b1c4;
        }
    }
    ctx->pc = 0x18B1BCu;
    // 0x18b1bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B1BCu;
    {
        const bool branch_taken_0x18b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1BCu;
        // 0x18b1c0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1bc) {
            ctx->pc = 0x18B1C8u;
            goto label_18b1c8;
        }
    }
    ctx->pc = 0x18B1C4u;
label_18b1c4:
    // 0x18b1c4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18b1c8:
    // 0x18b1c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18b1cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B1CCu;
    {
        const bool branch_taken_0x18b1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1CCu;
        // 0x18b1d0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1cc) {
            ctx->pc = 0x18B1DCu;
            goto label_18b1dc;
        }
    }
    ctx->pc = 0x18B1D4u;
    // 0x18b1d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B1D4u;
    {
        const bool branch_taken_0x18b1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1D4u;
        // 0x18b1d8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1d4) {
            ctx->pc = 0x18B1E0u;
            goto label_18b1e0;
        }
    }
    ctx->pc = 0x18B1DCu;
label_18b1dc:
    // 0x18b1dc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18b1e0:
    // 0x18b1e0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18B1E0u;
    SET_GPR_U32(ctx, 31, 0x18B1E8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18B1E0u, 0x18B1E8u)) {
        return;
    }
    ctx->pc = 0x18B1E8u;
label_18b1e8:
    // 0x18b1e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b1ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18b1f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18b1f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18b1f8:
    // 0x18b1f8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18B1F8u;
    {
        const bool branch_taken_0x18b1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b1f8) {
            ctx->pc = 0x18B1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B1F8u;
            // 0x18b1fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b1a8;
        }
    }
    ctx->pc = 0x18B200u;
label_18b200:
    // 0x18b200: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x18b200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x18b204: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B204u;
    {
        const bool branch_taken_0x18b204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b204) {
            ctx->pc = 0x18B208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B204u;
            // 0x18b208: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B218u;
            goto label_18b218;
        }
    }
    ctx->pc = 0x18B20Cu;
    // 0x18b20c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18B20Cu;
    SET_GPR_U32(ctx, 31, 0x18B214u);
    ctx->pc = 0x18B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B20Cu;
    // 0x18b210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18B20Cu, 0x18B214u)) {
        return;
    }
    ctx->pc = 0x18B214u;
label_18b214:
    // 0x18b214: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18b214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b218:
    // 0x18b218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b220: 0x3e00008  jr          $ra
    ctx->pc = 0x18B220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B220u;
        // 0x18b224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B228u;
}
