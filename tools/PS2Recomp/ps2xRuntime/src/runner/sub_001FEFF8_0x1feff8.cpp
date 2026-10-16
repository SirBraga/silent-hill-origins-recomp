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

// Function: sub_001FEFF8
// Address: 0x1feff8 - 0x1ff098
void sub_001FEFF8_0x1feff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEFF8_0x1feff8");
#endif

    switch (ctx->pc) {
        case 0x1ff00cu: goto label_1ff00c;
        case 0x1ff018u: goto label_1ff018;
        case 0x1ff030u: goto label_1ff030;
        case 0x1ff048u: goto label_1ff048;
        case 0x1ff064u: goto label_1ff064;
        case 0x1ff080u: goto label_1ff080;
        default: break;
    }

    ctx->pc = 0x1feff8u;

    // 0x1feff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1feff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1feffc: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1feffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1ff000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff004: 0xc07fd60  jal         func_1FF580
    ctx->pc = 0x1FF004u;
    SET_GPR_U32(ctx, 31, 0x1FF00Cu);
    ctx->pc = 0x1FF008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF004u;
    // 0x1ff008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF580u, 0x1FF004u, 0x1FF00Cu)) {
        return;
    }
    ctx->pc = 0x1FF00Cu;
label_1ff00c:
    // 0x1ff00c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1ff00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1ff010: 0xc07fd98  jal         func_1FF660
    ctx->pc = 0x1FF010u;
    SET_GPR_U32(ctx, 31, 0x1FF018u);
    ctx->pc = 0x1FF014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF010u;
    // 0x1ff014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF660u, 0x1FF010u, 0x1FF018u)) {
        return;
    }
    ctx->pc = 0x1FF018u;
label_1ff018:
    // 0x1ff018: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ff018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ff01c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ff01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ff020: 0x24841a78  addiu       $a0, $a0, 0x1A78
    ctx->pc = 0x1ff020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6776));
    // 0x1ff024: 0x24a53548  addiu       $a1, $a1, 0x3548
    ctx->pc = 0x1ff024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13640));
    // 0x1ff028: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1FF028u;
    SET_GPR_U32(ctx, 31, 0x1FF030u);
    ctx->pc = 0x1FF02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF028u;
    // 0x1ff02c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1FF028u, 0x1FF030u)) {
        return;
    }
    ctx->pc = 0x1FF030u;
label_1ff030:
    // 0x1ff030: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ff030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ff034: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ff034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ff038: 0x24841a80  addiu       $a0, $a0, 0x1A80
    ctx->pc = 0x1ff038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6784));
    // 0x1ff03c: 0x24a53560  addiu       $a1, $a1, 0x3560
    ctx->pc = 0x1ff03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13664));
    // 0x1ff040: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1FF040u;
    SET_GPR_U32(ctx, 31, 0x1FF048u);
    ctx->pc = 0x1FF044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF040u;
    // 0x1ff044: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1FF040u, 0x1FF048u)) {
        return;
    }
    ctx->pc = 0x1FF048u;
label_1ff048:
    // 0x1ff048: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ff048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ff04c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ff04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ff050: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1ff050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1ff054: 0x24841a88  addiu       $a0, $a0, 0x1A88
    ctx->pc = 0x1ff054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6792));
    // 0x1ff058: 0x24a53578  addiu       $a1, $a1, 0x3578
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13688));
    // 0x1ff05c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1FF05Cu;
    SET_GPR_U32(ctx, 31, 0x1FF064u);
    ctx->pc = 0x1FF060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF05Cu;
    // 0x1ff060: 0x24c63590  addiu       $a2, $a2, 0x3590 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1FF05Cu, 0x1FF064u)) {
        return;
    }
    ctx->pc = 0x1FF064u;
label_1ff064:
    // 0x1ff064: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ff064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ff068: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ff068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ff06c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1ff06cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1ff070: 0x24841a90  addiu       $a0, $a0, 0x1A90
    ctx->pc = 0x1ff070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6800));
    // 0x1ff074: 0x24a535a0  addiu       $a1, $a1, 0x35A0
    ctx->pc = 0x1ff074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13728));
    // 0x1ff078: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1FF078u;
    SET_GPR_U32(ctx, 31, 0x1FF080u);
    ctx->pc = 0x1FF07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF078u;
    // 0x1ff07c: 0x24c635b8  addiu       $a2, $a2, 0x35B8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1FF078u, 0x1FF080u)) {
        return;
    }
    ctx->pc = 0x1FF080u;
label_1ff080:
    // 0x1ff080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff084: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF084u;
        // 0x1ff088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF08Cu;
    // 0x1ff08c: 0x0  nop
    ctx->pc = 0x1ff08cu;
    // NOP
    // 0x1ff090: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ff090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ff094: 0x0  nop
    ctx->pc = 0x1ff094u;
    // NOP
    ctx->pc = 0x1ff098u;
}
