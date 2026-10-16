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

// Function: sub_00176448
// Address: 0x176448 - 0x1764a8
void sub_00176448_0x176448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176448_0x176448");
#endif

    switch (ctx->pc) {
        case 0x17645cu: goto label_17645c;
        case 0x176484u: goto label_176484;
        case 0x176494u: goto label_176494;
        default: break;
    }

    ctx->pc = 0x176448u;

    // 0x176448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17644c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x176450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176454: 0xc05d80c  jal         func_176030
    ctx->pc = 0x176454u;
    SET_GPR_U32(ctx, 31, 0x17645Cu);
    ctx->pc = 0x176458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176454u;
    // 0x176458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x176454u, 0x17645Cu)) {
        return;
    }
    ctx->pc = 0x17645Cu;
label_17645c:
    // 0x17645c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17645cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x176460: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x176464: 0x24636390  addiu       $v1, $v1, 0x6390
    ctx->pc = 0x176464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25488));
    // 0x176468: 0x24426370  addiu       $v0, $v0, 0x6370
    ctx->pc = 0x176468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25456));
    // 0x17646c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17646cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x176470: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x176470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x176474: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x176474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x176478: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x176478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x17647c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x17647Cu;
    SET_GPR_U32(ctx, 31, 0x176484u);
    ctx->pc = 0x176480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17647Cu;
    // 0x176480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x17647Cu, 0x176484u)) {
        return;
    }
    ctx->pc = 0x176484u;
label_176484:
    // 0x176484: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x176484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x176488: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x17648c: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x17648Cu;
    SET_GPR_U32(ctx, 31, 0x176494u);
    ctx->pc = 0x176490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17648Cu;
    // 0x176490: 0x8c649168  lw          $a0, -0x6E98($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x17648Cu, 0x176494u)) {
        return;
    }
    ctx->pc = 0x176494u;
label_176494:
    // 0x176494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x176494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17649c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17649cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1764a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1764A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1764A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764A0u;
        // 0x1764a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1764A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1764A8u;
}
