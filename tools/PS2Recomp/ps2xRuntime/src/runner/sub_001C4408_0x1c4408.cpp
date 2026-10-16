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

// Function: sub_001C4408
// Address: 0x1c4408 - 0x1c44c8
void sub_001C4408_0x1c4408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4408_0x1c4408");
#endif

    switch (ctx->pc) {
        case 0x1c4420u: goto label_1c4420;
        case 0x1c4450u: goto label_1c4450;
        case 0x1c4480u: goto label_1c4480;
        case 0x1c44b0u: goto label_1c44b0;
        default: break;
    }

    ctx->pc = 0x1c4408u;

    // 0x1c4408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c440c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c440cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c4410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4418: 0xc06d7ec  jal         func_1B5FB0
    ctx->pc = 0x1C4418u;
    SET_GPR_U32(ctx, 31, 0x1C4420u);
    ctx->pc = 0x1C441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4418u;
    // 0x1c441c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5FB0u, 0x1C4418u, 0x1C4420u)) {
        return;
    }
    ctx->pc = 0x1C4420u;
label_1c4420:
    // 0x1c4420: 0x8e0202e8  lw          $v0, 0x2E8($s0)
    ctx->pc = 0x1c4420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x1c4424: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C4424u;
    {
        const bool branch_taken_0x1c4424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4424) {
            ctx->pc = 0x1C4428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4424u;
            // 0x1c4428: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C44B8u;
            goto label_1c44b8;
        }
    }
    ctx->pc = 0x1C442Cu;
    // 0x1c442c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c4430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4430u;
    {
        const bool branch_taken_0x1c4430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4430u;
        // 0x1c4434: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4430) {
            ctx->pc = 0x1C4440u;
            goto label_1c4440;
        }
    }
    ctx->pc = 0x1C4438u;
    // 0x1c4438: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c4438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c443c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1c443cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c4440:
    // 0x1c4440: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4440u;
    {
        const bool branch_taken_0x1c4440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4440u;
        // 0x1c4444: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4440) {
            ctx->pc = 0x1C448Cu;
            goto label_1c448c;
        }
    }
    ctx->pc = 0x1C4448u;
    // 0x1c4448: 0xc043a38  jal         func_10E8E0
    ctx->pc = 0x1C4448u;
    SET_GPR_U32(ctx, 31, 0x1C4450u);
    ctx->pc = 0x1C444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4448u;
    // 0x1c444c: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E8E0u, 0x1C4448u, 0x1C4450u)) {
        return;
    }
    ctx->pc = 0x1C4450u;
label_1c4450:
    // 0x1c4450: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4450u;
    {
        const bool branch_taken_0x1c4450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4450) {
            ctx->pc = 0x1C4454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4450u;
            // 0x1c4454: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C44B8u;
            goto label_1c44b8;
        }
    }
    ctx->pc = 0x1C4458u;
    // 0x1c4458: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1c4458u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1c445c: 0x8e229838  lw          $v0, -0x67C8($s1)
    ctx->pc = 0x1c445cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339838u));
    // 0x1c4460: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C4460u;
    {
        const bool branch_taken_0x1c4460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4460) {
            ctx->pc = 0x1C4464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4460u;
            // 0x1c4464: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C44B8u;
            goto label_1c44b8;
        }
    }
    ctx->pc = 0x1C4468u;
    // 0x1c4468: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x1c4468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    // 0x1c446c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c446cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c4470: 0x24a5e450  addiu       $a1, $a1, -0x1BB0
    ctx->pc = 0x1c4470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960208));
    // 0x1c4474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c4474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4478: 0xc043642  jal         func_10D908
    ctx->pc = 0x1C4478u;
    SET_GPR_U32(ctx, 31, 0x1C4480u);
    ctx->pc = 0x1C447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4478u;
    // 0x1c447c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x1C4478u, 0x1C4480u)) {
        return;
    }
    ctx->pc = 0x1C4480u;
label_1c4480:
    // 0x1c4480: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4484: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C4484u;
    {
        const bool branch_taken_0x1c4484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4484u;
        // 0x1c4488: 0xae239838  sw          $v1, -0x67C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294940728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4484) {
            ctx->pc = 0x1C44B4u;
            goto label_1c44b4;
        }
    }
    ctx->pc = 0x1C448Cu;
label_1c448c:
    // 0x1c448c: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1c448cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1c4490: 0x8e029838  lw          $v0, -0x67C8($s0)
    ctx->pc = 0x1c4490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339838u));
    // 0x1c4494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4494u;
    {
        const bool branch_taken_0x1c4494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4494u;
        // 0x1c4498: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4494) {
            ctx->pc = 0x1C44B4u;
            goto label_1c44b4;
        }
    }
    ctx->pc = 0x1C449Cu;
    // 0x1c449c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c449cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44a0: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x1c44a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
    // 0x1c44a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c44a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44a8: 0xc043642  jal         func_10D908
    ctx->pc = 0x1C44A8u;
    SET_GPR_U32(ctx, 31, 0x1C44B0u);
    ctx->pc = 0x1C44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44A8u;
    // 0x1c44ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x1C44A8u, 0x1C44B0u)) {
        return;
    }
    ctx->pc = 0x1C44B0u;
label_1c44b0:
    // 0x1c44b0: 0xae009838  sw          $zero, -0x67C8($s0)
    ctx->pc = 0x1c44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940728), GPR_U32(ctx, 0));
label_1c44b4:
    // 0x1c44b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c44b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c44b8:
    // 0x1c44b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c44b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c44bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44C0u;
        // 0x1c44c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44C8u;
}
