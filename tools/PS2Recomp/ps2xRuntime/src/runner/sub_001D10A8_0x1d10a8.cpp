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

// Function: sub_001D10A8
// Address: 0x1d10a8 - 0x1d1110
void sub_001D10A8_0x1d10a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D10A8_0x1d10a8");
#endif

    switch (ctx->pc) {
        case 0x1d10bcu: goto label_1d10bc;
        case 0x1d10d8u: goto label_1d10d8;
        case 0x1d10e4u: goto label_1d10e4;
        case 0x1d10f0u: goto label_1d10f0;
        case 0x1d10fcu: goto label_1d10fc;
        default: break;
    }

    ctx->pc = 0x1d10a8u;

    // 0x1d10a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d10a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d10ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d10acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d10b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d10b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d10b4: 0xc0603ce  jal         func_180F38
    ctx->pc = 0x1D10B4u;
    SET_GPR_U32(ctx, 31, 0x1D10BCu);
    ctx->pc = 0x1D10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10B4u;
    // 0x1d10b8: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F38u, 0x1D10B4u, 0x1D10BCu)) {
        return;
    }
    ctx->pc = 0x1D10BCu;
label_1d10bc:
    // 0x1d10bc: 0x8e029168  lw          $v0, -0x6E98($s0)
    ctx->pc = 0x1d10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938984)));
    // 0x1d10c0: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x1d10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x1d10c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D10C4u;
    {
        const bool branch_taken_0x1d10c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10C4u;
        // 0x1d10c8: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10c4) {
            ctx->pc = 0x1D10D8u;
            goto label_1d10d8;
        }
    }
    ctx->pc = 0x1D10CCu;
    // 0x1d10cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d10ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10d0: 0xc074a10  jal         func_1D2840
    ctx->pc = 0x1D10D0u;
    SET_GPR_U32(ctx, 31, 0x1D10D8u);
    ctx->pc = 0x1D10D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10D0u;
    // 0x1d10d4: 0x24840be0  addiu       $a0, $a0, 0xBE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2840u, 0x1D10D0u, 0x1D10D8u)) {
        return;
    }
    ctx->pc = 0x1D10D8u;
label_1d10d8:
    // 0x1d10d8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d10dc: 0xc062cc8  jal         func_18B320
    ctx->pc = 0x1D10DCu;
    SET_GPR_U32(ctx, 31, 0x1D10E4u);
    ctx->pc = 0x1D10E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10DCu;
    // 0x1d10e0: 0x8c448acc  lw          $a0, -0x7534($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B320u, 0x1D10DCu, 0x1D10E4u)) {
        return;
    }
    ctx->pc = 0x1D10E4u;
label_1d10e4:
    // 0x1d10e4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d10e8: 0xc064098  jal         func_190260
    ctx->pc = 0x1D10E8u;
    SET_GPR_U32(ctx, 31, 0x1D10F0u);
    ctx->pc = 0x1D10ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10E8u;
    // 0x1d10ec: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190260u, 0x1D10E8u, 0x1D10F0u)) {
        return;
    }
    ctx->pc = 0x1D10F0u;
label_1d10f0:
    // 0x1d10f0: 0x8e049168  lw          $a0, -0x6E98($s0)
    ctx->pc = 0x1d10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938984)));
    // 0x1d10f4: 0xc06c90c  jal         func_1B2430
    ctx->pc = 0x1D10F4u;
    SET_GPR_U32(ctx, 31, 0x1D10FCu);
    ctx->pc = 0x1D10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10F4u;
    // 0x1d10f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2430u, 0x1D10F4u, 0x1D10FCu)) {
        return;
    }
    ctx->pc = 0x1D10FCu;
label_1d10fc:
    // 0x1d10fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d10fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1108: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1108u;
        // 0x1d110c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1110u;
}
