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

// Function: sub_002813B0
// Address: 0x2813b0 - 0x281420
void sub_002813B0_0x2813b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002813B0_0x2813b0");
#endif

    switch (ctx->pc) {
        case 0x2813b0u: goto label_2813b0;
        case 0x2813b4u: goto label_2813b4;
        case 0x2813b8u: goto label_2813b8;
        case 0x2813bcu: goto label_2813bc;
        case 0x2813c0u: goto label_2813c0;
        case 0x2813c4u: goto label_2813c4;
        case 0x2813c8u: goto label_2813c8;
        case 0x2813ccu: goto label_2813cc;
        case 0x2813d0u: goto label_2813d0;
        case 0x2813d4u: goto label_2813d4;
        case 0x2813d8u: goto label_2813d8;
        case 0x2813dcu: goto label_2813dc;
        case 0x2813e0u: goto label_2813e0;
        case 0x2813e4u: goto label_2813e4;
        case 0x2813e8u: goto label_2813e8;
        case 0x2813ecu: goto label_2813ec;
        case 0x2813f0u: goto label_2813f0;
        case 0x2813f4u: goto label_2813f4;
        case 0x2813f8u: goto label_2813f8;
        case 0x2813fcu: goto label_2813fc;
        case 0x281400u: goto label_281400;
        case 0x281404u: goto label_281404;
        case 0x281408u: goto label_281408;
        case 0x28140cu: goto label_28140c;
        case 0x281410u: goto label_281410;
        case 0x281414u: goto label_281414;
        case 0x281418u: goto label_281418;
        case 0x28141cu: goto label_28141c;
        default: break;
    }

    ctx->pc = 0x2813b0u;

label_2813b0:
    // 0x2813b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2813b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2813b4:
    // 0x2813b4: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x2813b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_2813b8:
    // 0x2813b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2813b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2813bc:
    // 0x2813bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2813bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2813c0:
    // 0x2813c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2813c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2813c4:
    // 0x2813c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2813c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2813c8:
    // 0x2813c8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2813c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2813cc:
    // 0x2813cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2813ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2813d0:
    // 0x2813d0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2813d4:
    if (ctx->pc == 0x2813D4u) {
        ctx->pc = 0x2813D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813D0u;
        // 0x2813d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2813D8u;
        goto label_2813d8;
    }
    ctx->pc = 0x2813D0u;
    {
        const bool branch_taken_0x2813d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2813D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813D0u;
        // 0x2813d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813d0) {
            ctx->pc = 0x281408u;
            goto label_281408;
        }
    }
    ctx->pc = 0x2813D8u;
label_2813d8:
    // 0x2813d8: 0xc09fd56  jal         func_27F558
label_2813dc:
    if (ctx->pc == 0x2813DCu) {
        ctx->pc = 0x2813DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813D8u;
        // 0x2813dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2813E0u;
        goto label_2813e0;
    }
    ctx->pc = 0x2813D8u;
    SET_GPR_U32(ctx, 31, 0x2813E0u);
    ctx->pc = 0x2813DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2813D8u;
    // 0x2813dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F558u, 0x2813D8u, 0x2813E0u)) {
        return;
    }
    ctx->pc = 0x2813E0u;
label_2813e0:
    // 0x2813e0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2813e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2813e4:
    // 0x2813e4: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x2813e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
label_2813e8:
    // 0x2813e8: 0x8c6210e4  lw          $v0, 0x10E4($v1)
    ctx->pc = 0x2813e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4324)));
label_2813ec:
    // 0x2813ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2813ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2813f0:
    // 0x2813f0: 0x40f809  jalr        $v0
label_2813f4:
    if (ctx->pc == 0x2813F4u) {
        ctx->pc = 0x2813F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813F0u;
        // 0x2813f4: 0x8cc4e698  lw          $a0, -0x1968($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2813F8u;
        goto label_2813f8;
    }
    ctx->pc = 0x2813F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2813F8u);
        ctx->pc = 0x2813F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813F0u;
        // 0x2813f4: 0x8cc4e698  lw          $a0, -0x1968($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960792)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2813F0u, 0x2813F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2813F8u;
label_2813f8:
    // 0x2813f8: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x2813f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_2813fc:
    // 0x2813fc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2813fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_281400:
    // 0x281400: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x281400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_281404:
    // 0x281404: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x281404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281408:
    // 0x281408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x281408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28140c:
    // 0x28140c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28140cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281410:
    // 0x281410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_281414:
    // 0x281414: 0x3e00008  jr          $ra
label_281418:
    if (ctx->pc == 0x281418u) {
        ctx->pc = 0x281418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281414u;
        // 0x281418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28141Cu;
        goto label_28141c;
    }
    ctx->pc = 0x281414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281414u;
        // 0x281418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28141Cu;
label_28141c:
    // 0x28141c: 0x0  nop
    ctx->pc = 0x28141cu;
    // NOP
    ctx->pc = 0x281420u;
}
