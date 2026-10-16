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

// Function: sub_002DE2E0
// Address: 0x2de2e0 - 0x2de358
void sub_002DE2E0_0x2de2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE2E0_0x2de2e0");
#endif

    switch (ctx->pc) {
        case 0x2de2e0u: goto label_2de2e0;
        case 0x2de2e4u: goto label_2de2e4;
        case 0x2de2e8u: goto label_2de2e8;
        case 0x2de2ecu: goto label_2de2ec;
        case 0x2de2f0u: goto label_2de2f0;
        case 0x2de2f4u: goto label_2de2f4;
        case 0x2de2f8u: goto label_2de2f8;
        case 0x2de2fcu: goto label_2de2fc;
        case 0x2de300u: goto label_2de300;
        case 0x2de304u: goto label_2de304;
        case 0x2de308u: goto label_2de308;
        case 0x2de30cu: goto label_2de30c;
        case 0x2de310u: goto label_2de310;
        case 0x2de314u: goto label_2de314;
        case 0x2de318u: goto label_2de318;
        case 0x2de31cu: goto label_2de31c;
        case 0x2de320u: goto label_2de320;
        case 0x2de324u: goto label_2de324;
        case 0x2de328u: goto label_2de328;
        case 0x2de32cu: goto label_2de32c;
        case 0x2de330u: goto label_2de330;
        case 0x2de334u: goto label_2de334;
        case 0x2de338u: goto label_2de338;
        case 0x2de33cu: goto label_2de33c;
        case 0x2de340u: goto label_2de340;
        case 0x2de344u: goto label_2de344;
        case 0x2de348u: goto label_2de348;
        case 0x2de34cu: goto label_2de34c;
        case 0x2de350u: goto label_2de350;
        case 0x2de354u: goto label_2de354;
        default: break;
    }

    ctx->pc = 0x2de2e0u;

label_2de2e0:
    // 0x2de2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2de2e4:
    // 0x2de2e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2de2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2de2e8:
    // 0x2de2e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2de2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2de2ec:
    // 0x2de2ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2de2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de2f0:
    // 0x2de2f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2de2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2de2f4:
    // 0x2de2f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2de2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2de2f8:
    // 0x2de2f8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2de2fc:
    if (ctx->pc == 0x2DE2FCu) {
        ctx->pc = 0x2DE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2F8u;
        // 0x2de2fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE300u;
        goto label_2de300;
    }
    ctx->pc = 0x2DE2F8u;
    {
        const bool branch_taken_0x2de2f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2F8u;
        // 0x2de2fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2f8) {
            ctx->pc = 0x2DE330u;
            goto label_2de330;
        }
    }
    ctx->pc = 0x2DE300u;
label_2de300:
    // 0x2de300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de304:
    // 0x2de304: 0x0  nop
    ctx->pc = 0x2de304u;
    // NOP
label_2de308:
    // 0x2de308: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2de308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2de30c:
    // 0x2de30c: 0x40f809  jalr        $v0
label_2de310:
    if (ctx->pc == 0x2DE310u) {
        ctx->pc = 0x2DE314u;
        goto label_2de314;
    }
    ctx->pc = 0x2DE30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE314u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE30Cu, 0x2DE314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE314u;
label_2de314:
    // 0x2de314: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2de318:
    if (ctx->pc == 0x2DE318u) {
        ctx->pc = 0x2DE318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE314u;
        // 0x2de318: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE31Cu;
        goto label_2de31c;
    }
    ctx->pc = 0x2DE314u;
    {
        const bool branch_taken_0x2de314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE314u;
        // 0x2de318: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de314) {
            ctx->pc = 0x2DE324u;
            goto label_2de324;
        }
    }
    ctx->pc = 0x2DE31Cu;
label_2de31c:
    // 0x2de31c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2de320:
    if (ctx->pc == 0x2DE320u) {
        ctx->pc = 0x2DE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE31Cu;
        // 0x2de320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE324u;
        goto label_2de324;
    }
    ctx->pc = 0x2DE31Cu;
    {
        const bool branch_taken_0x2de31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE31Cu;
        // 0x2de320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de31c) {
            ctx->pc = 0x2DE334u;
            goto label_2de334;
        }
    }
    ctx->pc = 0x2DE324u;
label_2de324:
    // 0x2de324: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x2de324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2de328:
    // 0x2de328: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2de32c:
    if (ctx->pc == 0x2DE32Cu) {
        ctx->pc = 0x2DE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE328u;
        // 0x2de32c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE330u;
        goto label_2de330;
    }
    ctx->pc = 0x2DE328u;
    {
        const bool branch_taken_0x2de328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE328u;
        // 0x2de32c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de328) {
            ctx->pc = 0x2DE308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de308;
        }
    }
    ctx->pc = 0x2DE330u;
label_2de330:
    // 0x2de330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de334:
    // 0x2de334: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2de334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2de338:
    // 0x2de338: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2de338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2de33c:
    // 0x2de33c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2de33cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2de340:
    // 0x2de340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de344:
    // 0x2de344: 0x3e00008  jr          $ra
label_2de348:
    if (ctx->pc == 0x2DE348u) {
        ctx->pc = 0x2DE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE344u;
        // 0x2de348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE34Cu;
        goto label_2de34c;
    }
    ctx->pc = 0x2DE344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE344u;
        // 0x2de348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE34Cu;
label_2de34c:
    // 0x2de34c: 0x0  nop
    ctx->pc = 0x2de34cu;
    // NOP
label_2de350:
    // 0x2de350: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2de350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2de354:
    // 0x2de354: 0x0  nop
    ctx->pc = 0x2de354u;
    // NOP
    ctx->pc = 0x2de358u;
}
