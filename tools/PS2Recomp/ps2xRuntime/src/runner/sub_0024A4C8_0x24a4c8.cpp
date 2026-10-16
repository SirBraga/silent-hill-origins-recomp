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

// Function: sub_0024A4C8
// Address: 0x24a4c8 - 0x24a530
void sub_0024A4C8_0x24a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A4C8_0x24a4c8");
#endif

    switch (ctx->pc) {
        case 0x24a4c8u: goto label_24a4c8;
        case 0x24a4ccu: goto label_24a4cc;
        case 0x24a4d0u: goto label_24a4d0;
        case 0x24a4d4u: goto label_24a4d4;
        case 0x24a4d8u: goto label_24a4d8;
        case 0x24a4dcu: goto label_24a4dc;
        case 0x24a4e0u: goto label_24a4e0;
        case 0x24a4e4u: goto label_24a4e4;
        case 0x24a4e8u: goto label_24a4e8;
        case 0x24a4ecu: goto label_24a4ec;
        case 0x24a4f0u: goto label_24a4f0;
        case 0x24a4f4u: goto label_24a4f4;
        case 0x24a4f8u: goto label_24a4f8;
        case 0x24a4fcu: goto label_24a4fc;
        case 0x24a500u: goto label_24a500;
        case 0x24a504u: goto label_24a504;
        case 0x24a508u: goto label_24a508;
        case 0x24a50cu: goto label_24a50c;
        case 0x24a510u: goto label_24a510;
        case 0x24a514u: goto label_24a514;
        case 0x24a518u: goto label_24a518;
        case 0x24a51cu: goto label_24a51c;
        case 0x24a520u: goto label_24a520;
        case 0x24a524u: goto label_24a524;
        case 0x24a528u: goto label_24a528;
        case 0x24a52cu: goto label_24a52c;
        default: break;
    }

    ctx->pc = 0x24a4c8u;

label_24a4c8:
    // 0x24a4c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_24a4cc:
    // 0x24a4cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_24a4d0:
    // 0x24a4d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24a4d4:
    // 0x24a4d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a4d8:
    // 0x24a4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24a4dc:
    // 0x24a4dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24a4e0:
    // 0x24a4e0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_24a4e4:
    if (ctx->pc == 0x24A4E4u) {
        ctx->pc = 0x24A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4E0u;
        // 0x24a4e4: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A4E8u;
        goto label_24a4e8;
    }
    ctx->pc = 0x24A4E0u;
    {
        const bool branch_taken_0x24a4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4E0u;
        // 0x24a4e4: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4e0) {
            ctx->pc = 0x24A508u;
            goto label_24a508;
        }
    }
    ctx->pc = 0x24A4E8u;
label_24a4e8:
    // 0x24a4e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24a4ec:
    // 0x24a4ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24a4f0:
    if (ctx->pc == 0x24A4F0u) {
        ctx->pc = 0x24A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4ECu;
        // 0x24a4f0: 0x26220fc8  addiu       $v0, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A4F4u;
        goto label_24a4f4;
    }
    ctx->pc = 0x24A4ECu;
    {
        const bool branch_taken_0x24a4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4ECu;
        // 0x24a4f0: 0x26220fc8  addiu       $v0, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4ec) {
            ctx->pc = 0x24A508u;
            goto label_24a508;
        }
    }
    ctx->pc = 0x24A4F4u;
label_24a4f4:
    // 0x24a4f4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x24a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_24a4f8:
    // 0x24a4f8: 0x60f809  jalr        $v1
label_24a4fc:
    if (ctx->pc == 0x24A4FCu) {
        ctx->pc = 0x24A500u;
        goto label_24a500;
    }
    ctx->pc = 0x24A4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24A500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A4F8u, 0x24A500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A500u;
label_24a500:
    // 0x24a500: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24a500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_24a504:
    // 0x24a504: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x24a504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_24a508:
    // 0x24a508: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x24a508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_24a50c:
    // 0x24a50c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x24a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_24a510:
    // 0x24a510: 0x40f809  jalr        $v0
label_24a514:
    if (ctx->pc == 0x24A514u) {
        ctx->pc = 0x24A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A510u;
        // 0x24a514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A518u;
        goto label_24a518;
    }
    ctx->pc = 0x24A510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A518u);
        ctx->pc = 0x24A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A510u;
        // 0x24a514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A510u, 0x24A518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A518u;
label_24a518:
    // 0x24a518: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24a518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24a51c:
    // 0x24a51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a520:
    // 0x24a520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24a520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24a524:
    // 0x24a524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a528:
    // 0x24a528: 0x3e00008  jr          $ra
label_24a52c:
    if (ctx->pc == 0x24A52Cu) {
        ctx->pc = 0x24A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A528u;
        // 0x24a52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A530u;
        goto label_fallthrough_0x24a528;
    }
    ctx->pc = 0x24A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A528u;
        // 0x24a52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24a528:
    ctx->pc = 0x24A530u;
}
