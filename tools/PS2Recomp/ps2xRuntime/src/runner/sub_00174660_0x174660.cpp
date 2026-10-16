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

// Function: sub_00174660
// Address: 0x174660 - 0x1746e0
void sub_00174660_0x174660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174660_0x174660");
#endif

    switch (ctx->pc) {
        case 0x174674u: goto label_174674;
        case 0x174694u: goto label_174694;
        case 0x17469cu: goto label_17469c;
        case 0x1746a4u: goto label_1746a4;
        case 0x1746acu: goto label_1746ac;
        case 0x1746ccu: goto label_1746cc;
        default: break;
    }

    ctx->pc = 0x174660u;

    // 0x174660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17466c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x17466Cu;
    SET_GPR_U32(ctx, 31, 0x174674u);
    ctx->pc = 0x174670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17466Cu;
    // 0x174670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x17466Cu, 0x174674u)) {
        return;
    }
    ctx->pc = 0x174674u;
label_174674:
    // 0x174674: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x174674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x174678: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x174678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17467c: 0x24635e70  addiu       $v1, $v1, 0x5E70
    ctx->pc = 0x17467cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24176));
    // 0x174680: 0x24425e90  addiu       $v0, $v0, 0x5E90
    ctx->pc = 0x174680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24208));
    // 0x174684: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x174684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x174688: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x174688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x17468c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17468Cu;
    SET_GPR_U32(ctx, 31, 0x174694u);
    ctx->pc = 0x174690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17468Cu;
    // 0x174690: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17468Cu, 0x174694u)) {
        return;
    }
    ctx->pc = 0x174694u;
label_174694:
    // 0x174694: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x174694u;
    SET_GPR_U32(ctx, 31, 0x17469Cu);
    ctx->pc = 0x174698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174694u;
    // 0x174698: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x174694u, 0x17469Cu)) {
        return;
    }
    ctx->pc = 0x17469Cu;
label_17469c:
    // 0x17469c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17469Cu;
    SET_GPR_U32(ctx, 31, 0x1746A4u);
    ctx->pc = 0x1746A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17469Cu;
    // 0x1746a0: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17469Cu, 0x1746A4u)) {
        return;
    }
    ctx->pc = 0x1746A4u;
label_1746a4:
    // 0x1746a4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1746A4u;
    SET_GPR_U32(ctx, 31, 0x1746ACu);
    ctx->pc = 0x1746A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1746A4u;
    // 0x1746a8: 0x2604005c  addiu       $a0, $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1746A4u, 0x1746ACu)) {
        return;
    }
    ctx->pc = 0x1746ACu;
label_1746ac:
    // 0x1746ac: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1746acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1746b0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1746b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1746b4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1746b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1746b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1746b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1746bc: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1746bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1746c0: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1746c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1746c4: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x1746C4u;
    SET_GPR_U32(ctx, 31, 0x1746CCu);
    ctx->pc = 0x1746C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1746C4u;
    // 0x1746c8: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x1746C4u, 0x1746CCu)) {
        return;
    }
    ctx->pc = 0x1746CCu;
label_1746cc:
    // 0x1746cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1746ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1746d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1746d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1746d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1746d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1746D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1746DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746D8u;
        // 0x1746dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1746D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1746E0u;
}
