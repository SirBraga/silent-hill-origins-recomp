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

// Function: sub_00299680
// Address: 0x299680 - 0x2996d8
void sub_00299680_0x299680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299680_0x299680");
#endif

    switch (ctx->pc) {
        case 0x299680u: goto label_299680;
        case 0x299684u: goto label_299684;
        case 0x299688u: goto label_299688;
        case 0x29968cu: goto label_29968c;
        case 0x299690u: goto label_299690;
        case 0x299694u: goto label_299694;
        case 0x299698u: goto label_299698;
        case 0x29969cu: goto label_29969c;
        case 0x2996a0u: goto label_2996a0;
        case 0x2996a4u: goto label_2996a4;
        case 0x2996a8u: goto label_2996a8;
        case 0x2996acu: goto label_2996ac;
        case 0x2996b0u: goto label_2996b0;
        case 0x2996b4u: goto label_2996b4;
        case 0x2996b8u: goto label_2996b8;
        case 0x2996bcu: goto label_2996bc;
        case 0x2996c0u: goto label_2996c0;
        case 0x2996c4u: goto label_2996c4;
        case 0x2996c8u: goto label_2996c8;
        case 0x2996ccu: goto label_2996cc;
        case 0x2996d0u: goto label_2996d0;
        case 0x2996d4u: goto label_2996d4;
        default: break;
    }

    ctx->pc = 0x299680u;

label_299680:
    // 0x299680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_299684:
    // 0x299684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_299688:
    // 0x299688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29968c:
    // 0x29968c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29968cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299690:
    // 0x299690: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x299690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_299694:
    // 0x299694: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x299694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_299698:
    // 0x299698: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x299698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_29969c:
    // 0x29969c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x29969cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_2996a0:
    // 0x2996a0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2996a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2996a4:
    // 0x2996a4: 0x40f809  jalr        $v0
label_2996a8:
    if (ctx->pc == 0x2996A8u) {
        ctx->pc = 0x2996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996A4u;
        // 0x2996a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2996ACu;
        goto label_2996ac;
    }
    ctx->pc = 0x2996A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2996ACu);
        ctx->pc = 0x2996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996A4u;
        // 0x2996a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2996A4u, 0x2996ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2996ACu;
label_2996ac:
    // 0x2996ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2996b0:
    if (ctx->pc == 0x2996B0u) {
        ctx->pc = 0x2996B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996ACu;
        // 0x2996b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2996B4u;
        goto label_2996b4;
    }
    ctx->pc = 0x2996ACu;
    {
        const bool branch_taken_0x2996ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2996B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996ACu;
        // 0x2996b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2996ac) {
            ctx->pc = 0x2996C8u;
            goto label_2996c8;
        }
    }
    ctx->pc = 0x2996B4u;
label_2996b4:
    // 0x2996b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2996b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2996b8:
    // 0x2996b8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x2996b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_2996bc:
    // 0x2996bc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2996bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_2996c0:
    // 0x2996c0: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x2996c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_2996c4:
    // 0x2996c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2996c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2996c8:
    // 0x2996c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2996c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2996cc:
    // 0x2996cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2996ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2996d0:
    // 0x2996d0: 0x3e00008  jr          $ra
label_2996d4:
    if (ctx->pc == 0x2996D4u) {
        ctx->pc = 0x2996D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996D0u;
        // 0x2996d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2996D8u;
        goto label_fallthrough_0x2996d0;
    }
    ctx->pc = 0x2996D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2996D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996D0u;
        // 0x2996d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2996D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2996d0:
    ctx->pc = 0x2996D8u;
}
