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

// Function: sub_00203300
// Address: 0x203300 - 0x203360
void sub_00203300_0x203300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203300_0x203300");
#endif

    switch (ctx->pc) {
        case 0x20331cu: goto label_20331c;
        case 0x203330u: goto label_203330;
        default: break;
    }

    ctx->pc = 0x203300u;

    // 0x203300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203304: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x203304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x203308: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x203308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20330c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20330cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203314: 0xc086f8e  jal         func_21BE38
    ctx->pc = 0x203314u;
    SET_GPR_U32(ctx, 31, 0x20331Cu);
    ctx->pc = 0x203318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203314u;
    // 0x203318: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BE38u, 0x203314u, 0x20331Cu)) {
        return;
    }
    ctx->pc = 0x20331Cu;
label_20331c:
    // 0x20331c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20331cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203320: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x203320u;
    {
        const bool branch_taken_0x203320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203320) {
            ctx->pc = 0x203324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203320u;
            // 0x203324: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203350u;
            goto label_203350;
        }
    }
    ctx->pc = 0x203328u;
    // 0x203328: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x203328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20332c: 0x0  nop
    ctx->pc = 0x20332cu;
    // NOP
label_203330:
    // 0x203330: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x203330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x203334: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x203334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x203338: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x203338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20333c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20333cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x203340: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x203340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x203344: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x203344u;
    {
        const bool branch_taken_0x203344 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x203348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203344u;
        // 0x203348: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203344) {
            ctx->pc = 0x203330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203330;
        }
    }
    ctx->pc = 0x20334Cu;
    // 0x20334c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20334cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203350:
    // 0x203350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203354: 0x3e00008  jr          $ra
    ctx->pc = 0x203354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203354u;
        // 0x203358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20335Cu;
    // 0x20335c: 0x0  nop
    ctx->pc = 0x20335cu;
    // NOP
    ctx->pc = 0x203360u;
}
