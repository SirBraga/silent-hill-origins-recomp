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

// Function: sub_00187200
// Address: 0x187200 - 0x187298
void sub_00187200_0x187200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187200_0x187200");
#endif

    switch (ctx->pc) {
        case 0x187228u: goto label_187228;
        case 0x18728cu: goto label_18728c;
        default: break;
    }

    ctx->pc = 0x187200u;

    // 0x187200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187204: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x187204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x187208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18720c: 0x24428750  addiu       $v0, $v0, -0x78B0
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936400));
    // 0x187210: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x187210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x187214: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x187218: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x187218u;
    {
        const bool branch_taken_0x187218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187218u;
        // 0x18721c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187218) {
            ctx->pc = 0x18727Cu;
            goto label_18727c;
        }
    }
    ctx->pc = 0x187220u;
    // 0x187220: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x187220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x187224: 0x0  nop
    ctx->pc = 0x187224u;
    // NOP
label_187228:
    // 0x187228: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x187228u;
    {
        const bool branch_taken_0x187228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187228) {
            ctx->pc = 0x18722Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187228u;
            // 0x18722c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187270u;
            goto label_187270;
        }
    }
    ctx->pc = 0x187230u;
    // 0x187230: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x187230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x187234: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x187234u;
    {
        const bool branch_taken_0x187234 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x187238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187234u;
        // 0x187238: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187234) {
            ctx->pc = 0x187244u;
            goto label_187244;
        }
    }
    ctx->pc = 0x18723Cu;
    // 0x18723c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18723Cu;
    {
        const bool branch_taken_0x18723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18723Cu;
        // 0x187240: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18723c) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187244u;
label_187244:
    // 0x187244: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x187244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_187248:
    // 0x187248: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x187248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18724c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18724Cu;
    {
        const bool branch_taken_0x18724c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x187250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18724Cu;
        // 0x187250: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18724c) {
            ctx->pc = 0x18725Cu;
            goto label_18725c;
        }
    }
    ctx->pc = 0x187254u;
    // 0x187254: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187254u;
    {
        const bool branch_taken_0x187254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187254u;
        // 0x187258: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187254) {
            ctx->pc = 0x187260u;
            goto label_187260;
        }
    }
    ctx->pc = 0x18725Cu;
label_18725c:
    // 0x18725c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x18725cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_187260:
    // 0x187260: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x187260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187264: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x187268: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x187268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x18726c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_187270:
    // 0x187270: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x187270u;
    {
        const bool branch_taken_0x187270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187270) {
            ctx->pc = 0x187274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187270u;
            // 0x187274: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187228;
        }
    }
    ctx->pc = 0x187278u;
    // 0x187278: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x187278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_18727c:
    // 0x18727c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18727Cu;
    {
        const bool branch_taken_0x18727c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18727Cu;
        // 0x187280: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18727c) {
            ctx->pc = 0x187290u;
            goto label_187290;
        }
    }
    ctx->pc = 0x187284u;
    // 0x187284: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x187284u;
    SET_GPR_U32(ctx, 31, 0x18728Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x187284u, 0x18728Cu)) {
        return;
    }
    ctx->pc = 0x18728Cu;
label_18728c:
    // 0x18728c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18728cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187290:
    // 0x187290: 0x3e00008  jr          $ra
    ctx->pc = 0x187290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187290u;
        // 0x187294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187298u;
}
