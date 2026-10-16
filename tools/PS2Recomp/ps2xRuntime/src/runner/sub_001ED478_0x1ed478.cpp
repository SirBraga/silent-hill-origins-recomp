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

// Function: sub_001ED478
// Address: 0x1ed478 - 0x1ed508
void sub_001ED478_0x1ed478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED478_0x1ed478");
#endif

    switch (ctx->pc) {
        case 0x1ed4b0u: goto label_1ed4b0;
        case 0x1ed4c4u: goto label_1ed4c4;
        case 0x1ed4d8u: goto label_1ed4d8;
        default: break;
    }

    ctx->pc = 0x1ed478u;

label_1ed478:
    // 0x1ed478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed47c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ed47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ed480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed48c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ed48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed490: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x1ed490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed494: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1ed494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed498: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ed498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed49c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ed49cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ed4a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED4A0u;
    {
        const bool branch_taken_0x1ed4a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4A0u;
        // 0x1ed4a4: 0xe600012c  swc1        $f0, 0x12C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4a0) {
            ctx->pc = 0x1ED4B0u;
            goto label_1ed4b0;
        }
    }
    ctx->pc = 0x1ED4A8u;
    // 0x1ed4a8: 0xc07b1be  jal         func_1EC6F8
    ctx->pc = 0x1ED4A8u;
    SET_GPR_U32(ctx, 31, 0x1ED4B0u);
    ctx->pc = 0x1EC6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC6F8u, 0x1ED4A8u, 0x1ED4B0u)) {
        return;
    }
    ctx->pc = 0x1ED4B0u;
label_1ed4b0:
    // 0x1ed4b0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ed4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed4b4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED4B4u;
    {
        const bool branch_taken_0x1ed4b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed4b4) {
            ctx->pc = 0x1ED4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED4B4u;
            // 0x1ed4b8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED4C8u;
            goto label_1ed4c8;
        }
    }
    ctx->pc = 0x1ED4BCu;
    // 0x1ed4bc: 0xc07b51e  jal         func_1ED478
    ctx->pc = 0x1ED4BCu;
    SET_GPR_U32(ctx, 31, 0x1ED4C4u);
    ctx->pc = 0x1ED4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED4BCu;
    // 0x1ed4c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED478u;
    goto label_1ed478;
    ctx->pc = 0x1ED4C4u;
label_1ed4c4:
    // 0x1ed4c4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ed4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ed4c8:
    // 0x1ed4c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED4C8u;
    {
        const bool branch_taken_0x1ed4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4C8u;
        // 0x1ed4cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4c8) {
            ctx->pc = 0x1ED4DCu;
            goto label_1ed4dc;
        }
    }
    ctx->pc = 0x1ED4D0u;
    // 0x1ed4d0: 0xc07b51e  jal         func_1ED478
    ctx->pc = 0x1ED4D0u;
    SET_GPR_U32(ctx, 31, 0x1ED4D8u);
    ctx->pc = 0x1ED4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED4D0u;
    // 0x1ed4d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED478u;
    goto label_1ed478;
    ctx->pc = 0x1ED4D8u;
label_1ed4d8:
    // 0x1ed4d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ed4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed4dc:
    // 0x1ed4dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed4dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4E4u;
        // 0x1ed4e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED4ECu;
    // 0x1ed4ec: 0x0  nop
    ctx->pc = 0x1ed4ecu;
    // NOP
    // 0x1ed4f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4f4: 0x0  nop
    ctx->pc = 0x1ed4f4u;
    // NOP
    // 0x1ed4f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ed4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ed4fc: 0x0  nop
    ctx->pc = 0x1ed4fcu;
    // NOP
    // 0x1ed500: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1ed500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1ed504: 0x0  nop
    ctx->pc = 0x1ed504u;
    // NOP
    ctx->pc = 0x1ed508u;
}
