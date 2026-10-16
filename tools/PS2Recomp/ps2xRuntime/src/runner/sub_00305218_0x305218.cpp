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

// Function: sub_00305218
// Address: 0x305218 - 0x3052e0
void sub_00305218_0x305218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305218_0x305218");
#endif

    switch (ctx->pc) {
        case 0x305228u: goto label_305228;
        case 0x305250u: goto label_305250;
        case 0x305280u: goto label_305280;
        case 0x3052b0u: goto label_3052b0;
        default: break;
    }

    ctx->pc = 0x305218u;

    // 0x305218: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x305218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x30521c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30521Cu;
    {
        const bool branch_taken_0x30521c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30521Cu;
        // 0x305220: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30521c) {
            ctx->pc = 0x305240u;
            goto label_305240;
        }
    }
    ctx->pc = 0x305224u;
    // 0x305224: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x305224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_305228:
    // 0x305228: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x305228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x30522c: 0x0  nop
    ctx->pc = 0x30522cu;
    // NOP
    // 0x305230: 0x0  nop
    ctx->pc = 0x305230u;
    // NOP
    // 0x305234: 0x0  nop
    ctx->pc = 0x305234u;
    // NOP
    // 0x305238: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x305238u;
    {
        const bool branch_taken_0x305238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305238) {
            ctx->pc = 0x30523Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305238u;
            // 0x30523c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305228;
        }
    }
    ctx->pc = 0x305240u;
label_305240:
    // 0x305240: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x305240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x305244: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305244u;
    {
        const bool branch_taken_0x305244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305244) {
            ctx->pc = 0x305268u;
            goto label_305268;
        }
    }
    ctx->pc = 0x30524Cu;
    // 0x30524c: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x30524cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_305250:
    // 0x305250: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x305250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x305254: 0x0  nop
    ctx->pc = 0x305254u;
    // NOP
    // 0x305258: 0x0  nop
    ctx->pc = 0x305258u;
    // NOP
    // 0x30525c: 0x0  nop
    ctx->pc = 0x30525cu;
    // NOP
    // 0x305260: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x305260u;
    {
        const bool branch_taken_0x305260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305260) {
            ctx->pc = 0x305264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305260u;
            // 0x305264: 0x8ce7000c  lw          $a3, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305250;
        }
    }
    ctx->pc = 0x305268u;
label_305268:
    // 0x305268: 0x10a7001a  beq         $a1, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x305268u;
    {
        const bool branch_taken_0x305268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x305268) {
            ctx->pc = 0x3052D4u;
            goto label_3052d4;
        }
    }
    ctx->pc = 0x305270u;
    // 0x305270: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x305270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x305274: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305274u;
    {
        const bool branch_taken_0x305274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305274u;
        // 0x305278: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305274) {
            ctx->pc = 0x305298u;
            goto label_305298;
        }
    }
    ctx->pc = 0x30527Cu;
    // 0x30527c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_305280:
    // 0x305280: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x305280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x305284: 0x0  nop
    ctx->pc = 0x305284u;
    // NOP
    // 0x305288: 0x0  nop
    ctx->pc = 0x305288u;
    // NOP
    // 0x30528c: 0x0  nop
    ctx->pc = 0x30528cu;
    // NOP
    // 0x305290: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x305290u;
    {
        const bool branch_taken_0x305290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305290) {
            ctx->pc = 0x305294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305290u;
            // 0x305294: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305280;
        }
    }
    ctx->pc = 0x305298u;
label_305298:
    // 0x305298: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x305298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x30529c: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x30529cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x3052a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3052a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3052a4: 0x5047000a  beql        $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3052A4u;
    {
        const bool branch_taken_0x3052a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x3052a4) {
            ctx->pc = 0x3052A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3052A4u;
            // 0x3052a8: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3052D0u;
            goto label_3052d0;
        }
    }
    ctx->pc = 0x3052ACu;
    // 0x3052ac: 0x0  nop
    ctx->pc = 0x3052acu;
    // NOP
label_3052b0:
    // 0x3052b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3052b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3052b4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3052b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3052b8: 0x0  nop
    ctx->pc = 0x3052b8u;
    // NOP
    // 0x3052bc: 0x0  nop
    ctx->pc = 0x3052bcu;
    // NOP
    // 0x3052c0: 0x1467fffb  bne         $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3052C0u;
    {
        const bool branch_taken_0x3052c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x3052C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052C0u;
        // 0x3052c4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052c0) {
            ctx->pc = 0x3052B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3052b0;
        }
    }
    ctx->pc = 0x3052C8u;
    // 0x3052c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3052c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3052cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3052ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3052d0:
    // 0x3052d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3052d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3052d4:
    // 0x3052d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3052D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3052D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3052DCu;
    // 0x3052dc: 0x0  nop
    ctx->pc = 0x3052dcu;
    // NOP
    ctx->pc = 0x3052e0u;
}
