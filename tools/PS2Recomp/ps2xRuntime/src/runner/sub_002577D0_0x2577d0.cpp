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

// Function: sub_002577D0
// Address: 0x2577d0 - 0x257830
void sub_002577D0_0x2577d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002577D0_0x2577d0");
#endif

    switch (ctx->pc) {
        case 0x2577d0u: goto label_2577d0;
        case 0x2577d4u: goto label_2577d4;
        case 0x2577d8u: goto label_2577d8;
        case 0x2577dcu: goto label_2577dc;
        case 0x2577e0u: goto label_2577e0;
        case 0x2577e4u: goto label_2577e4;
        case 0x2577e8u: goto label_2577e8;
        case 0x2577ecu: goto label_2577ec;
        case 0x2577f0u: goto label_2577f0;
        case 0x2577f4u: goto label_2577f4;
        case 0x2577f8u: goto label_2577f8;
        case 0x2577fcu: goto label_2577fc;
        case 0x257800u: goto label_257800;
        case 0x257804u: goto label_257804;
        case 0x257808u: goto label_257808;
        case 0x25780cu: goto label_25780c;
        case 0x257810u: goto label_257810;
        case 0x257814u: goto label_257814;
        case 0x257818u: goto label_257818;
        case 0x25781cu: goto label_25781c;
        case 0x257820u: goto label_257820;
        case 0x257824u: goto label_257824;
        case 0x257828u: goto label_257828;
        case 0x25782cu: goto label_25782c;
        default: break;
    }

    ctx->pc = 0x2577d0u;

label_2577d0:
    // 0x2577d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2577d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2577d4:
    // 0x2577d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2577d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2577d8:
    // 0x2577d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2577d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2577dc:
    // 0x2577dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2577dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2577e0:
    // 0x2577e0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2577e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_2577e4:
    // 0x2577e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2577e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2577e8:
    // 0x2577e8: 0xc09397e  jal         func_24E5F8
label_2577ec:
    if (ctx->pc == 0x2577ECu) {
        ctx->pc = 0x2577ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577E8u;
        // 0x2577ec: 0x24841228  addiu       $a0, $a0, 0x1228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2577F0u;
        goto label_2577f0;
    }
    ctx->pc = 0x2577E8u;
    SET_GPR_U32(ctx, 31, 0x2577F0u);
    ctx->pc = 0x2577ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2577E8u;
    // 0x2577ec: 0x24841228  addiu       $a0, $a0, 0x1228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x2577E8u, 0x2577F0u)) {
        return;
    }
    ctx->pc = 0x2577F0u;
label_2577f0:
    // 0x2577f0: 0xc08ad86  jal         func_22B618
label_2577f4:
    if (ctx->pc == 0x2577F4u) {
        ctx->pc = 0x2577F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577F0u;
        // 0x2577f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2577F8u;
        goto label_2577f8;
    }
    ctx->pc = 0x2577F0u;
    SET_GPR_U32(ctx, 31, 0x2577F8u);
    ctx->pc = 0x2577F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2577F0u;
    // 0x2577f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B618u, 0x2577F0u, 0x2577F8u)) {
        return;
    }
    ctx->pc = 0x2577F8u;
label_2577f8:
    // 0x2577f8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2577f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_2577fc:
    // 0x2577fc: 0x8cc63fc0  lw          $a2, 0x3FC0($a2)
    ctx->pc = 0x2577fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16320)));
label_257800:
    // 0x257800: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x257800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_257804:
    // 0x257804: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x257804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_257808:
    // 0x257808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x257808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25780c:
    // 0x25780c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x25780cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_257810:
    // 0x257810: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x257810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_257814:
    // 0x257814: 0x40f809  jalr        $v0
label_257818:
    if (ctx->pc == 0x257818u) {
        ctx->pc = 0x257818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257814u;
        // 0x257818: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25781Cu;
        goto label_25781c;
    }
    ctx->pc = 0x257814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25781Cu);
        ctx->pc = 0x257818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257814u;
        // 0x257818: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257814u, 0x25781Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25781Cu;
label_25781c:
    // 0x25781c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25781cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_257820:
    // 0x257820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257824:
    // 0x257824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_257828:
    // 0x257828: 0x3e00008  jr          $ra
label_25782c:
    if (ctx->pc == 0x25782Cu) {
        ctx->pc = 0x25782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257828u;
        // 0x25782c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257830u;
        goto label_fallthrough_0x257828;
    }
    ctx->pc = 0x257828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257828u;
        // 0x25782c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x257828:
    ctx->pc = 0x257830u;
}
