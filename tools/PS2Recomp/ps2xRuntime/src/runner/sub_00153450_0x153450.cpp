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

// Function: sub_00153450
// Address: 0x153450 - 0x1534f0
void sub_00153450_0x153450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153450_0x153450");
#endif

    switch (ctx->pc) {
        case 0x1534acu: goto label_1534ac;
        case 0x1534e4u: goto label_1534e4;
        default: break;
    }

    ctx->pc = 0x153450u;

    // 0x153450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153458: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x153458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x15345c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15345Cu;
    {
        const bool branch_taken_0x15345c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15345Cu;
        // 0x153460: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15345c) {
            ctx->pc = 0x1534E8u;
            goto label_1534e8;
        }
    }
    ctx->pc = 0x153464u;
    // 0x153464: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x153464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x153468: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153468u;
    {
        const bool branch_taken_0x153468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153468u;
        // 0x15346c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153468) {
            ctx->pc = 0x153480u;
            goto label_153480;
        }
    }
    ctx->pc = 0x153470u;
    // 0x153470: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x153474: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x153474u;
    {
        const bool branch_taken_0x153474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153474) {
            ctx->pc = 0x153478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153474u;
            // 0x153478: 0xac80009c  sw          $zero, 0x9C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1534B4u;
            goto label_1534b4;
        }
    }
    ctx->pc = 0x15347Cu;
    // 0x15347c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x15347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_153480:
    // 0x153480: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x153480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x153484: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x153484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17328)));
    // 0x153488: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x153488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x15348c: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x15348Cu;
    {
        const bool branch_taken_0x15348c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x153490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15348Cu;
        // 0x153490: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15348c) {
            ctx->pc = 0x1534E8u;
            goto label_1534e8;
        }
    }
    ctx->pc = 0x153494u;
    // 0x153494: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x153494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153498: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x153498u;
    {
        const bool branch_taken_0x153498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153498u;
        // 0x15349c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153498) {
            ctx->pc = 0x1534E8u;
            goto label_1534e8;
        }
    }
    ctx->pc = 0x1534A0u;
    // 0x1534a0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1534a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1534a4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1534A4u;
    SET_GPR_U32(ctx, 31, 0x1534ACu);
    ctx->pc = 0x1534A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534A4u;
    // 0x1534a8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1534A4u, 0x1534ACu)) {
        return;
    }
    ctx->pc = 0x1534ACu;
label_1534ac:
    // 0x1534ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1534ACu;
    {
        const bool branch_taken_0x1534ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534ACu;
        // 0x1534b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534ac) {
            ctx->pc = 0x1534E8u;
            goto label_1534e8;
        }
    }
    ctx->pc = 0x1534B4u;
label_1534b4:
    // 0x1534b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1534b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1534b8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1534b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1534bc: 0x8c4543a8  lw          $a1, 0x43A8($v0)
    ctx->pc = 0x1534bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43A8u));
    // 0x1534c0: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1534c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1534c4: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1534C4u;
    {
        const bool branch_taken_0x1534c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1534C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534C4u;
        // 0x1534c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534c4) {
            ctx->pc = 0x1534E8u;
            goto label_1534e8;
        }
    }
    ctx->pc = 0x1534CCu;
    // 0x1534cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1534ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1534d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1534D0u;
    {
        const bool branch_taken_0x1534d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534D0u;
        // 0x1534d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534d0) {
            ctx->pc = 0x1534E8u;
            goto label_1534e8;
        }
    }
    ctx->pc = 0x1534D8u;
    // 0x1534d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1534d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1534dc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1534DCu;
    SET_GPR_U32(ctx, 31, 0x1534E4u);
    ctx->pc = 0x1534E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534DCu;
    // 0x1534e0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1534DCu, 0x1534E4u)) {
        return;
    }
    ctx->pc = 0x1534E4u;
label_1534e4:
    // 0x1534e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1534e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1534e8:
    // 0x1534e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1534E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1534ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534E8u;
        // 0x1534ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1534E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1534F0u;
}
