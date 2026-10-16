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

// Function: sub_001BE1D0
// Address: 0x1be1d0 - 0x1be250
void sub_001BE1D0_0x1be1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE1D0_0x1be1d0");
#endif

    switch (ctx->pc) {
        case 0x1be1e0u: goto label_1be1e0;
        case 0x1be1e4u: goto label_1be1e4;
        case 0x1be234u: goto label_1be234;
        default: break;
    }

    ctx->pc = 0x1be1d0u;

    // 0x1be1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be1d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be1d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be1dc: 0x249002e0  addiu       $s0, $a0, 0x2E0
    ctx->pc = 0x1be1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_1be1e0:
    // 0x1be1e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1be1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1be1e4:
    // 0x1be1e4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BE1E4u;
    {
        const bool branch_taken_0x1be1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be1e4) {
            ctx->pc = 0x1BE1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE1E4u;
            // 0x1be1e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE244u;
            goto label_1be244;
        }
    }
    ctx->pc = 0x1BE1ECu;
    // 0x1be1ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1be1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1be1f0: 0x0  nop
    ctx->pc = 0x1be1f0u;
    // NOP
    // 0x1be1f4: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BE1F4u;
    {
        const bool branch_taken_0x1be1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be1f4) {
            ctx->pc = 0x1BE1E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be1e4;
        }
    }
    ctx->pc = 0x1BE1FCu;
    // 0x1be1fc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1be1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1be200: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE200u;
    {
        const bool branch_taken_0x1be200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE200u;
        // 0x1be204: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be200) {
            ctx->pc = 0x1BE210u;
            goto label_1be210;
        }
    }
    ctx->pc = 0x1BE208u;
    // 0x1be208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE208u;
    {
        const bool branch_taken_0x1be208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE208u;
        // 0x1be20c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be208) {
            ctx->pc = 0x1BE214u;
            goto label_1be214;
        }
    }
    ctx->pc = 0x1BE210u;
label_1be210:
    // 0x1be210: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1be210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1be214:
    // 0x1be214: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1be218: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE218u;
    {
        const bool branch_taken_0x1be218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE218u;
        // 0x1be21c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be218) {
            ctx->pc = 0x1BE228u;
            goto label_1be228;
        }
    }
    ctx->pc = 0x1BE220u;
    // 0x1be220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE220u;
    {
        const bool branch_taken_0x1be220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE220u;
        // 0x1be224: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be220) {
            ctx->pc = 0x1BE22Cu;
            goto label_1be22c;
        }
    }
    ctx->pc = 0x1BE228u;
label_1be228:
    // 0x1be228: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1be228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1be22c:
    // 0x1be22c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BE22Cu;
    SET_GPR_U32(ctx, 31, 0x1BE234u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BE22Cu, 0x1BE234u)) {
        return;
    }
    ctx->pc = 0x1BE234u;
label_1be234:
    // 0x1be234: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1be234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1be238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1be23c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BE23Cu;
    {
        const bool branch_taken_0x1be23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE23Cu;
        // 0x1be240: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be23c) {
            ctx->pc = 0x1BE1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be1e0;
        }
    }
    ctx->pc = 0x1BE244u;
label_1be244:
    // 0x1be244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be248: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE248u;
        // 0x1be24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE250u;
}
