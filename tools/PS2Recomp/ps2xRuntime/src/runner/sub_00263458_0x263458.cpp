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

// Function: sub_00263458
// Address: 0x263458 - 0x263528
void sub_00263458_0x263458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263458_0x263458");
#endif

    switch (ctx->pc) {
        case 0x2634c0u: goto label_2634c0;
        case 0x26350cu: goto label_26350c;
        default: break;
    }

    ctx->pc = 0x263458u;

    // 0x263458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26345c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26345cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263464: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x263464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x263468: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x263468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x26346c: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x26346Cu;
    {
        const bool branch_taken_0x26346c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x263470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26346Cu;
        // 0x263470: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26346c) {
            ctx->pc = 0x263518u;
            goto label_263518;
        }
    }
    ctx->pc = 0x263474u;
    // 0x263474: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x263474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x263478: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x263478u;
    {
        const bool branch_taken_0x263478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263478u;
        // 0x26347c: 0x8f829148  lw          $v0, -0x6EB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263478) {
            ctx->pc = 0x2634D4u;
            goto label_2634d4;
        }
    }
    ctx->pc = 0x263480u;
    // 0x263480: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x263480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x263484: 0x8c4241b0  lw          $v0, 0x41B0($v0)
    ctx->pc = 0x263484u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41B0u));
    // 0x263488: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x263488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26348c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x26348cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263490: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x263490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263494: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x263494u;
    {
        const bool branch_taken_0x263494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263494) {
            ctx->pc = 0x263498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263494u;
            // 0x263498: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2634B4u;
            goto label_2634b4;
        }
    }
    ctx->pc = 0x26349Cu;
    // 0x26349c: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x26349cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2634a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2634a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2634a4: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2634A4u;
    {
        const bool branch_taken_0x2634a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2634a4) {
            ctx->pc = 0x2634A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2634A4u;
            // 0x2634a8: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2634B4u;
            goto label_2634b4;
        }
    }
    ctx->pc = 0x2634ACu;
    // 0x2634ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2634ACu;
    {
        const bool branch_taken_0x2634ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634ACu;
        // 0x2634b0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634ac) {
            ctx->pc = 0x2634C0u;
            goto label_2634c0;
        }
    }
    ctx->pc = 0x2634B4u;
label_2634b4:
    // 0x2634b4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2634b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2634b8: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x2634B8u;
    SET_GPR_U32(ctx, 31, 0x2634C0u);
    ctx->pc = 0x2634BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2634B8u;
    // 0x2634bc: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x2634B8u, 0x2634C0u)) {
        return;
    }
    ctx->pc = 0x2634C0u;
label_2634c0:
    // 0x2634c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2634c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2634c4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2634C4u;
    {
        const bool branch_taken_0x2634c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2634C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634C4u;
        // 0x2634c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634c4) {
            ctx->pc = 0x26351Cu;
            goto label_26351c;
        }
    }
    ctx->pc = 0x2634CCu;
    // 0x2634cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2634CCu;
    {
        const bool branch_taken_0x2634cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634CCu;
        // 0x2634d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634cc) {
            ctx->pc = 0x26351Cu;
            goto label_26351c;
        }
    }
    ctx->pc = 0x2634D4u;
label_2634d4:
    // 0x2634d4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2634d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2634d8: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x2634d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2634dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2634dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2634e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2634E0u;
    {
        const bool branch_taken_0x2634e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2634e0) {
            ctx->pc = 0x2634E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2634E0u;
            // 0x2634e4: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263500u;
            goto label_263500;
        }
    }
    ctx->pc = 0x2634E8u;
    // 0x2634e8: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x2634e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2634ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2634ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2634f0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2634F0u;
    {
        const bool branch_taken_0x2634f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2634f0) {
            ctx->pc = 0x2634F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2634F0u;
            // 0x2634f4: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263500u;
            goto label_263500;
        }
    }
    ctx->pc = 0x2634F8u;
    // 0x2634f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2634F8u;
    {
        const bool branch_taken_0x2634f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634F8u;
        // 0x2634fc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634f8) {
            ctx->pc = 0x26350Cu;
            goto label_26350c;
        }
    }
    ctx->pc = 0x263500u;
label_263500:
    // 0x263500: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x263500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x263504: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x263504u;
    SET_GPR_U32(ctx, 31, 0x26350Cu);
    ctx->pc = 0x263508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263504u;
    // 0x263508: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x263504u, 0x26350Cu)) {
        return;
    }
    ctx->pc = 0x26350Cu;
label_26350c:
    // 0x26350c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263510: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x263510u;
    {
        const bool branch_taken_0x263510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263510u;
        // 0x263514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263510) {
            ctx->pc = 0x26351Cu;
            goto label_26351c;
        }
    }
    ctx->pc = 0x263518u;
label_263518:
    // 0x263518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26351c:
    // 0x26351c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26351cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263520: 0x3e00008  jr          $ra
    ctx->pc = 0x263520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263520u;
        // 0x263524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263528u;
}
