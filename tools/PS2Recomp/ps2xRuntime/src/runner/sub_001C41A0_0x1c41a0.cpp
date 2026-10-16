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

// Function: sub_001C41A0
// Address: 0x1c41a0 - 0x1c4210
void sub_001C41A0_0x1c41a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C41A0_0x1c41a0");
#endif

    switch (ctx->pc) {
        case 0x1c41b4u: goto label_1c41b4;
        case 0x1c41c0u: goto label_1c41c0;
        case 0x1c41ccu: goto label_1c41cc;
        case 0x1c41d8u: goto label_1c41d8;
        case 0x1c4200u: goto label_1c4200;
        default: break;
    }

    ctx->pc = 0x1c41a0u;

    // 0x1c41a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c41a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c41a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c41a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c41a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c41a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c41ac: 0xc06d744  jal         func_1B5D10
    ctx->pc = 0x1C41ACu;
    SET_GPR_U32(ctx, 31, 0x1C41B4u);
    ctx->pc = 0x1C41B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41ACu;
    // 0x1c41b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5D10u, 0x1C41ACu, 0x1C41B4u)) {
        return;
    }
    ctx->pc = 0x1C41B4u;
label_1c41b4:
    // 0x1c41b4: 0x8e0502e0  lw          $a1, 0x2E0($s0)
    ctx->pc = 0x1c41b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1c41b8: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C41B8u;
    SET_GPR_U32(ctx, 31, 0x1C41C0u);
    ctx->pc = 0x1C41BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41B8u;
    // 0x1c41bc: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C41B8u, 0x1C41C0u)) {
        return;
    }
    ctx->pc = 0x1C41C0u;
label_1c41c0:
    // 0x1c41c0: 0xae0202e4  sw          $v0, 0x2E4($s0)
    ctx->pc = 0x1c41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    // 0x1c41c4: 0xc0710d2  jal         func_1C4348
    ctx->pc = 0x1C41C4u;
    SET_GPR_U32(ctx, 31, 0x1C41CCu);
    ctx->pc = 0x1C41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41C4u;
    // 0x1c41c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C4348u, 0x1C41C4u, 0x1C41CCu)) {
        return;
    }
    ctx->pc = 0x1C41CCu;
label_1c41cc:
    // 0x1c41cc: 0xc60c02d0  lwc1        $f12, 0x2D0($s0)
    ctx->pc = 0x1c41ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c41d0: 0xc0710fa  jal         func_1C43E8
    ctx->pc = 0x1C41D0u;
    SET_GPR_U32(ctx, 31, 0x1C41D8u);
    ctx->pc = 0x1C41D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41D0u;
    // 0x1c41d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C43E8u, 0x1C41D0u, 0x1C41D8u)) {
        return;
    }
    ctx->pc = 0x1C41D8u;
label_1c41d8:
    // 0x1c41d8: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1c41d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c41dc: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c41e0: 0x8e0302e8  lw          $v1, 0x2E8($s0)
    ctx->pc = 0x1c41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x1c41e4: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x1c41e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x1c41e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C41E8u;
    {
        const bool branch_taken_0x1c41e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41E8u;
        // 0x1c41ec: 0xae0202dc  sw          $v0, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41e8) {
            ctx->pc = 0x1C4200u;
            goto label_1c4200;
        }
    }
    ctx->pc = 0x1C41F0u;
    // 0x1c41f0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c41f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c41f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41f8: 0xc043910  jal         func_10E440
    ctx->pc = 0x1C41F8u;
    SET_GPR_U32(ctx, 31, 0x1C4200u);
    ctx->pc = 0x1C41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41F8u;
    // 0x1c41fc: 0x8c4482f0  lw          $a0, -0x7D10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E440u, 0x1C41F8u, 0x1C4200u)) {
        return;
    }
    ctx->pc = 0x1C4200u;
label_1c4200:
    // 0x1c4200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c4200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4208: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4208u;
        // 0x1c420c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4210u;
}
