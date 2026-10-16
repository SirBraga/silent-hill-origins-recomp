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

// Function: sub_00150448
// Address: 0x150448 - 0x150540
void sub_00150448_0x150448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150448_0x150448");
#endif

    switch (ctx->pc) {
        case 0x150478u: goto label_150478;
        case 0x150488u: goto label_150488;
        case 0x150518u: goto label_150518;
        default: break;
    }

    ctx->pc = 0x150448u;

    // 0x150448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x150448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15044c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x150450: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x150450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x150454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150458: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x150458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15045c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150460: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x150460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x150464: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x150464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x150468: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x150468u;
    {
        const bool branch_taken_0x150468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150468u;
        // 0x15046c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150468) {
            ctx->pc = 0x150524u;
            goto label_150524;
        }
    }
    ctx->pc = 0x150470u;
    // 0x150470: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x150470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x150474: 0x0  nop
    ctx->pc = 0x150474u;
    // NOP
label_150478:
    // 0x150478: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x150478u;
    {
        const bool branch_taken_0x150478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150478u;
        // 0x15047c: 0x8e120180  lw          $s2, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150478) {
            ctx->pc = 0x15050Cu;
            goto label_15050c;
        }
    }
    ctx->pc = 0x150480u;
    // 0x150480: 0xc053c74  jal         func_14F1D0
    ctx->pc = 0x150480u;
    SET_GPR_U32(ctx, 31, 0x150488u);
    ctx->pc = 0x150484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150480u;
    // 0x150484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F1D0u, 0x150480u, 0x150488u)) {
        return;
    }
    ctx->pc = 0x150488u;
label_150488:
    // 0x150488: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x150488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x15048c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x15048cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x150490: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150490u;
    {
        const bool branch_taken_0x150490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150490u;
        // 0x150494: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150490) {
            ctx->pc = 0x1504A0u;
            goto label_1504a0;
        }
    }
    ctx->pc = 0x150498u;
    // 0x150498: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x150498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x15049c: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x15049cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
label_1504a0:
    // 0x1504a0: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x1504a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1504a4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1504A4u;
    {
        const bool branch_taken_0x1504a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1504a4) {
            ctx->pc = 0x1504A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1504A4u;
            // 0x1504a8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1504B8u;
            goto label_1504b8;
        }
    }
    ctx->pc = 0x1504ACu;
    // 0x1504ac: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1504acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1504b0: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x1504b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
    // 0x1504b4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1504b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1504b8:
    // 0x1504b8: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1504B8u;
    {
        const bool branch_taken_0x1504b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1504b8) {
            ctx->pc = 0x1504BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1504B8u;
            // 0x1504bc: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1504CCu;
            goto label_1504cc;
        }
    }
    ctx->pc = 0x1504C0u;
    // 0x1504c0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1504c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1504c4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1504c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1504c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1504c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1504cc:
    // 0x1504cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1504ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1504d0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1504d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1504d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1504d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1504d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1504D8u;
    {
        const bool branch_taken_0x1504d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1504d8) {
            ctx->pc = 0x1504DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1504D8u;
            // 0x1504dc: 0xac500184  sw          $s0, 0x184($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1504E0u;
            goto label_1504e0;
        }
    }
    ctx->pc = 0x1504E0u;
label_1504e0:
    // 0x1504e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1504e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1504e4: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x1504e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x1504e8: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x1504e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x1504ec: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1504ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x1504f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1504f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1504f4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1504f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1504f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1504f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1504fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1504fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x150500: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x150500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x150504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x150504u;
    {
        const bool branch_taken_0x150504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150504u;
        // 0x150508: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150504) {
            ctx->pc = 0x150518u;
            goto label_150518;
        }
    }
    ctx->pc = 0x15050Cu;
label_15050c:
    // 0x15050c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150510: 0xc0535e2  jal         func_14D788
    ctx->pc = 0x150510u;
    SET_GPR_U32(ctx, 31, 0x150518u);
    ctx->pc = 0x150514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150510u;
    // 0x150514: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D788u, 0x150510u, 0x150518u)) {
        return;
    }
    ctx->pc = 0x150518u;
label_150518:
    // 0x150518: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x150518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15051c: 0x5600ffd6  bnel        $s0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x15051Cu;
    {
        const bool branch_taken_0x15051c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15051c) {
            ctx->pc = 0x150520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15051Cu;
            // 0x150520: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150478;
        }
    }
    ctx->pc = 0x150524u;
label_150524:
    // 0x150524: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x150524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150528: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15052c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15052cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150534: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x150534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150538: 0x3e00008  jr          $ra
    ctx->pc = 0x150538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150538u;
        // 0x15053c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150540u;
}
