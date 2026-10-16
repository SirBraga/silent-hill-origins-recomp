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

// Function: sub_00303370
// Address: 0x303370 - 0x3033e8
void sub_00303370_0x303370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303370_0x303370");
#endif

    switch (ctx->pc) {
        case 0x3033c4u: goto label_3033c4;
        case 0x3033d0u: goto label_3033d0;
        default: break;
    }

    ctx->pc = 0x303370u;

    // 0x303370: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x303370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x303374: 0x8f858ce0  lw          $a1, -0x7320($gp)
    ctx->pc = 0x303374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937824)));
    // 0x303378: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x303378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x30337c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x30337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x303380: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x303380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x303384: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x303384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x303388: 0x8c633d54  lw          $v1, 0x3D54($v1)
    ctx->pc = 0x303388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3D54u));
    // 0x30338c: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x30338cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x303390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x303390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x303394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x303394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x303398: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x303398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30339c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30339Cu;
    {
        const bool branch_taken_0x30339c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3033A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30339Cu;
        // 0x3033a0: 0xaf828ce0  sw          $v0, -0x7320($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30339c) {
            ctx->pc = 0x3033D8u;
            goto label_3033d8;
        }
    }
    ctx->pc = 0x3033A4u;
    // 0x3033a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3033a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3033a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3033a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3033ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3033acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3033b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3033b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3033b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3033b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3033b8: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x3033b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    // 0x3033bc: 0xc092848  jal         func_24A120
    ctx->pc = 0x3033BCu;
    SET_GPR_U32(ctx, 31, 0x3033C4u);
    ctx->pc = 0x3033C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033BCu;
    // 0x3033c0: 0xaf828ce0  sw          $v0, -0x7320($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937824), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x3033BCu, 0x3033C4u)) {
        return;
    }
    ctx->pc = 0x3033C4u;
label_3033c4:
    // 0x3033c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3033c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3033c8: 0xc09281a  jal         func_24A068
    ctx->pc = 0x3033C8u;
    SET_GPR_U32(ctx, 31, 0x3033D0u);
    ctx->pc = 0x3033CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033C8u;
    // 0x3033cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x3033C8u, 0x3033D0u)) {
        return;
    }
    ctx->pc = 0x3033D0u;
label_3033d0:
    // 0x3033d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3033d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3033d4: 0x0  nop
    ctx->pc = 0x3033d4u;
    // NOP
label_3033d8:
    // 0x3033d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3033d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3033dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3033DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3033E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033DCu;
        // 0x3033e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3033DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3033E4u;
    // 0x3033e4: 0x0  nop
    ctx->pc = 0x3033e4u;
    // NOP
    ctx->pc = 0x3033e8u;
}
