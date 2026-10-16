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

// Function: sub_001DE2F8
// Address: 0x1de2f8 - 0x1de368
void sub_001DE2F8_0x1de2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE2F8_0x1de2f8");
#endif

    switch (ctx->pc) {
        case 0x1de320u: goto label_1de320;
        case 0x1de33cu: goto label_1de33c;
        case 0x1de350u: goto label_1de350;
        default: break;
    }

    ctx->pc = 0x1de2f8u;

    // 0x1de2f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de2fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de30c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DE30Cu;
    {
        const bool branch_taken_0x1de30c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE30Cu;
        // 0x1de310: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de30c) {
            ctx->pc = 0x1DE350u;
            goto label_1de350;
        }
    }
    ctx->pc = 0x1DE314u;
    // 0x1de314: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1de314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1de318: 0xc092858  jal         func_24A160
    ctx->pc = 0x1DE318u;
    SET_GPR_U32(ctx, 31, 0x1DE320u);
    ctx->pc = 0x1DE31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE318u;
    // 0x1de31c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x1DE318u, 0x1DE320u)) {
        return;
    }
    ctx->pc = 0x1DE320u;
label_1de320:
    // 0x1de320: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de324: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DE324u;
    {
        const bool branch_taken_0x1de324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE324u;
        // 0x1de328: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de324) {
            ctx->pc = 0x1DE350u;
            goto label_1de350;
        }
    }
    ctx->pc = 0x1DE32Cu;
    // 0x1de32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de330: 0x24a5e5c8  addiu       $a1, $a1, -0x1A38
    ctx->pc = 0x1de330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960584));
    // 0x1de334: 0xc0972d0  jal         func_25CB40
    ctx->pc = 0x1DE334u;
    SET_GPR_U32(ctx, 31, 0x1DE33Cu);
    ctx->pc = 0x1DE338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE334u;
    // 0x1de338: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CB40u, 0x1DE334u, 0x1DE33Cu)) {
        return;
    }
    ctx->pc = 0x1DE33Cu;
label_1de33c:
    // 0x1de33c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1de33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1de340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de344: 0x24a5e690  addiu       $a1, $a1, -0x1970
    ctx->pc = 0x1de344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960784));
    // 0x1de348: 0xc0972ae  jal         func_25CAB8
    ctx->pc = 0x1DE348u;
    SET_GPR_U32(ctx, 31, 0x1DE350u);
    ctx->pc = 0x1DE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE348u;
    // 0x1de34c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CAB8u, 0x1DE348u, 0x1DE350u)) {
        return;
    }
    ctx->pc = 0x1DE350u;
label_1de350:
    // 0x1de350: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1de350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de354: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de360: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE360u;
        // 0x1de364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE368u;
}
