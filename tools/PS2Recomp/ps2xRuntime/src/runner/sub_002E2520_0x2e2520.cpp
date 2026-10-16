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

// Function: sub_002E2520
// Address: 0x2e2520 - 0x2e25b8
void sub_002E2520_0x2e2520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2520_0x2e2520");
#endif

    switch (ctx->pc) {
        case 0x2e25a0u: goto label_2e25a0;
        default: break;
    }

    ctx->pc = 0x2e2520u;

    // 0x2e2520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2524: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e252c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e252cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2530: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2e2530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2e2534: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2534u;
    {
        const bool branch_taken_0x2e2534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2534) {
            ctx->pc = 0x2E2538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2534u;
            // 0x2e2538: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2540u;
            goto label_2e2540;
        }
    }
    ctx->pc = 0x2E253Cu;
    // 0x2e253c: 0x0  nop
    ctx->pc = 0x2e253cu;
    // NOP
label_2e2540:
    // 0x2e2540: 0x50c00012  beql        $a2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E2540u;
    {
        const bool branch_taken_0x2e2540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2540) {
            ctx->pc = 0x2E2544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2540u;
            // 0x2e2544: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E258Cu;
            goto label_2e258c;
        }
    }
    ctx->pc = 0x2E2548u;
    // 0x2e2548: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x2e2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2e254c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E254Cu;
    {
        const bool branch_taken_0x2e254c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E254Cu;
        // 0x2e2550: 0xae060068  sw          $a2, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e254c) {
            ctx->pc = 0x2E2588u;
            goto label_2e2588;
        }
    }
    ctx->pc = 0x2E2554u;
    // 0x2e2554: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2e2554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2e2558: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2558u;
    {
        const bool branch_taken_0x2e2558 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2558u;
        // 0x2e255c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2558) {
            ctx->pc = 0x2E2570u;
            goto label_2e2570;
        }
    }
    ctx->pc = 0x2E2560u;
    // 0x2e2560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e2564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e2568: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2568u;
    {
        const bool branch_taken_0x2e2568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2568u;
        // 0x2e256c: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2568) {
            ctx->pc = 0x2E2588u;
            goto label_2e2588;
        }
    }
    ctx->pc = 0x2E2570u;
label_2e2570:
    // 0x2e2570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e2570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e2574: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e2574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e2578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e257c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e257cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e2580: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e2580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e2584: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e2584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_2e2588:
    // 0x2e2588: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2e2588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2e258c:
    // 0x2e258c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E258Cu;
    {
        const bool branch_taken_0x2e258c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E258Cu;
        // 0x2e2590: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e258c) {
            ctx->pc = 0x2E25A0u;
            goto label_2e25a0;
        }
    }
    ctx->pc = 0x2E2594u;
    // 0x2e2594: 0x8e070068  lw          $a3, 0x68($s0)
    ctx->pc = 0x2e2594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2e2598: 0xc0b673c  jal         func_2D9CF0
    ctx->pc = 0x2E2598u;
    SET_GPR_U32(ctx, 31, 0x2E25A0u);
    ctx->pc = 0x2E259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2598u;
    // 0x2e259c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9CF0u, 0x2E2598u, 0x2E25A0u)) {
        return;
    }
    ctx->pc = 0x2E25A0u;
label_2e25a0:
    // 0x2e25a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e25a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e25a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e25a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e25a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e25ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E25ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25ACu;
        // 0x2e25b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E25ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E25B4u;
    // 0x2e25b4: 0x0  nop
    ctx->pc = 0x2e25b4u;
    // NOP
    ctx->pc = 0x2e25b8u;
}
