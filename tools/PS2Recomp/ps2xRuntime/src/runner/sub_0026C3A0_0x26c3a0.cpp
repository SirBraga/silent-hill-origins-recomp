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

// Function: sub_0026C3A0
// Address: 0x26c3a0 - 0x26c488
void sub_0026C3A0_0x26c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C3A0_0x26c3a0");
#endif

    switch (ctx->pc) {
        case 0x26c3d8u: goto label_26c3d8;
        case 0x26c404u: goto label_26c404;
        case 0x26c444u: goto label_26c444;
        case 0x26c45cu: goto label_26c45c;
        case 0x26c46cu: goto label_26c46c;
        case 0x26c47cu: goto label_26c47c;
        default: break;
    }

    ctx->pc = 0x26c3a0u;

    // 0x26c3a0: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x26c3a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26c3a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c3a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c3a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3ac: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x26c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x26c3b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26c3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26c3b4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x26c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x26c3b8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x26c3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c3bc: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x26c3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x26c3c0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26c3c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c3c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C3C4u;
    {
        const bool branch_taken_0x26c3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3C4u;
        // 0x26c3c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3c4) {
            ctx->pc = 0x26C3E0u;
            goto label_26c3e0;
        }
    }
    ctx->pc = 0x26C3CCu;
    // 0x26c3cc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x26c3ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26c3d0: 0xc09c604  jal         func_271810
    ctx->pc = 0x26C3D0u;
    SET_GPR_U32(ctx, 31, 0x26C3D8u);
    ctx->pc = 0x271810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271810u, 0x26C3D0u, 0x26C3D8u)) {
        return;
    }
    ctx->pc = 0x26C3D8u;
label_26c3d8:
    // 0x26c3d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x26C3D8u;
    {
        const bool branch_taken_0x26c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3D8u;
        // 0x26c3dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3d8) {
            ctx->pc = 0x26C480u;
            goto label_26c480;
        }
    }
    ctx->pc = 0x26C3E0u;
label_26c3e0:
    // 0x26c3e0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x26c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x26c3e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c3e8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26c3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c3ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C3ECu;
    {
        const bool branch_taken_0x26c3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c3ec) {
            ctx->pc = 0x26C3FCu;
            goto label_26c3fc;
        }
    }
    ctx->pc = 0x26C3F4u;
    // 0x26c3f4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26C3F4u;
    {
        const bool branch_taken_0x26c3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3F4u;
        // 0x26c3f8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3f4) {
            ctx->pc = 0x26C47Cu;
            goto label_26c47c;
        }
    }
    ctx->pc = 0x26C3FCu;
label_26c3fc:
    // 0x26c3fc: 0xc09c0da  jal         func_270368
    ctx->pc = 0x26C3FCu;
    SET_GPR_U32(ctx, 31, 0x26C404u);
    ctx->pc = 0x26C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3FCu;
    // 0x26c400: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270368u, 0x26C3FCu, 0x26C404u)) {
        return;
    }
    ctx->pc = 0x26C404u;
label_26c404:
    // 0x26c404: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x26c404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x26c408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c40c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26C40Cu;
    {
        const bool branch_taken_0x26c40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C40Cu;
        // 0x26c410: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c40c) {
            ctx->pc = 0x26C44Cu;
            goto label_26c44c;
        }
    }
    ctx->pc = 0x26C414u;
    // 0x26c414: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C414u;
    {
        const bool branch_taken_0x26c414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C414u;
        // 0x26c418: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c414) {
            ctx->pc = 0x26C42Cu;
            goto label_26c42c;
        }
    }
    ctx->pc = 0x26C41Cu;
    // 0x26c41c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C41Cu;
    {
        const bool branch_taken_0x26c41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C41Cu;
        // 0x26c420: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c41c) {
            ctx->pc = 0x26C43Cu;
            goto label_26c43c;
        }
    }
    ctx->pc = 0x26C424u;
    // 0x26c424: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26C424u;
    {
        const bool branch_taken_0x26c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C424u;
        // 0x26c428: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c424) {
            ctx->pc = 0x26C474u;
            goto label_26c474;
        }
    }
    ctx->pc = 0x26C42Cu;
label_26c42c:
    // 0x26c42c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26C42Cu;
    {
        const bool branch_taken_0x26c42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C42Cu;
        // 0x26c430: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c42c) {
            ctx->pc = 0x26C464u;
            goto label_26c464;
        }
    }
    ctx->pc = 0x26C434u;
    // 0x26c434: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26C434u;
    {
        const bool branch_taken_0x26c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C434u;
        // 0x26c438: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c434) {
            ctx->pc = 0x26C474u;
            goto label_26c474;
        }
    }
    ctx->pc = 0x26C43Cu;
label_26c43c:
    // 0x26c43c: 0xc09c604  jal         func_271810
    ctx->pc = 0x26C43Cu;
    SET_GPR_U32(ctx, 31, 0x26C444u);
    ctx->pc = 0x26C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C43Cu;
    // 0x26c440: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x271810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271810u, 0x26C43Cu, 0x26C444u)) {
        return;
    }
    ctx->pc = 0x26C444u;
label_26c444:
    // 0x26c444: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26C444u;
    {
        const bool branch_taken_0x26c444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C444u;
        // 0x26c448: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c444) {
            ctx->pc = 0x26C480u;
            goto label_26c480;
        }
    }
    ctx->pc = 0x26C44Cu;
label_26c44c:
    // 0x26c44c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x26c44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c450: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26c450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c454: 0xc09c8ae  jal         func_2722B8
    ctx->pc = 0x26C454u;
    SET_GPR_U32(ctx, 31, 0x26C45Cu);
    ctx->pc = 0x26C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C454u;
    // 0x26c458: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2722B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2722B8u, 0x26C454u, 0x26C45Cu)) {
        return;
    }
    ctx->pc = 0x26C45Cu;
label_26c45c:
    // 0x26c45c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26C45Cu;
    {
        const bool branch_taken_0x26c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C45Cu;
        // 0x26c460: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c45c) {
            ctx->pc = 0x26C47Cu;
            goto label_26c47c;
        }
    }
    ctx->pc = 0x26C464u;
label_26c464:
    // 0x26c464: 0xc09c604  jal         func_271810
    ctx->pc = 0x26C464u;
    SET_GPR_U32(ctx, 31, 0x26C46Cu);
    ctx->pc = 0x26C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C464u;
    // 0x26c468: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x271810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271810u, 0x26C464u, 0x26C46Cu)) {
        return;
    }
    ctx->pc = 0x26C46Cu;
label_26c46c:
    // 0x26c46c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26C46Cu;
    {
        const bool branch_taken_0x26c46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C46Cu;
        // 0x26c470: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c46c) {
            ctx->pc = 0x26C47Cu;
            goto label_26c47c;
        }
    }
    ctx->pc = 0x26C474u;
label_26c474:
    // 0x26c474: 0xc09c8ae  jal         func_2722B8
    ctx->pc = 0x26C474u;
    SET_GPR_U32(ctx, 31, 0x26C47Cu);
    ctx->pc = 0x26C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C474u;
    // 0x26c478: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2722B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2722B8u, 0x26C474u, 0x26C47Cu)) {
        return;
    }
    ctx->pc = 0x26C47Cu;
label_26c47c:
    // 0x26c47c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26c480:
    // 0x26c480: 0x3e00008  jr          $ra
    ctx->pc = 0x26C480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C480u;
        // 0x26c484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C488u;
}
