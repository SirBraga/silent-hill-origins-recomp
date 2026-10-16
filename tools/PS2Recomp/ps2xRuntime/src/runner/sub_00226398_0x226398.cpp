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

// Function: sub_00226398
// Address: 0x226398 - 0x2263f0
void sub_00226398_0x226398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226398_0x226398");
#endif

    switch (ctx->pc) {
        case 0x2263b8u: goto label_2263b8;
        default: break;
    }

    ctx->pc = 0x226398u;

    // 0x226398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22639c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2263a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2263a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2263a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2263a8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2263a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x2263ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2263acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263b0: 0xc09397e  jal         func_24E5F8
    ctx->pc = 0x2263B0u;
    SET_GPR_U32(ctx, 31, 0x2263B8u);
    ctx->pc = 0x2263B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263B0u;
    // 0x2263b4: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x2263B0u, 0x2263B8u)) {
        return;
    }
    ctx->pc = 0x2263B8u;
label_2263b8:
    // 0x2263b8: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x2263b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2263bc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2263bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2263c0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2263C0u;
    {
        const bool branch_taken_0x2263c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2263c0) {
            ctx->pc = 0x2263C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2263C0u;
            // 0x2263c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2263E4u;
            goto label_2263e4;
        }
    }
    ctx->pc = 0x2263C8u;
    // 0x2263c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2263c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2263cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2263ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2263d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2263d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2263d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2263d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2263d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2263d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2263dc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2263dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2263e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2263e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2263e4:
    // 0x2263e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2263e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2263e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2263E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2263ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263E8u;
        // 0x2263ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2263E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2263F0u;
}
