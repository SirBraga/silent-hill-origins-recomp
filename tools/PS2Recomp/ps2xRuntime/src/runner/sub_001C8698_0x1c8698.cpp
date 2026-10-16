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

// Function: sub_001C8698
// Address: 0x1c8698 - 0x1c8700
void sub_001C8698_0x1c8698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8698_0x1c8698");
#endif

    switch (ctx->pc) {
        case 0x1c86d4u: goto label_1c86d4;
        default: break;
    }

    ctx->pc = 0x1c8698u;

    // 0x1c8698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c869c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c869cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c86a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c86a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c86a4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1c86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1c86a8: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1c86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1c86ac: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1c86acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1c86b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c86b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86b4: 0xc4af9918  lwc1        $f15, -0x66E8($a1)
    ctx->pc = 0x1c86b4u;
    { uint32_t bits = FAST_READ32(0x339918u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c86b8: 0xc44d9910  lwc1        $f13, -0x66F0($v0)
    ctx->pc = 0x1c86b8u;
    { uint32_t bits = FAST_READ32(0x339910u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c86bc: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x1c86bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x1c86c0: 0xc46e86b4  lwc1        $f14, -0x794C($v1)
    ctx->pc = 0x1c86c0u;
    { uint32_t bits = FAST_READ32(0x6F86B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c86c4: 0xc4d09914  lwc1        $f16, -0x66EC($a2)
    ctx->pc = 0x1c86c4u;
    { uint32_t bits = FAST_READ32(0x339914u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c86c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c86c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c86cc: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1C86CCu;
    SET_GPR_U32(ctx, 31, 0x1C86D4u);
    ctx->pc = 0x1C86D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C86CCu;
    // 0x1c86d0: 0x26050288  addiu       $a1, $s0, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1C86CCu, 0x1C86D4u)) {
        return;
    }
    ctx->pc = 0x1C86D4u;
label_1c86d4:
    // 0x1c86d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c86d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c86d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C86D8u;
    {
        const bool branch_taken_0x1c86d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86D8u;
        // 0x1c86dc: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86d8) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C86E0u;
    // 0x1c86e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c86e4: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1c86e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1c86e8: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1c86e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    // 0x1c86ec: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1c86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_1c86f0:
    // 0x1c86f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c86f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c86f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c86f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c86f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C86F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86F8u;
        // 0x1c86fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C86F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8700u;
}
