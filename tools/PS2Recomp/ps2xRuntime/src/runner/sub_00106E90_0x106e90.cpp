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

// Function: sub_00106E90
// Address: 0x106e90 - 0x106ef8
void sub_00106E90_0x106e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106E90_0x106e90");
#endif

    switch (ctx->pc) {
        case 0x106e90u: goto label_106e90;
        case 0x106e94u: goto label_106e94;
        case 0x106e98u: goto label_106e98;
        case 0x106e9cu: goto label_106e9c;
        case 0x106ea0u: goto label_106ea0;
        case 0x106ea4u: goto label_106ea4;
        case 0x106ea8u: goto label_106ea8;
        case 0x106eacu: goto label_106eac;
        case 0x106eb0u: goto label_106eb0;
        case 0x106eb4u: goto label_106eb4;
        case 0x106eb8u: goto label_106eb8;
        case 0x106ebcu: goto label_106ebc;
        case 0x106ec0u: goto label_106ec0;
        case 0x106ec4u: goto label_106ec4;
        case 0x106ec8u: goto label_106ec8;
        case 0x106eccu: goto label_106ecc;
        case 0x106ed0u: goto label_106ed0;
        case 0x106ed4u: goto label_106ed4;
        case 0x106ed8u: goto label_106ed8;
        case 0x106edcu: goto label_106edc;
        case 0x106ee0u: goto label_106ee0;
        case 0x106ee4u: goto label_106ee4;
        case 0x106ee8u: goto label_106ee8;
        case 0x106eecu: goto label_106eec;
        case 0x106ef0u: goto label_106ef0;
        case 0x106ef4u: goto label_106ef4;
        default: break;
    }

    ctx->pc = 0x106e90u;

label_106e90:
    // 0x106e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_106e94:
    // 0x106e94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_106e98:
    // 0x106e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106e9c:
    // 0x106e9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x106e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_106ea0:
    // 0x106ea0: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x106ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_106ea4:
    // 0x106ea4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_106ea8:
    if (ctx->pc == 0x106EA8u) {
        ctx->pc = 0x106EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EA4u;
        // 0x106ea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EACu;
        goto label_106eac;
    }
    ctx->pc = 0x106EA4u;
    {
        const bool branch_taken_0x106ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EA4u;
        // 0x106ea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ea4) {
            ctx->pc = 0x106ED0u;
            goto label_106ed0;
        }
    }
    ctx->pc = 0x106EACu;
label_106eac:
    // 0x106eac: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x106eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_106eb0:
    // 0x106eb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x106eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106eb4:
    // 0x106eb4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x106eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_106eb8:
    // 0x106eb8: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x106eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_106ebc:
    // 0x106ebc: 0x60f809  jalr        $v1
label_106ec0:
    if (ctx->pc == 0x106EC0u) {
        ctx->pc = 0x106EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EBCu;
        // 0x106ec0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EC4u;
        goto label_106ec4;
    }
    ctx->pc = 0x106EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x106EC4u);
        ctx->pc = 0x106EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EBCu;
        // 0x106ec0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EBCu, 0x106EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106EC4u;
label_106ec4:
    // 0x106ec4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x106ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_106ec8:
    // 0x106ec8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_106ecc:
    if (ctx->pc == 0x106ECCu) {
        ctx->pc = 0x106ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EC8u;
        // 0x106ecc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106ED0u;
        goto label_106ed0;
    }
    ctx->pc = 0x106EC8u;
    {
        const bool branch_taken_0x106ec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x106ec8) {
            ctx->pc = 0x106ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106EC8u;
            // 0x106ecc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106eb0;
        }
    }
    ctx->pc = 0x106ED0u;
label_106ed0:
    // 0x106ed0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x106ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_106ed4:
    // 0x106ed4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x106ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_106ed8:
    // 0x106ed8: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x106ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_106edc:
    // 0x106edc: 0x60f809  jalr        $v1
label_106ee0:
    if (ctx->pc == 0x106EE0u) {
        ctx->pc = 0x106EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EDCu;
        // 0x106ee0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EE4u;
        goto label_106ee4;
    }
    ctx->pc = 0x106EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x106EE4u);
        ctx->pc = 0x106EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EDCu;
        // 0x106ee0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EDCu, 0x106EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106EE4u;
label_106ee4:
    // 0x106ee4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x106ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106ee8:
    // 0x106ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_106eec:
    // 0x106eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106ef0:
    // 0x106ef0: 0x3e00008  jr          $ra
label_106ef4:
    if (ctx->pc == 0x106EF4u) {
        ctx->pc = 0x106EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EF0u;
        // 0x106ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EF8u;
        goto label_fallthrough_0x106ef0;
    }
    ctx->pc = 0x106EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EF0u;
        // 0x106ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106ef0:
    ctx->pc = 0x106EF8u;
}
