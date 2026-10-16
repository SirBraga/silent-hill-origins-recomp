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

// Function: sub_001C8288
// Address: 0x1c8288 - 0x1c8328
void sub_001C8288_0x1c8288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8288_0x1c8288");
#endif

    switch (ctx->pc) {
        case 0x1c8288u: goto label_1c8288;
        case 0x1c828cu: goto label_1c828c;
        case 0x1c8290u: goto label_1c8290;
        case 0x1c8294u: goto label_1c8294;
        case 0x1c8298u: goto label_1c8298;
        case 0x1c829cu: goto label_1c829c;
        case 0x1c82a0u: goto label_1c82a0;
        case 0x1c82a4u: goto label_1c82a4;
        case 0x1c82a8u: goto label_1c82a8;
        case 0x1c82acu: goto label_1c82ac;
        case 0x1c82b0u: goto label_1c82b0;
        case 0x1c82b4u: goto label_1c82b4;
        case 0x1c82b8u: goto label_1c82b8;
        case 0x1c82bcu: goto label_1c82bc;
        case 0x1c82c0u: goto label_1c82c0;
        case 0x1c82c4u: goto label_1c82c4;
        case 0x1c82c8u: goto label_1c82c8;
        case 0x1c82ccu: goto label_1c82cc;
        case 0x1c82d0u: goto label_1c82d0;
        case 0x1c82d4u: goto label_1c82d4;
        case 0x1c82d8u: goto label_1c82d8;
        case 0x1c82dcu: goto label_1c82dc;
        case 0x1c82e0u: goto label_1c82e0;
        case 0x1c82e4u: goto label_1c82e4;
        case 0x1c82e8u: goto label_1c82e8;
        case 0x1c82ecu: goto label_1c82ec;
        case 0x1c82f0u: goto label_1c82f0;
        case 0x1c82f4u: goto label_1c82f4;
        case 0x1c82f8u: goto label_1c82f8;
        case 0x1c82fcu: goto label_1c82fc;
        case 0x1c8300u: goto label_1c8300;
        case 0x1c8304u: goto label_1c8304;
        case 0x1c8308u: goto label_1c8308;
        case 0x1c830cu: goto label_1c830c;
        case 0x1c8310u: goto label_1c8310;
        case 0x1c8314u: goto label_1c8314;
        case 0x1c8318u: goto label_1c8318;
        case 0x1c831cu: goto label_1c831c;
        case 0x1c8320u: goto label_1c8320;
        case 0x1c8324u: goto label_1c8324;
        default: break;
    }

    ctx->pc = 0x1c8288u;

label_1c8288:
    // 0x1c8288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c828c:
    // 0x1c828c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c8290:
    // 0x1c8290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8294:
    // 0x1c8294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8298:
    // 0x1c8298: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c8298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1c829c:
    // 0x1c829c: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x1c829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1c82a0:
    // 0x1c82a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c82a4:
    if (ctx->pc == 0x1C82A4u) {
        ctx->pc = 0x1C82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82A0u;
        // 0x1c82a4: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C82A8u;
        goto label_1c82a8;
    }
    ctx->pc = 0x1C82A0u;
    {
        const bool branch_taken_0x1c82a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82A0u;
        // 0x1c82a4: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82a0) {
            ctx->pc = 0x1C82C4u;
            goto label_1c82c4;
        }
    }
    ctx->pc = 0x1C82A8u;
label_1c82a8:
    // 0x1c82a8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1c82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1c82ac:
    // 0x1c82ac: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c82acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c82b0:
    // 0x1c82b0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c82b4:
    // 0x1c82b4: 0x60f809  jalr        $v1
label_1c82b8:
    if (ctx->pc == 0x1C82B8u) {
        ctx->pc = 0x1C82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82B4u;
        // 0x1c82b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C82BCu;
        goto label_1c82bc;
    }
    ctx->pc = 0x1C82B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C82BCu);
        ctx->pc = 0x1C82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82B4u;
        // 0x1c82b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82B4u, 0x1C82BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C82BCu;
label_1c82bc:
    // 0x1c82bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c82c0:
    if (ctx->pc == 0x1C82C0u) {
        ctx->pc = 0x1C82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82BCu;
        // 0x1c82c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C82C4u;
        goto label_1c82c4;
    }
    ctx->pc = 0x1C82BCu;
    {
        const bool branch_taken_0x1c82bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82BCu;
        // 0x1c82c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82bc) {
            ctx->pc = 0x1C82DCu;
            goto label_1c82dc;
        }
    }
    ctx->pc = 0x1C82C4u;
label_1c82c4:
    // 0x1c82c4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1c82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1c82c8:
    // 0x1c82c8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1c82cc:
    // 0x1c82cc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1c82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1c82d0:
    // 0x1c82d0: 0x60f809  jalr        $v1
label_1c82d4:
    if (ctx->pc == 0x1C82D4u) {
        ctx->pc = 0x1C82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82D0u;
        // 0x1c82d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C82D8u;
        goto label_1c82d8;
    }
    ctx->pc = 0x1C82D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C82D8u);
        ctx->pc = 0x1C82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82D0u;
        // 0x1c82d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82D0u, 0x1C82D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C82D8u;
label_1c82d8:
    // 0x1c82d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c82d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c82dc:
    // 0x1c82dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c82dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c82e0:
    // 0x1c82e0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c82e4:
    // 0x1c82e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c82e8:
    // 0x1c82e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c82e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c82ec:
    // 0x1c82ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c82f0:
    // 0x1c82f0: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c82f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c82f4:
    // 0x1c82f4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1c82f8:
    if (ctx->pc == 0x1C82F8u) {
        ctx->pc = 0x1C82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82F4u;
        // 0x1c82f8: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C82FCu;
        goto label_1c82fc;
    }
    ctx->pc = 0x1C82F4u;
    {
        const bool branch_taken_0x1c82f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82F4u;
        // 0x1c82f8: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82f4) {
            ctx->pc = 0x1C82E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82e0;
        }
    }
    ctx->pc = 0x1C82FCu;
label_1c82fc:
    // 0x1c82fc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c82fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8300:
    // 0x1c8300: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8304:
    // 0x1c8304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8308:
    // 0x1c8308: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1c8308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
label_1c830c:
    // 0x1c830c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c830cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8310:
    // 0x1c8310: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1c8310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
label_1c8314:
    // 0x1c8314: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c8314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8318:
    // 0x1c8318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c831c:
    // 0x1c831c: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x1c831cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_1c8320:
    // 0x1c8320: 0x3e00008  jr          $ra
label_1c8324:
    if (ctx->pc == 0x1C8324u) {
        ctx->pc = 0x1C8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8320u;
        // 0x1c8324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8328u;
        goto label_fallthrough_0x1c8320;
    }
    ctx->pc = 0x1C8320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8320u;
        // 0x1c8324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c8320:
    ctx->pc = 0x1C8328u;
}
