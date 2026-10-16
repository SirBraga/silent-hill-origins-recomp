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

// Function: sub_001DD7A0
// Address: 0x1dd7a0 - 0x1dd808
void sub_001DD7A0_0x1dd7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD7A0_0x1dd7a0");
#endif

    switch (ctx->pc) {
        case 0x1dd7b8u: goto label_1dd7b8;
        case 0x1dd7e4u: goto label_1dd7e4;
        default: break;
    }

    ctx->pc = 0x1dd7a0u;

    // 0x1dd7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd7a4: 0x24040a0d  addiu       $a0, $zero, 0xA0D
    ctx->pc = 0x1dd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2573));
    // 0x1dd7a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd7ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd7b0: 0xc0957e4  jal         func_255F90
    ctx->pc = 0x1DD7B0u;
    SET_GPR_U32(ctx, 31, 0x1DD7B8u);
    ctx->pc = 0x1DD7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7B0u;
    // 0x1dd7b4: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F90u, 0x1DD7B0u, 0x1DD7B8u)) {
        return;
    }
    ctx->pc = 0x1DD7B8u;
label_1dd7b8:
    // 0x1dd7b8: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD7B8u;
    {
        const bool branch_taken_0x1dd7b8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1DD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7B8u;
        // 0x1dd7bc: 0xae02e680  sw          $v0, -0x1980($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7b8) {
            ctx->pc = 0x1DD7F4u;
            goto label_1dd7f4;
        }
    }
    ctx->pc = 0x1DD7C0u;
    // 0x1dd7c0: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1dd7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1dd7c4: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1dd7c8: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1dd7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1dd7cc: 0x24c6d888  addiu       $a2, $a2, -0x2778
    ctx->pc = 0x1dd7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957192));
    // 0x1dd7d0: 0x24e7d8a8  addiu       $a3, $a3, -0x2758
    ctx->pc = 0x1dd7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957224));
    // 0x1dd7d4: 0x2508d8b0  addiu       $t0, $t0, -0x2750
    ctx->pc = 0x1dd7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957232));
    // 0x1dd7d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1dd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd7dc: 0xc0957b0  jal         func_255EC0
    ctx->pc = 0x1DD7DCu;
    SET_GPR_U32(ctx, 31, 0x1DD7E4u);
    ctx->pc = 0x1DD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7DCu;
    // 0x1dd7e0: 0x24050a0d  addiu       $a1, $zero, 0xA0D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2573));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255EC0u, 0x1DD7DCu, 0x1DD7E4u)) {
        return;
    }
    ctx->pc = 0x1DD7E4u;
label_1dd7e4:
    // 0x1dd7e4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1dd7e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dd7e8: 0xae02e680  sw          $v0, -0x1980($s0)
    ctx->pc = 0x1dd7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960768), GPR_U32(ctx, 2));
    // 0x1dd7ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD7ECu;
    {
        const bool branch_taken_0x1dd7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7ECu;
        // 0x1dd7f0: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7ec) {
            ctx->pc = 0x1DD7F8u;
            goto label_1dd7f8;
        }
    }
    ctx->pc = 0x1DD7F4u;
label_1dd7f4:
    // 0x1dd7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd7f8:
    // 0x1dd7f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd800: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD800u;
        // 0x1dd804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD808u;
}
